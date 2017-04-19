/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

import javax.swing.*;
import java.awt.*;

/**
 *
 * @author shital
 */
public class JFontlist extends JApplet {
     int x = 10,y = 15;
    public void paint(Graphics gr)
    {
        Toolkit tk = Toolkit.getDefaultToolkit();
        String resAndsize = toString();
        gr.drawString(resAndsize, x, y+=15);
        GraphicsEnvironment ge = GraphicsEnvironment.getLocalGraphicsEnvironment();
        String [] fontnames = ge.getAvailableFontFamilyNames();
        for(int i =0;i<fontnames.length;i+=4)
        {
            gr.drawString(fontnames[i], x, y);
             gr.drawString(fontnames[i+1], x+190, y);
              gr.drawString(fontnames[i+2], x+380, y);
               gr.drawString(fontnames[i+3], x+570, y+=15);
        }
    }
        public String toString()
        {
            Toolkit tk = Toolkit.getDefaultToolkit();
            Dimension sd = tk.getScreenSize();
            return "screen resolution: " + tk.getScreenResolution() + "dots per inch " + "Screen Size: " + sd.width + " by "
                    +sd.height + "pixels";
        }
    }


