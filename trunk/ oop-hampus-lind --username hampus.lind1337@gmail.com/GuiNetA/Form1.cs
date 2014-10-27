using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace GuiNetA
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void buttonShowHide_Click(object sender, EventArgs e)
        {
            //jag döper alltid objekt till namnet på objektet följt av vad det gör, t.ex labelWuzzup eller buttonShowHide
            if (this.labelWuzzup.Visible)
                this.labelWuzzup.Hide();
            else
                this.labelWuzzup.Show();

            //sökte random file på wikipedia commons för att hitta en bild
            if (pictureBoxFoto.Visible)
                pictureBoxFoto.Hide();
            else
                pictureBoxFoto.Show();

            if (textBoxName.Visible)
                textBoxName.Hide();
            else
                textBoxName.Show();

            if (textBoxName.Text.Length == 0)
                textBoxName.Text = "hälsingar från Hampus Lind";
            else
                textBoxName.Text = "";

            MessageBox.Show("Tjenare mannen", "Hälsning från Hampus Lind");
        }

    }
}
