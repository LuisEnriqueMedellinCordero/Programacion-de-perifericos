using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace form
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void ArchivoToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }

        private void AcercaDeToolStripMenuItem_Click(object sender, EventArgs e)
        {
            AcercaDe acercaDe = new AcercaDe();
            acercaDe.ShowDialog();
        }

        private void AyudaToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }

        private void SalirToolStripMenuItem_Click(object sender, EventArgs e)
        {
            //MeageBox.Show("¿Desea terminassr la aplicacion?", "Mi aplicacion", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
            Close();
        }


        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
          if (MessageBox.Show("¿Desea terminar la aplicacion?", "Mi aplicacion", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.No)
            {
                e.Cancel=true;
            }
            /* DialogResult dialog = MessageBox.Show("¿Quieres salir del programa?", "Exit", MessageBoxButtons.YesNo);
             if (dialog==DialogResult.Yes)
             {
                 Application.ExitThread();
             }
             else if (dialog == DialogResult.No)
             {
                 e.Cancel = true;
             }*/
        }

        private void AbrirToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (richTextBox1.Text != "")
            {
                if (MessageBox.Show("¿Desea terminar sin guardar?", "Mi aplicacion", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.No)
                {
                    if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                    {
                        richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                    }
                }
            }
                if (openFileDialog1.ShowDialog() == DialogResult.OK)
            {
                richTextBox1.LoadFile(openFileDialog1.FileName, RichTextBoxStreamType.PlainText);
            }
        }

        private void GuardarToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (saveFileDialog1.ShowDialog() == DialogResult.OK)
            {
                richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
            }
        }
    }
}
