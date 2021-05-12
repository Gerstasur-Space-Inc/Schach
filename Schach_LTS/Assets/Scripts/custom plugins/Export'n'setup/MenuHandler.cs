#if UNITY_EDITOR
using UnityEditor;


using UnityEngine;
using UnityEditor.Build.Reporting;
using System;
using System.IO;


namespace ExportnSetup
{
    public class MenuHandler : EditorWindow
    {

        public static bool noSetup = true;

        public const string appname = "Export'n'Setup";
        public const string subfolder = "Export options";
        public static string innosetuploc = SetupParser.currentDir + "Assets\\Scripts\\custom plugins\\Export'n'setup\\resources\\innosetup\\Inno Setup 6";
        public static string command0 = "cd " + innosetuploc;
        public static string command1 = "iscc /q script.iss";
        public static bool saveSettings = true;

        [MenuItem(appname + "/Settings")]
        public static void showWindow()
        {
            EditorInfosGatherer.readPlayerPrefs();
            GetWindow<MenuHandler>("Export'n'Setup Settings");
        }

        private void OnGUI()
        {
            if (noSetup) { EditorGUILayout.HelpBox("Please complete Setup", MessageType.Error); noSetup = false; }
            EditorGUILayout.HelpBox("Here you can change the default Export and Installer Settings", MessageType.Info);
            EditorGUILayout.HelpBox("The instaler is windows only | Settings matching the build settings will be set for all buildtargets", MessageType.Warning);

            GUILayout.Space(EditorGUIUtility.singleLineHeight);
            GUILayout.Label("__________________________________________________________");
            GUILayout.Label("Installer only options: ", EditorStyles.boldLabel);
            createInstallerFields();

            GUILayout.Space(EditorGUIUtility.singleLineHeight);
            GUILayout.Label("__________________________________________________________");
            GUILayout.Label("Options for both", EditorStyles.boldLabel);
            createBothFields();

            GUILayout.Space(EditorGUIUtility.singleLineHeight);
            GUILayout.Label("__________________________________________________________");
            GUILayout.Label("Build only options", EditorStyles.boldLabel);
            createBuildFields();

            saveSettings = EditorGUILayout.ToggleLeft("Save the current Settings", saveSettings);
            

            GUILayout.Label("__________________________________________________________");
            GUILayout.Space(2 * EditorGUIUtility.singleLineHeight);
            GUILayout.Label("Export: ");
            addButtons();


            

            addfavouritecolor();
        }
        
        private void OnDisable()
        {
            if (saveSettings) { EditorInfosGatherer.savePlayerPrefs(); }
        }
        void addButtons()
        {
            if (GUILayout.Button("Export")) { Build(); }

            if (GUILayout.Button("Export and Create Installer")) { BnI(); }

            if (GUILayout.Button("Create Installer")) { Installer(); }

            if (GUILayout.Button("Setup!")) { SetupDirs.Setup(); }

            if(GUILayout.Button("Update Data")) { EditorInfosGatherer.updateData(); }
        }

        void addfavouritecolor()
        {
            GUILayout.Label("Your favourite Color;)");
            EditorGUILayout.ColorField(Color.cyan);
        }

        void createInstallerFields()
        {
            GUIContent gc = new GUIContent();
            gc.text = "Install mode";
            gc.tooltip = "Choose the install mode";
           

            EditorInfosGatherer.ApplicationWebsite = EditorGUILayout.TextField("Do you have a Website? ", EditorInfosGatherer.ApplicationWebsite);
            EditorInfosGatherer.CompilerOutputBaseFileName = EditorGUILayout.TextField("The Name of your Installer: ", EditorInfosGatherer.CompilerOutputBaseFileName);
            
          EditorInfosGatherer.appversion=  EditorGUILayout.TextField("Appversion: ", EditorInfosGatherer.appversion );
            
            EditorInfosGatherer.AllowUserToChangeTheAppFolder =  EditorGUILayout.ToggleLeft("User can change program folder", EditorInfosGatherer.AllowUserToChangeTheAppFolder);
           EditorInfosGatherer.AllowUserToStartTheAppAfterSetupHasFinished =  EditorGUILayout.ToggleLeft("User can start program after setup", EditorInfosGatherer.AllowUserToStartTheAppAfterSetupHasFinished);
           
            //EditorInfosGatherer.AllowUserToCreateaDesktopShortcut= EditorGUILayout.ToggleLeft("Allow user to create Desktop shortcut", EditorInfosGatherer.AllowUserToCreateaDesktopShortcut);
            //EditorInfosGatherer.CreateShortcutToTheMainExecutbleInTheCommonStartMenuProgramsFolder = EditorGUILayout.ToggleLeft("User can toggle, shortcut in startmenu", EditorInfosGatherer.CreateShortcutToTheMainExecutbleInTheCommonStartMenuProgramsFolder);

            EditorInfosGatherer.choosinstallmodeadmin = EditorGUILayout.ToggleLeft("User can choos Admin mode", EditorInfosGatherer.choosinstallmodeadmin);

            EditorInfosGatherer.adminisDefaultinstallmode= EditorGUILayout.ToggleLeft("Normaluser prieveleges", EditorInfosGatherer.adminisDefaultinstallmode);

        }

        void createBothFields()
        {
            EditorInfosGatherer.companyName = EditorGUILayout.TextField("Your Company´s Name: ", EditorInfosGatherer.companyName);
            PlayerSettings.companyName = EditorInfosGatherer.companyName;
            EditorInfosGatherer.productName = EditorGUILayout.TextField("What´s your product called: ", EditorInfosGatherer.productName);
            PlayerSettings.productName = EditorInfosGatherer.productName;
        }

        void createBuildFields()
        {
            PlayerSettings.bakeCollisionMeshes = EditorGUILayout.ToggleLeft("Bake Collision Meshes", PlayerSettings.bakeCollisionMeshes);
            if(GUILayout.Button("More Build Player settings")) { BuildPlayerWindow.ShowBuildPlayerWindow(); }

        }
        [MenuItem(appname + "/" + subfolder + "/Build")]
        public static void Build()
        {
           
            EditorInfosGatherer.updateData();
            BuildPlayerOptions buildPlayerOptions = new BuildPlayerOptions();
            //buildPlayerOptions.scenes = new[] { "Assets//AnfangsSzene.unity" };
            //Build current Szene
            buildPlayerOptions.locationPathName = "Builds\\build2\\build2.exe";
            buildPlayerOptions.target = BuildTarget.StandaloneWindows64;
            buildPlayerOptions.options = BuildOptions.None;

            BuildReport report = BuildPipeline.BuildPlayer(buildPlayerOptions);
            BuildSummary summary = report.summary;

            if (summary.result == BuildResult.Succeeded)
            {
                Debug.Log("Build succeeded: " + summary.totalSize + " bytes");
            }

            if (summary.result == BuildResult.Failed)
            {
                Debug.Log("Build failed");
            }

        }

        [MenuItem(appname + "/" + subfolder + "/Build and Create Installer")]
        public static void BnI()
        {
            EditorInfosGatherer.updateData();
            Build();
            Installer();
        }
        [MenuItem(appname + "/" + subfolder + "/CreateInstaller")]
        public static void Installer()
        {
            EditorInfosGatherer.updateData();
            //  createNewFolderforBuild();
            Debug.Log("Compiling...");
            executeCommand();
            Debug.Log("Finished");
        }




        public static void executeCommand()
        {
            System.Diagnostics.Process process = new System.Diagnostics.Process();
            System.Diagnostics.ProcessStartInfo startInfo = new System.Diagnostics.ProcessStartInfo();
            startInfo.WindowStyle = System.Diagnostics.ProcessWindowStyle.Normal;
            startInfo.FileName = "cmd.exe";
            startInfo.Arguments = "/C" + command0 + "&&" + command1;
            process.StartInfo = startInfo;
            process.Start();
        }
    }
}
#endif
