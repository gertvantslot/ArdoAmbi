using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ArdoAmbiController {
    public partial class Form1 : Form {
        public Form1() {
            InitializeComponent();
            serialPort1.Open();
        }

        private void trackBar1_Scroll(object sender, EventArgs e) {
            var buf = new byte[] { (byte)trackBar1.Value };
            serialPort1.Write(buf, 0, 1);
        }
    }
}
