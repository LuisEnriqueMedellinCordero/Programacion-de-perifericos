using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace form
{
    public partial class Form1 : Form
    {
        bool TextoCambiado = false;
        bool cambio = true;
        string nArchivo ="";
        string ruta = "";
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

        private void CortarToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }
        private void AyudaToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }

        private void SalirToolStripMenuItem_Click(object sender, EventArgs e)
        {
            //MeageBox.Show("¿Desea terminassr la aplicacion?", "Mi aplicacion", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
            //Close();
            DialogResult dialog = MessageBox.Show(this, "¿Desea cerral la aplicacion?", "Mi aplicacion", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
            if (dialog == DialogResult.Yes)
            {
                Application.Exit();
            }
            else if (dialog == DialogResult.No)
            {

            }
        }


        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            if (MessageBox.Show("¿Desea terminar la aplicacion?", "Mi aplicacion", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.No)
            {
                e.Cancel = true;
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
            if (!TextoCambiado)                           
            {
                cambio = false;
                if (openFileDialog1.ShowDialog() == DialogResult.OK)
                {
                    richTextBox1.LoadFile(openFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                }
                nArchivo = openFileDialog1.FileName;
                cambio = true;
            }
            else

            {

                DialogResult dialog = MessageBox.Show(this, "Tiene texto Modificado/n ¿Desea Guardarlo en el archivo actual?", "Mi aplicacion", MessageBoxButtons.YesNoCancel, MessageBoxIcon.Question);
                if (dialog == DialogResult.Cancel)
                {
                    new CancelEventArgs().Cancel = true;
                }
                else if (dialog == DialogResult.Yes)
                {
                    if (nArchivo == "")
                    {
                        MessageBox.Show("guardar como");
                        if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                        {
                            richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                            nArchivo = saveFileDialog1.FileName;
                        }
                    }
                    else
                    {
                        MessageBox.Show("Guardar");
                        if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                        {
                            richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                            nArchivo = saveFileDialog1.FileName;
                        }

                    }
                    TextoCambiado = false;
                }
                else if (dialog == DialogResult.No)
                {
                    cambio = false;
                    if (openFileDialog1.ShowDialog() == DialogResult.OK)
                    {
                        richTextBox1.LoadFile(openFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                    }
                    nArchivo = openFileDialog1.FileName;
                    cambio = true;
                }

            }
        }

        private void richTextBox1_TextChanged(object sender, EventArgs e)
        {
            if (cambio)
            {
                TextoCambiado = true;
            }
        }
        private void GuardarToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (File.Exists (nArchivo))
            {
                this.Text = " Se encontro el archivo";
                File.WriteAllText(nArchivo, this.richTextBox1.Text);

            }
            else
            {
                if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                {
                    richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                    nArchivo = saveFileDialog1.FileName;
                }
                TextoCambiado = false;
            }
        }

        private void NuevoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (!TextoCambiado)
            {
                this.richTextBox1.Clear();
                nArchivo = "";
                TextoCambiado = false;
            }
            else
            {
                DialogResult dialog = MessageBox.Show(this, "Tiene texto Modificado/n ¿Desea Guardarlo en el archivo actual?", "Mi aplicacion", MessageBoxButtons.YesNoCancel, MessageBoxIcon.Question);
                if (dialog == DialogResult.Yes)
                {
                    if (nArchivo == "")
                    {
                        if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                        {
                            richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                            nArchivo = saveFileDialog1.FileName;
                        }
                    }
                    else
                    {
                        File.WriteAllText(nArchivo, this.richTextBox1.Text);
                    }
                    TextoCambiado = false;
                }
                if (dialog == DialogResult.No)
                {
                    this.richTextBox1.Clear();
                    nArchivo = "";
                    TextoCambiado = false;
                }
                if (dialog == DialogResult.Cancel)
                {
                    new CancelEventArgs().Cancel = true;
                }
            }
        }

        private void GuardarComoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (saveFileDialog1.ShowDialog() == DialogResult.OK)
            {
                richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                nArchivo = saveFileDialog1.FileName;
            }
            TextoCambiado = false;
        }
        private void toolStripStatusLabel1_Click(object sender, EventArgs e)
        {
            toolStripStatusLabel1.Text = nArchivo;

        }

        private void RichTextBox1_TextChanged_1(object sender, EventArgs e)
        {
            if (cambio)
            {
                TextoCambiado = true;
            }
        }
    }
}
