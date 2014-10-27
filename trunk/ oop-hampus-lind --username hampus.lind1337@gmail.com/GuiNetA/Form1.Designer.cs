namespace GuiNetA
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.labelWuzzup = new System.Windows.Forms.Label();
            this.buttonShowHide = new System.Windows.Forms.Button();
            this.pictureBoxFoto = new System.Windows.Forms.PictureBox();
            this.textBoxName = new System.Windows.Forms.TextBox();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBoxFoto)).BeginInit();
            this.SuspendLayout();
            // 
            // labelWuzzup
            // 
            this.labelWuzzup.AutoSize = true;
            this.labelWuzzup.Font = new System.Drawing.Font("Microsoft Sans Serif", 72F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.labelWuzzup.Location = new System.Drawing.Point(0, 9);
            this.labelWuzzup.Name = "labelWuzzup";
            this.labelWuzzup.Size = new System.Drawing.Size(491, 135);
            this.labelWuzzup.TabIndex = 0;
            this.labelWuzzup.Text = "Wuzzup";
            this.labelWuzzup.Visible = false;
            // 
            // buttonShowHide
            // 
            this.buttonShowHide.Font = new System.Drawing.Font("Microsoft Sans Serif", 28.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.buttonShowHide.Location = new System.Drawing.Point(3, 333);
            this.buttonShowHide.Name = "buttonShowHide";
            this.buttonShowHide.Size = new System.Drawing.Size(334, 72);
            this.buttonShowHide.TabIndex = 1;
            this.buttonShowHide.Text = "Show/Hide";
            this.buttonShowHide.UseVisualStyleBackColor = true;
            this.buttonShowHide.Click += new System.EventHandler(this.buttonShowHide_Click);
            // 
            // pictureBoxFoto
            // 
            this.pictureBoxFoto.Image = global::GuiNetA.Properties.Resources._800px_Ictalurus_melas01;
            this.pictureBoxFoto.Location = new System.Drawing.Point(357, 169);
            this.pictureBoxFoto.Name = "pictureBoxFoto";
            this.pictureBoxFoto.Size = new System.Drawing.Size(772, 356);
            this.pictureBoxFoto.TabIndex = 2;
            this.pictureBoxFoto.TabStop = false;
            this.pictureBoxFoto.Visible = false;
            // 
            // textBoxName
            // 
            this.textBoxName.Location = new System.Drawing.Point(583, 41);
            this.textBoxName.Name = "textBoxName";
            this.textBoxName.Size = new System.Drawing.Size(437, 22);
            this.textBoxName.TabIndex = 3;
            this.textBoxName.Visible = false;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1151, 537);
            this.Controls.Add(this.textBoxName);
            this.Controls.Add(this.pictureBoxFoto);
            this.Controls.Add(this.buttonShowHide);
            this.Controls.Add(this.labelWuzzup);
            this.Name = "Form1";
            this.Text = "En hälsning från Hampus";
            ((System.ComponentModel.ISupportInitialize)(this.pictureBoxFoto)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label labelWuzzup;
        private System.Windows.Forms.Button buttonShowHide;
        private System.Windows.Forms.PictureBox pictureBoxFoto;
        private System.Windows.Forms.TextBox textBoxName;
    }
}

