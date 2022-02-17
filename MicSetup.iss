#define MyAppName "MicSetup"
#define MyAppVersion "4.1"
#define MyAppPublisher "Michael Agarkov"
#define MyAppURL "https://github.com/MichaelAgarkov"
#define MyAppExeName "MicSetup.exe"

[Setup]
AppId={{89A15831-2803-4C58-B36A-8138BACA2ED9}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
;AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName=C:\{#MyAppName}
DisableProgramGroupPage=yes
LicenseFile=License.rtf
PrivilegesRequiredOverridesAllowed=dialog
OutputDir=.
OutputBaseFilename={#MyAppName} Setup
SetupIconFile=icon.ico
Compression=lzma/normal
SolidCompression=yes
WizardStyle=classic
DisableWelcomePage=no
WizardImageFile=Wizard Image.bmp
WizardSmallImageFile=Wizard Small Image.bmp

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked

[Files]
Source: "MicSetup.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "Installer.engine"; DestDir: "{app}"; Flags: ignoreversion
Source: "License.rtf"; DestDir: "{app}"; Flags: ignoreversion
Source: "License.txt"; DestDir: "{app}"; Flags: ignoreversion
Source: "Donate.bmp"; Flags: dontcopy

[Icons]
Name: "{autoprograms}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"
Name: "{autodesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon

[Run]
Filename: "{app}\{#MyAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, '&', '&&')}}"; Flags: nowait postinstall skipifsilent

[Code]
procedure DonateImageOnClick(Sender: TObject);
var
  ErrorCode: Integer;
begin
  ShellExecAsOriginalUser('open', 'https://www.donationalerts.com/r/MichaelAgarkov', '', '', SW_SHOWNORMAL, ewNoWait, ErrorCode);
end;

<event('InitializeWizard')>
procedure DonateImageInitializeWizard;
var
  DonateImageFileName: String;
  DonateImage: TBitmapImage;
  BevelTop: Integer;
begin
  DonateImageFileName := ExpandConstant('{tmp}\Donate.bmp');
  ExtractTemporaryFile(ExtractFileName(DonateImageFileName));
  DonateImage := TBitmapImage.Create(WizardForm);
  DonateImage.AutoSize := True;
  DonateImage.Bitmap.LoadFromFile(DonateImageFileName);
  DonateImage.Anchors := [akLeft, akBottom];
  BevelTop := WizardForm.Bevel.Top;
  DonateImage.Top := BevelTop + (WizardForm.ClientHeight - BevelTop - DonateImage.Bitmap.Height) div 2;
  DonateImage.Left := DonateImage.Top - BevelTop;
  DonateImage.Cursor := crHand;
  DonateImage.OnClick := @DonateImageOnClick;
  DonateImage.Parent := WizardForm;
end;
