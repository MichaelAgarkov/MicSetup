procedure InitializeComponent;
    begin
        self.components := new System.ComponentModel.Container();
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        var treeNode11: System.Windows.Forms.TreeNode := new System.Windows.Forms.TreeNode('Information');
        var treeNode12: System.Windows.Forms.TreeNode := new System.Windows.Forms.TreeNode('Files');
        var treeNode13: System.Windows.Forms.TreeNode := new System.Windows.Forms.TreeNode('Build');
        self.menuStrip1 := new System.Windows.Forms.MenuStrip();
        self.installerToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.buildToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripSeparator1 := new System.Windows.Forms.ToolStripSeparator();
        self.showInstallersToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripSeparator2 := new System.Windows.Forms.ToolStripSeparator();
        self.closeMicSetupToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.aboutToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.treeView1 := new System.Windows.Forms.TreeView();
        self.imageList1 := new System.Windows.Forms.ImageList(self.components);
        self.openFileDialog1 := new System.Windows.Forms.OpenFileDialog();
        self.openFileDialog2 := new System.Windows.Forms.OpenFileDialog();
        self.BuildPanel := new System.Windows.Forms.Panel();
        self.label6 := new System.Windows.Forms.Label();
        self.button5 := new System.Windows.Forms.Button();
        self.button4 := new System.Windows.Forms.Button();
        self.richTextBox1 := new System.Windows.Forms.RichTextBox();
        self.label5 := new System.Windows.Forms.Label();
        self.progressBar1 := new System.Windows.Forms.ProgressBar();
        self.button3 := new System.Windows.Forms.Button();
        self.FilesPanel := new System.Windows.Forms.Panel();
        self.button1 := new System.Windows.Forms.Button();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.label3 := new System.Windows.Forms.Label();
        self.InfoPanel := new System.Windows.Forms.Panel();
        self.checkBox1 := new System.Windows.Forms.CheckBox();
        self.textBox4 := new System.Windows.Forms.TextBox();
        self.button2 := new System.Windows.Forms.Button();
        self.textBox3 := new System.Windows.Forms.TextBox();
        self.label4 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.label1 := new System.Windows.Forms.Label();
        self.saveFileDialog1 := new System.Windows.Forms.SaveFileDialog();
        self.TestInstaller := new System.Diagnostics.Process();
        self.menuStrip1.SuspendLayout();
        self.BuildPanel.SuspendLayout();
        self.FilesPanel.SuspendLayout();
        self.InfoPanel.SuspendLayout();
        self.SuspendLayout();
        // 
        // menuStrip1
        // 
        self.menuStrip1.BackgroundImage := (System.Drawing.Image(resources.GetObject('menuStrip1.BackgroundImage')));
        self.menuStrip1.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[2](self.installerToolStripMenuItem, self.aboutToolStripMenuItem));
        self.menuStrip1.Location := new System.Drawing.Point(0, 0);
        self.menuStrip1.Name := 'menuStrip1';
        self.menuStrip1.Padding := new System.Windows.Forms.Padding(6, 2, 6, 2);
        self.menuStrip1.Size := new System.Drawing.Size(419, 24);
        self.menuStrip1.TabIndex := 0;
        self.menuStrip1.Text := 'menuStrip1';
        // 
        // installerToolStripMenuItem
        // 
        self.installerToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[5](self.buildToolStripMenuItem, self.toolStripSeparator1, self.showInstallersToolStripMenuItem, self.toolStripSeparator2, self.closeMicSetupToolStripMenuItem));
        self.installerToolStripMenuItem.ForeColor := System.Drawing.Color.White;
        self.installerToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('installerToolStripMenuItem.Image')));
        self.installerToolStripMenuItem.Name := 'installerToolStripMenuItem';
        self.installerToolStripMenuItem.Size := new System.Drawing.Size(76, 20);
        self.installerToolStripMenuItem.Text := 'Installer';
        // 
        // buildToolStripMenuItem
        // 
        self.buildToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('buildToolStripMenuItem.Image')));
        self.buildToolStripMenuItem.Name := 'buildToolStripMenuItem';
        self.buildToolStripMenuItem.Size := new System.Drawing.Size(156, 22);
        self.buildToolStripMenuItem.Text := 'Build';
        self.buildToolStripMenuItem.Click += buildToolStripMenuItem_Click;
        // 
        // toolStripSeparator1
        // 
        self.toolStripSeparator1.Name := 'toolStripSeparator1';
        self.toolStripSeparator1.Size := new System.Drawing.Size(153, 6);
        // 
        // showInstallersToolStripMenuItem
        // 
        self.showInstallersToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('showInstallersToolStripMenuItem.Image')));
        self.showInstallersToolStripMenuItem.Name := 'showInstallersToolStripMenuItem';
        self.showInstallersToolStripMenuItem.Size := new System.Drawing.Size(156, 22);
        self.showInstallersToolStripMenuItem.Text := 'Show installers';
        self.showInstallersToolStripMenuItem.Click += showInstallersToolStripMenuItem_Click;
        // 
        // toolStripSeparator2
        // 
        self.toolStripSeparator2.Name := 'toolStripSeparator2';
        self.toolStripSeparator2.Size := new System.Drawing.Size(153, 6);
        // 
        // closeMicSetupToolStripMenuItem
        // 
        self.closeMicSetupToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('closeMicSetupToolStripMenuItem.Image')));
        self.closeMicSetupToolStripMenuItem.Name := 'closeMicSetupToolStripMenuItem';
        self.closeMicSetupToolStripMenuItem.Size := new System.Drawing.Size(156, 22);
        self.closeMicSetupToolStripMenuItem.Text := 'Close MicSetup';
        self.closeMicSetupToolStripMenuItem.Click += closeMicSetupToolStripMenuItem_Click;
        // 
        // aboutToolStripMenuItem
        // 
        self.aboutToolStripMenuItem.ForeColor := System.Drawing.Color.White;
        self.aboutToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('aboutToolStripMenuItem.Image')));
        self.aboutToolStripMenuItem.Name := 'aboutToolStripMenuItem';
        self.aboutToolStripMenuItem.Size := new System.Drawing.Size(68, 20);
        self.aboutToolStripMenuItem.Text := 'About';
        self.aboutToolStripMenuItem.Click += aboutToolStripMenuItem_Click;
        // 
        // treeView1
        // 
        self.treeView1.Dock := System.Windows.Forms.DockStyle.Left;
        self.treeView1.ImageIndex := 0;
        self.treeView1.ImageList := self.imageList1;
        self.treeView1.Location := new System.Drawing.Point(0, 24);
        self.treeView1.Name := 'treeView1';
        treeNode11.ImageKey := 'Information';
        treeNode11.Name := 'Узел0';
        treeNode11.SelectedImageKey := 'Information';
        treeNode11.Text := 'Information';
        treeNode12.ImageKey := 'Files';
        treeNode12.Name := 'Узел1';
        treeNode12.SelectedImageKey := 'Files';
        treeNode12.Text := 'Files';
        treeNode13.ImageKey := 'Build';
        treeNode13.Name := 'Узел2';
        treeNode13.SelectedImageKey := 'Build';
        treeNode13.Text := 'Build';
        self.treeView1.Nodes.AddRange(new System.Windows.Forms.TreeNode[3](treeNode11, treeNode12, treeNode13));
        self.treeView1.SelectedImageIndex := 0;
        self.treeView1.Size := new System.Drawing.Size(128, 287);
        self.treeView1.TabIndex := 1;
        self.treeView1.AfterSelect += treeView1_AfterSelect;
        // 
        // imageList1
        // 
        self.imageList1.ImageStream := (System.Windows.Forms.ImageListStreamer(resources.GetObject('imageList1.ImageStream')));
        self.imageList1.TransparentColor := System.Drawing.Color.Transparent;
        self.imageList1.Images.SetKeyName(0, 'Information');
        self.imageList1.Images.SetKeyName(1, 'Files');
        self.imageList1.Images.SetKeyName(2, 'Build');
        // 
        // openFileDialog1
        // 
        self.openFileDialog1.DefaultExt := 'exe';
        self.openFileDialog1.FileName := 'Program';
        self.openFileDialog1.Filter := 'Main executable|*.exe';
        self.openFileDialog1.Title := 'Select the main executable of your program';
        self.openFileDialog1.FileOk += openFileDialog1_FileOk;
        // 
        // openFileDialog2
        // 
        self.openFileDialog2.DefaultExt := 'txt';
        self.openFileDialog2.FileName := 'License';
        self.openFileDialog2.Filter := 'Text file|*.txt';
        self.openFileDialog2.Title := 'Select your program EULA';
        self.openFileDialog2.FileOk += openFileDialog2_FileOk;
        // 
        // BuildPanel
        // 
        self.BuildPanel.Controls.Add(self.label6);
        self.BuildPanel.Controls.Add(self.button5);
        self.BuildPanel.Controls.Add(self.button4);
        self.BuildPanel.Controls.Add(self.richTextBox1);
        self.BuildPanel.Controls.Add(self.label5);
        self.BuildPanel.Controls.Add(self.progressBar1);
        self.BuildPanel.Controls.Add(self.button3);
        self.BuildPanel.Dock := System.Windows.Forms.DockStyle.Fill;
        self.BuildPanel.Location := new System.Drawing.Point(128, 24);
        self.BuildPanel.Name := 'BuildPanel';
        self.BuildPanel.Size := new System.Drawing.Size(291, 287);
        self.BuildPanel.TabIndex := 4;
        self.BuildPanel.Visible := false;
        // 
        // label6
        // 
        self.label6.ForeColor := System.Drawing.Color.Green;
        self.label6.Location := new System.Drawing.Point(82, 252);
        self.label6.Name := 'label6';
        self.label6.Size := new System.Drawing.Size(116, 23);
        self.label6.TabIndex := 6;
        self.label6.Text := 'Installer running...';
        self.label6.TextAlign := System.Drawing.ContentAlignment.MiddleLeft;
        self.label6.Visible := false;
        // 
        // button5
        // 
        self.button5.Enabled := false;
        self.button5.Location := new System.Drawing.Point(6, 252);
        self.button5.Name := 'button5';
        self.button5.Size := new System.Drawing.Size(75, 23);
        self.button5.TabIndex := 5;
        self.button5.Text := 'Test installer';
        self.button5.UseVisualStyleBackColor := true;
        self.button5.Click += button5_Click;
        // 
        // button4
        // 
        self.button4.Enabled := false;
        self.button4.Location := new System.Drawing.Point(204, 252);
        self.button4.Name := 'button4';
        self.button4.Size := new System.Drawing.Size(75, 23);
        self.button4.TabIndex := 4;
        self.button4.Text := 'Save log';
        self.button4.UseVisualStyleBackColor := true;
        self.button4.Click += button4_Click;
        // 
        // richTextBox1
        // 
        self.richTextBox1.DetectUrls := false;
        self.richTextBox1.Location := new System.Drawing.Point(6, 58);
        self.richTextBox1.Name := 'richTextBox1';
        self.richTextBox1.ReadOnly := true;
        self.richTextBox1.Size := new System.Drawing.Size(279, 188);
        self.richTextBox1.TabIndex := 3;
        self.richTextBox1.Text := #10;
        self.richTextBox1.WordWrap := false;
        self.richTextBox1.TextChanged += richTextBox1_TextChanged;
        // 
        // label5
        // 
        self.label5.ForeColor := System.Drawing.Color.Red;
        self.label5.Location := new System.Drawing.Point(90, 29);
        self.label5.Name := 'label5';
        self.label5.Size := new System.Drawing.Size(189, 13);
        self.label5.TabIndex := 2;
        self.label5.Text := 'Blank spaces were left somewhere';
        self.label5.TextAlign := System.Drawing.ContentAlignment.TopCenter;
        self.label5.Visible := false;
        // 
        // progressBar1
        // 
        self.progressBar1.Location := new System.Drawing.Point(92, 10);
        self.progressBar1.Name := 'progressBar1';
        self.progressBar1.Size := new System.Drawing.Size(187, 16);
        self.progressBar1.TabIndex := 1;
        // 
        // button3
        // 
        self.button3.Location := new System.Drawing.Point(6, 6);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(80, 23);
        self.button3.TabIndex := 0;
        self.button3.Text := 'Build installer';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // FilesPanel
        // 
        self.FilesPanel.Controls.Add(self.button1);
        self.FilesPanel.Controls.Add(self.textBox2);
        self.FilesPanel.Controls.Add(self.label3);
        self.FilesPanel.Dock := System.Windows.Forms.DockStyle.Fill;
        self.FilesPanel.Location := new System.Drawing.Point(128, 24);
        self.FilesPanel.Name := 'FilesPanel';
        self.FilesPanel.Size := new System.Drawing.Size(291, 287);
        self.FilesPanel.TabIndex := 3;
        self.FilesPanel.Visible := false;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(255, 4);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(24, 23);
        self.button1.TabIndex := 4;
        self.button1.Text := '...';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // textBox2
        // 
        self.textBox2.Location := new System.Drawing.Point(100, 6);
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(149, 20);
        self.textBox2.TabIndex := 3;
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(6, 9);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(88, 13);
        self.label3.TabIndex := 2;
        self.label3.Text := 'Main executable:';
        // 
        // InfoPanel
        // 
        self.InfoPanel.Controls.Add(self.checkBox1);
        self.InfoPanel.Controls.Add(self.textBox4);
        self.InfoPanel.Controls.Add(self.button2);
        self.InfoPanel.Controls.Add(self.textBox3);
        self.InfoPanel.Controls.Add(self.label4);
        self.InfoPanel.Controls.Add(self.label2);
        self.InfoPanel.Controls.Add(self.textBox1);
        self.InfoPanel.Controls.Add(self.label1);
        self.InfoPanel.Dock := System.Windows.Forms.DockStyle.Fill;
        self.InfoPanel.Location := new System.Drawing.Point(128, 24);
        self.InfoPanel.Name := 'InfoPanel';
        self.InfoPanel.Size := new System.Drawing.Size(291, 287);
        self.InfoPanel.TabIndex := 2;
        // 
        // checkBox1
        // 
        self.checkBox1.Checked := true;
        self.checkBox1.CheckState := System.Windows.Forms.CheckState.Checked;
        self.checkBox1.Location := new System.Drawing.Point(6, 68);
        self.checkBox1.Name := 'checkBox1';
        self.checkBox1.Size := new System.Drawing.Size(273, 17);
        self.checkBox1.TabIndex := 9;
        self.checkBox1.Text := 'Include a license agreement';
        self.checkBox1.UseVisualStyleBackColor := true;
        self.checkBox1.CheckedChanged += checkBox1_CheckedChanged;
        // 
        // textBox4
        // 
        self.textBox4.Location := new System.Drawing.Point(98, 32);
        self.textBox4.Name := 'textBox4';
        self.textBox4.Size := new System.Drawing.Size(181, 20);
        self.textBox4.TabIndex := 8;
        self.textBox4.Text := '1.0';
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(255, 89);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(24, 23);
        self.button2.TabIndex := 7;
        self.button2.Text := '...';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // textBox3
        // 
        self.textBox3.Location := new System.Drawing.Point(92, 91);
        self.textBox3.Name := 'textBox3';
        self.textBox3.Size := new System.Drawing.Size(157, 20);
        self.textBox3.TabIndex := 6;
        // 
        // label4
        // 
        self.label4.Location := new System.Drawing.Point(6, 94);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(80, 13);
        self.label4.TabIndex := 5;
        self.label4.Text := 'Program EULA:';
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(6, 35);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(86, 13);
        self.label2.TabIndex := 2;
        self.label2.Text := 'Program version:';
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(90, 6);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(189, 20);
        self.textBox1.TabIndex := 1;
        self.textBox1.Text := 'Program';
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(6, 9);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(78, 13);
        self.label1.TabIndex := 0;
        self.label1.Text := 'Program name:';
        // 
        // saveFileDialog1
        // 
        self.saveFileDialog1.DefaultExt := 'log';
        self.saveFileDialog1.FileName := 'Build log';
        self.saveFileDialog1.Filter := 'Log file|*.log';
        self.saveFileDialog1.Title := 'Select where to save the build log';
        self.saveFileDialog1.FileOk += saveFileDialog1_FileOk;
        // 
        // TestInstaller
        // 
        self.TestInstaller.EnableRaisingEvents := true;
        self.TestInstaller.StartInfo.Domain := '';
        self.TestInstaller.StartInfo.LoadUserProfile := false;
        self.TestInstaller.StartInfo.Password := nil;
        self.TestInstaller.StartInfo.StandardErrorEncoding := nil;
        self.TestInstaller.StartInfo.StandardOutputEncoding := nil;
        self.TestInstaller.StartInfo.UserName := '';
        self.TestInstaller.SynchronizingObject := self;
        self.TestInstaller.Exited += TestInstaller_Exited;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(419, 311);
        self.Controls.Add(self.BuildPanel);
        self.Controls.Add(self.FilesPanel);
        self.Controls.Add(self.InfoPanel);
        self.Controls.Add(self.treeView1);
        self.Controls.Add(self.menuStrip1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedSingle;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MainMenuStrip := self.menuStrip1;
        self.MaximizeBox := false;
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'MicSetup';
        self.FormClosing += Form1_FormClosing;
        self.Load += Form1_Load;
        self.menuStrip1.ResumeLayout(false);
        self.menuStrip1.PerformLayout();
        self.BuildPanel.ResumeLayout(false);
        self.FilesPanel.ResumeLayout(false);
        self.FilesPanel.PerformLayout();
        self.InfoPanel.ResumeLayout(false);
        self.InfoPanel.PerformLayout();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
