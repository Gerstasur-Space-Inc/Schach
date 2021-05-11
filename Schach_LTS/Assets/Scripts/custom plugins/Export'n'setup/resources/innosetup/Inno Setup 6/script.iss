#define MyAppName "Chess Version 2"
#define MyAppVersion "1"
#define MyAppPublisher "Gerstasur Space"
#define MyAppURL ""
#define MyAppExeName "build2.exe"

[Setup]
AppId={{D9F03B19-6978-4136-8FCD-8B5A4CBE74C9}
AppName={#MyAppName}
AppVersion ={#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL ={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName={autopf}\{#MyAppName}
DisableProgramGroupPage=yes
OutputDir=C:\Users\Was ist einzugeben\Documents\GitHub\Schach\Schach_LTS\Installer\one
OutputBaseFilename=chess
Compression=lzma
SolidCompression=yes
WizardStyle=modern

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked

[Files]
Source: "C:\Users\Was ist einzugeben\Documents\GitHub\Schach\Schach_LTS\Builds\build2\{#MyAppExeName}"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Was ist einzugeben\Documents\GitHub\Schach\Schach_LTS\Builds\build2\UnityCrashHandler64.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Was ist einzugeben\Documents\GitHub\Schach\Schach_LTS\Builds\build2\UnityPlayer.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Was ist einzugeben\Documents\GitHub\Schach\Schach_LTS\Builds\build2\build2_Data*"; DestDir: "{app}"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Users\Was ist einzugeben\Documents\GitHub\Schach\Schach_LTS\Builds\build2\MonoBleedingEdge*"; DestDir: "{app}"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "C:\Users\Was ist einzugeben\Documents\GitHub\Schach\Schach_LTS\Builds\build2*"; DestDir: "{app}"; Flags: ignoreversion recursesubdirs createallsubdirs


[Icons]
Name: "{autoprograms}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"
Name: "{autodesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon

[Run]
Filename: "{app}\{#MyAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, '&', '&&')}}"; Flags: nowait postinstall skipifsilent

