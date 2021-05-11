#if UNITY_EDITOR

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;

namespace ExportnSetup
{
    public class SetupDirs
    {

        [MenuItem(MenuHandler.appname + "/Setup")]
        public static void Setup()
        {
            
            string thidir = Directory.GetCurrentDirectory();
            Directory.CreateDirectory(thidir + "\\Builds\\build2");
            Directory.CreateDirectory(thidir + "\\Installer\\one");
            Debug.Log("Setup Completed!");
        }
    }
}
#endif
