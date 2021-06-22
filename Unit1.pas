unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms, System.ComponentModel, About;

type
  Form1 = class(Form)
    procedure aboutToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure openFileDialog1_FileOk(sender: Object; e: CancelEventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure openFileDialog2_FileOk(sender: Object; e: CancelEventArgs);
    procedure treeView1_AfterSelect(sender: Object; e: TreeViewEventArgs);
    procedure button3_Click(sender: Object; e: EventArgs);
    procedure buildToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure showInstallersToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure closeMicSetupToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure checkBox1_CheckedChanged(sender: Object; e: EventArgs);
    procedure button4_Click(sender: Object; e: EventArgs);
    procedure richTextBox1_TextChanged(sender: Object; e: EventArgs);
    procedure saveFileDialog1_FileOk(sender: Object; e: CancelEventArgs);
  {$region FormDesigner}
  private
    {$resource Unit1.Form1.resources}
    menuStrip1: MenuStrip;
    imageList1: ImageList;
    components: System.ComponentModel.IContainer;
    installerToolStripMenuItem: ToolStripMenuItem;
    aboutToolStripMenuItem: ToolStripMenuItem;
    openFileDialog1: OpenFileDialog;
    openFileDialog2: OpenFileDialog;
    BuildPanel: Panel;
    progressBar1: ProgressBar;
    button3: Button;
    FilesPanel: Panel;
    button1: Button;
    textBox2: TextBox;
    label3: &Label;
    InfoPanel: Panel;
    button2: Button;
    textBox3: TextBox;
    label4: &Label;
    label2: &Label;
    textBox1: TextBox;
    label1: &Label;
    buildToolStripMenuItem: ToolStripMenuItem;
    toolStripSeparator1: ToolStripSeparator;
    toolStripSeparator2: ToolStripSeparator;
    closeMicSetupToolStripMenuItem: ToolStripMenuItem;
    showInstallersToolStripMenuItem: ToolStripMenuItem;
    textBox4: TextBox;
    label5: &Label;
    checkBox1: CheckBox;
    button4: Button;
    richTextBox1: RichTextBox;
    saveFileDialog1: SaveFileDialog;
    treeView1: TreeView;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.aboutToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  Form(new AboutMicSetup).show;
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  openFileDialog1.ShowDialog;
end;

procedure Form1.openFileDialog1_FileOk(sender: Object; e: CancelEventArgs);
begin
  textBox2.Text := openFileDialog1.FileName;
end;

procedure Form1.button2_Click(sender: Object; e: EventArgs);
begin
  openFileDialog2.ShowDialog;
end;

procedure Form1.openFileDialog2_FileOk(sender: Object; e: CancelEventArgs);
begin
  textBox3.Text := openFileDialog2.FileName;
end;

procedure Form1.treeView1_AfterSelect(sender: Object; e: TreeViewEventArgs);
begin
  if(treeView1.SelectedNode = treeView1.Nodes[0]) then begin
    InfoPanel.Visible := true;
    FilesPanel.Visible := false;
    BuildPanel.Visible := false;
  end;
  if(treeView1.SelectedNode = treeView1.Nodes[1]) then begin
    FilesPanel.Visible := true;
    InfoPanel.Visible := false;
    BuildPanel.Visible := false;
  end;
  if(treeView1.SelectedNode = treeView1.Nodes[2]) then begin
    BuildPanel.Visible := true;
    InfoPanel.Visible := false;
    FilesPanel.Visible := false;
  end;
end;

procedure Form1.button3_Click(sender: Object; e: EventArgs);
begin
  if((textBox1.Text <> '') and (textBox2.Text <> '') and ((textBox3.Text = '') and checkBox1.Checked = false) and (textBox4.Text <> '')) then begin
    label5.Visible := false;
    richTextBox1.Text := 'MicSetup v2.0' + NewLine + '======== Build log ========' + NewLine;
    System.IO.Directory.CreateDirectory(Environment.GetFolderPath(Environment.SpecialFolder.MyDocuments) + '\MicSetup Installers\' + textBox1.Text + '\' + textBox4.Text);
    richTextBox1.Text := richTextBox1.Text + 'Output folder: ' + Environment.GetFolderPath(Environment.SpecialFolder.MyDocuments) + '\MicSetup Installers\' + textBox1.Text + '\' + textBox4.Text + NewLine;
    progressBar1.Value := 1;
    WriteLines(Environment.GetFolderPath(Environment.SpecialFolder.MyDocuments) + '\MicSetup Installers\' + textBox1.Text + '\' + textBox4.Text + '\' + 'programname.cfg', textBox1.Lines);
    progressBar1.Value := 10;
    WriteLines(Environment.GetFolderPath(Environment.SpecialFolder.MyDocuments) + '\MicSetup Installers\' + textBox1.Text + '\' + textBox4.Text + '\' + 'programver.cfg', textBox4.Lines);
    richTextBox1.Text := richTextBox1.Text + 'Created config files' + NewLine;
    if(checkBox1.Checked) then begin
      progressBar1.Value := 20;
      System.IO.File.Copy(textBox3.Text, Environment.GetFolderPath(Environment.SpecialFolder.MyDocuments) + '\MicSetup Installers\' + textBox1.Text + '\' + textBox4.Text + '\' + 'License.txt');
      richTextBox1.Text := richTextBox1.Text + 'Added EULA: License.txt' + NewLine;
    end;
    progressBar1.Value := 30;
    System.IO.File.Copy(textBox2.Text, Environment.GetFolderPath(Environment.SpecialFolder.MyDocuments) + '\MicSetup Installers\' + textBox1.Text + '\' + textBox4.Text + '\' + textBox1.Text + '.exe');
    richTextBox1.Text := richTextBox1.Text + 'Copied main executable: ' + textBox1.Text + '.exe' + NewLine;
    progressBar1.Value := 50;
    System.IO.File.Copy('Installer.engine', Environment.GetFolderPath(Environment.SpecialFolder.MyDocuments) + '\MicSetup Installers\' + textBox1.Text + '\' + textBox4.Text + '\' + textBox1.Text + 'Installer.exe');
    richTextBox1.Text := richTextBox1.Text + 'Created installer: ' + textBox1.Text + 'Installer.exe' + NewLine + 'Installation building process finished';
    progressBar1.Value := 100;
  end else label5.Visible := true;
end;

procedure Form1.buildToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  treeView1.SelectedNode := treeView1.Nodes[2];
  if((textBox1.Text <> '') and (textBox2.Text <> '') and ((textBox3.Text = '') and checkBox1.Checked = false) and (textBox4.Text <> '')) then begin
    label5.Visible := false;
    richTextBox1.Text := 'MicSetup v2.0' + NewLine + '======== Build log ========' + NewLine;
    System.IO.Directory.CreateDirectory(Environment.GetFolderPath(Environment.SpecialFolder.MyDocuments) + '\MicSetup Installers\' + textBox1.Text + '\' + textBox4.Text);
    richTextBox1.Text := richTextBox1.Text + 'Output folder: ' + Environment.GetFolderPath(Environment.SpecialFolder.MyDocuments) + '\MicSetup Installers\' + textBox1.Text + '\' + textBox4.Text + NewLine;
    progressBar1.Value := 1;
    WriteLines(Environment.GetFolderPath(Environment.SpecialFolder.MyDocuments) + '\MicSetup Installers\' + textBox1.Text + '\' + textBox4.Text + '\' + 'programname.cfg', textBox1.Lines);
    progressBar1.Value := 10;
    WriteLines(Environment.GetFolderPath(Environment.SpecialFolder.MyDocuments) + '\MicSetup Installers\' + textBox1.Text + '\' + textBox4.Text + '\' + 'programver.cfg', textBox4.Lines);
    richTextBox1.Text := richTextBox1.Text + 'Created config files' + NewLine;
    if(checkBox1.Checked) then begin
      progressBar1.Value := 20;
      System.IO.File.Copy(textBox3.Text, Environment.GetFolderPath(Environment.SpecialFolder.MyDocuments) + '\MicSetup Installers\' + textBox1.Text + '\' + textBox4.Text + '\' + 'License.txt');
      richTextBox1.Text := richTextBox1.Text + 'Added EULA: License.txt' + NewLine;
    end;
    progressBar1.Value := 30;
    System.IO.File.Copy(textBox2.Text, Environment.GetFolderPath(Environment.SpecialFolder.MyDocuments) + '\MicSetup Installers\' + textBox1.Text + '\' + textBox4.Text + '\' + textBox1.Text + '.exe');
    richTextBox1.Text := richTextBox1.Text + 'Copied main executable: ' + textBox1.Text + '.exe' + NewLine;
    progressBar1.Value := 50;
    System.IO.File.Copy('Installer.engine', Environment.GetFolderPath(Environment.SpecialFolder.MyDocuments) + '\MicSetup Installers\' + textBox1.Text + '\' + textBox4.Text + '\' + textBox1.Text + 'Installer.exe');
    richTextBox1.Text := richTextBox1.Text + 'Created installer: ' + textBox1.Text + 'Installer.exe' + NewLine + 'Installation building process finished';
    progressBar1.Value := 100;
  end else label5.Visible := true;
end;

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
  System.IO.Directory.CreateDirectory(Environment.GetFolderPath(Environment.SpecialFolder.MyDocuments) + '\MicSetup Installers');
end;

procedure Form1.showInstallersToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  exec(Environment.GetFolderPath(Environment.SpecialFolder.MyDocuments) + '\MicSetup Installers');
end;

procedure Form1.closeMicSetupToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  halt;
end;

procedure Form1.checkBox1_CheckedChanged(sender: Object; e: EventArgs);
begin
  textBox3.Enabled := checkBox1.Checked;
  button2.Enabled := checkBox1.Checked;
  label4.Enabled := checkBox1.Checked;
end;

procedure Form1.button4_Click(sender: Object; e: EventArgs);
begin
  saveFileDialog1.FileName := textBox1.Text + ' ' + textBox4.Text + ' setup build';
  saveFileDialog1.ShowDialog;
end;

procedure Form1.richTextBox1_TextChanged(sender: Object; e: EventArgs);
begin
  button4.Enabled := true;
end;

procedure Form1.saveFileDialog1_FileOk(sender: Object; e: CancelEventArgs);
begin
  var Log := new System.IO.StreamWriter(saveFileDialog1.FileName, false, System.Text.Encoding.Default);
  Log.Write(richTextBox1.Text);
  Log.Close;
end;

end.
