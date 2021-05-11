using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;



namespace ExportnSetup
{
    public class SetupParser
    {
        public static string currentDir = System.IO.Directory.GetCurrentDirectory() + "\\";

        private string result { get; set; }


        public void addData(string appName, string AppVersion, string Publisher,
            string AppURL, string EXEName, string outputDir, string OutputFilename, string[] files, string[] dirs)
        {
            string appID = "{{D9F03B19-6978-4136-8FCD-8B5A4CBE74C9}";

            #region result
            result =
                "#define MyAppName \"" + appName + "\"\n" +
                "#define MyAppVersion \"" + AppVersion + "\"\n" +
                "#define MyAppPublisher \"" + Publisher + "\"\n" +
                "#define MyAppURL \"" + AppURL + "\"\n" +
                "#define MyAppExeName \"build2.exe\"\n" +
                "\n" +
                "[Setup]\n" +
                "AppId=" + appID + "\n" +
                "AppName={#MyAppName}\n" +
                "AppVersion ={#MyAppVersion}\n" +
                "AppPublisher={#MyAppPublisher}\n" +
                "AppPublisherURL={#MyAppURL}\n" +
                "AppSupportURL ={#MyAppURL}\n" +
                "AppUpdatesURL={#MyAppURL}\n" +
                "DefaultDirName={autopf}\\{#MyAppName}\n" +
                "DisableProgramGroupPage=yes\n" +
                "OutputDir=" + outputDir + "\n" +
                "OutputBaseFilename=" + OutputFilename + "\n" +
                "Compression=lzma\n" +
                "SolidCompression=yes\n" +
                "WizardStyle=modern\n" +
                "\n" +
                "[Languages]\n" +
                "Name: \"english\"; MessagesFile: \"compiler:Default.isl\"\n" +
                "\n" +
                "[Tasks]\n" +
                "Name: \"desktopicon\"; Description: \"{cm:CreateDesktopIcon}\"; GroupDescription: \"{cm:AdditionalIcons}\"; Flags: unchecked\n" +
                "\n" +
                "[Files]\n" +
                generateFilesString(files, dirs) + "\n" +
                "\n" +
                "[Icons]\n" +
                "Name: \"{autoprograms}\\{#MyAppName}\"; Filename: \"{app}\\{#MyAppExeName}\"\n" +
                "Name: \"{autodesktop}\\{#MyAppName}\"; Filename: \"{app}\\{#MyAppExeName}\"; Tasks: desktopicon\n" +
                "\n" +
                "[Run]\n" +
                "Filename: \"{app}\\{#MyAppExeName}\"; Description: \"{cm:LaunchProgram,{#StringChange(MyAppName, '&', '&&')}}\"; Flags: nowait postinstall skipifsilent\n\n";
            #endregion

            System.IO.File.WriteAllText(currentDir + "Assets\\Scripts\\custom plugins\\Export'n'setup\\resources\\innosetup\\Inno Setup 6\\script.iss", result);

        }

        private string generateFilesString(string[] files, string[] dirs)
        {

            string tmp = "";
            files[0] += "\\{#MyAppExeName}";

            foreach (var file in files)
            {

                tmp += "Source: \"" + currentDir + file + "\"; DestDir: \"{app}\"; Flags: ignoreversion\n";
            }

            for (int i = 0; i < dirs.Length; i++)
            {
                dirs[i] += "*";
            }
            foreach (var dir in dirs)
            {

                tmp += "Source: \"" + currentDir + dir + "\"; DestDir: \"{app}\"; Flags: ignoreversion recursesubdirs createallsubdirs\n";
            }
            return tmp;
        }


    }
}
