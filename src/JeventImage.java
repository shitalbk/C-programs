/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

import javax.swing.*;
import java.awt.*;
import java.applet.*;

/**
 *
 * @author shital
 */
public class JeventImage extends JApplet {
Image eventLogo1;
ImageIcon eventLogo2;
   
    public void init() {
        eventLogo1 = getImage(getCodeBase(), "Tulips.jpg");
        eventLogo2 = new ImageIcon("Tulips.jpg");
        
    }
    public void paint(Graphics g)
    {
        g.drawImage(eventLogo1, 0, 0, this);
        g.drawImage(eventLogo1, 0, 120, getWidth(),getHeight()-100,this);
        eventLogo2.paintIcon(this, g, 180, 0);
    }
    
}
