unit About;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  AboutMicSetup = class(Form)
    procedure linkLabel1_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
  {$region FormDesigner}
  private
    {$resource About.AboutMicSetup.resources}
    pictureBox1: PictureBox;
    tabControl1: TabControl;
    tabPage1: TabPage;
    richTextBox1: RichTextBox;
    linkLabel1: LinkLabel;
    {$include About.AboutMicSetup.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure AboutMicSetup.linkLabel1_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
begin
  exec('https://github.com/MichaelAgarkov');
end;

end.
