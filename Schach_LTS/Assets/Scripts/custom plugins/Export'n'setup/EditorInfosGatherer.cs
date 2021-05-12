#if UNITY_EDITOR
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity;
using UnityEditor;



namespace ExportnSetup
{


    public class EditorInfosGatherer
    {

        public static SetupParser parser = new SetupParser();

        public static string companyName = "Default Company";
        public static string productName = "Amazing Game";
        public static string ApplicationWebsite = "Awsome Website";
        public static string ApplicationFolderName;
        public static bool AllowUserToChangeTheAppFolder = true;
        public static bool AllowUserToStartTheAppAfterSetupHasFinished = true;
        public static bool CreateShortcutToTheMainExecutbleInTheCommonStartMenuProgramsFolder = true;
        public static bool AllowUserToCreateaDesktopShortcut = true;
        public static bool choosinstallmodeadmin = true;
        public static bool adminisDefaultinstallmode = true;
        public static string appversion = "0.1";

        public static string CompilerOutputBaseFileName = "setup";

        public static string outputdir = SetupParser.currentDir + "Installer\\one";


        public static void OnDataUpdated()
        {
            companyName = PlayerSettings.companyName;
            productName = PlayerSettings.productName;
        }

        [MenuItem(MenuHandler.appname + "/" + "Update Data")]
        public static void updateData()
        {
            savePlayerPrefs();
            readPlayerPrefs();
            OnDataUpdated();
            parser.addData(productName, "1", companyName, ApplicationWebsite, CompilerOutputBaseFileName, outputdir, CompilerOutputBaseFileName, generateFiles(), generateDirs());
        }
        static string[] generateFiles()
        {
            return new string[] { "Builds\\build2", "Builds\\build2\\UnityCrashHandler64.exe", "Builds\\build2\\UnityPlayer.dll" };
        }
        static string[] generateDirs()
        {
            return new string[] { "Builds\\build2\\build2_Data", "Builds\\build2\\MonoBleedingEdge", "Builds\\build2" };
        }

        public static void savePlayerPrefs()
        {
            PlayerPrefs.SetString(nameof(companyName), companyName);
            PlayerPrefs.SetString(nameof(productName), productName);
            PlayerPrefs.SetString(nameof(ApplicationWebsite), ApplicationWebsite);
            PlayerPrefs.SetString(nameof(ApplicationFolderName), ApplicationFolderName);
            PlayerPrefs.SetInt(nameof(AllowUserToChangeTheAppFolder), AllowUserToChangeTheAppFolder ? 1 : 0);
            PlayerPrefs.SetInt(nameof(AllowUserToStartTheAppAfterSetupHasFinished), AllowUserToStartTheAppAfterSetupHasFinished ? 1 : 0);
            PlayerPrefs.SetInt(nameof(CreateShortcutToTheMainExecutbleInTheCommonStartMenuProgramsFolder), CreateShortcutToTheMainExecutbleInTheCommonStartMenuProgramsFolder ? 1 : 0);
            PlayerPrefs.SetInt(nameof(AllowUserToCreateaDesktopShortcut), AllowUserToCreateaDesktopShortcut ? 1 : 0);
            PlayerPrefs.SetInt(nameof(choosinstallmodeadmin), choosinstallmodeadmin ? 1 : 0);
            PlayerPrefs.SetInt(nameof(adminisDefaultinstallmode), adminisDefaultinstallmode ? 1 : 0);
            PlayerPrefs.SetString(nameof(appversion), appversion);
            PlayerPrefs.Save();
        }

        public static void readPlayerPrefs()
        {
            companyName = PlayerPrefs.GetString(nameof(companyName));
            productName = PlayerPrefs.GetString(nameof(productName));
            ApplicationWebsite = PlayerPrefs.GetString(nameof(ApplicationWebsite));
            ApplicationFolderName = PlayerPrefs.GetString(nameof(ApplicationFolderName));
            AllowUserToChangeTheAppFolder = PlayerPrefs.GetInt(nameof(AllowUserToChangeTheAppFolder)) == 0 ? false : true;
            AllowUserToStartTheAppAfterSetupHasFinished = PlayerPrefs.GetInt(nameof(AllowUserToStartTheAppAfterSetupHasFinished)) == 0 ? false : true;
            CreateShortcutToTheMainExecutbleInTheCommonStartMenuProgramsFolder = PlayerPrefs.GetInt(nameof(CreateShortcutToTheMainExecutbleInTheCommonStartMenuProgramsFolder)) == 0 ? false : true;
            AllowUserToCreateaDesktopShortcut = PlayerPrefs.GetInt(nameof(AllowUserToCreateaDesktopShortcut)) == 0 ? false : true;
            choosinstallmodeadmin = PlayerPrefs.GetInt(nameof(choosinstallmodeadmin)) == 0 ? false : true;
            adminisDefaultinstallmode = PlayerPrefs.GetInt(nameof(adminisDefaultinstallmode)) == 0 ? false : true;
            appversion = PlayerPrefs.GetString(nameof(appversion));
            Debug.Log("Saved Player Prefs");

        }
    }
}
#endif
