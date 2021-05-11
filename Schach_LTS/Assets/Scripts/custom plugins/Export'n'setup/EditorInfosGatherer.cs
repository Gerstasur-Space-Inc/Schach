#if UNITY_EDITOR
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity;
using UnityEditor;



namespace ExportnSetup
{
    [ExecuteInEditMode]//for running in the editor...
    [CreateAssetMenu(menuName = "Scriptable Objects/Installer Options")]
    public class EditorInfosGatherer : ScriptableObject
    {

        public static SetupParser parser = new SetupParser();

        [SerializeField] private static string companyName;
        [SerializeField] private static string productName;
        [SerializeField] private static string ApplicationWebsite;
        [SerializeField] private static string ApplicationFolderName;
        [SerializeField] private static bool AllowUserToChangeTheAppFolder;
        [SerializeField] private static bool AllowUserToStartTheAppAfterSetupHasFinished;
        [SerializeField] private static bool CreateShortcutToTheMainExecutbleInTheCommonStartMenuProgramsFolder;
        [SerializeField] private static bool AllowUserToCreateaDesktopShortcut;
        [SerializeField] private static string CompilerOutputBaseFileName = "chess";

        public static string outputdir = SetupParser.currentDir + "Installer\\one";


        public static void OnDataUpdated()
        {
            companyName = UnityEditor.PlayerSettings.companyName;
            productName = UnityEditor.PlayerSettings.productName;
        }

        [MenuItem(MenuHandler.appname + "/" + "Update Data")]
        public static void updateData()
        {

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
    }
}
#endif
