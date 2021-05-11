#if UNITY_EDITOR
using UnityEditor;


using UnityEngine;
using UnityEditor.Build.Reporting;
using System;
using System.IO;


namespace ExportnSetup
{
    public class MenuHandler : MonoBehaviour
    {

        public const string appname = "Export'n'Setup";
        public const string subfolder = "Export options";
        public static string innosetuploc = SetupParser.currentDir + "Assets\\Scripts\\custom plugins\\Export'n'setup\\resources\\innosetup\\Inno Setup 6";
        public static string command0 = "cd " + innosetuploc;
        public static string command1 = "iscc /q script.iss";


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
