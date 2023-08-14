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
public class JBox extends JApplet {
String companyName = new String("Event Handlers Incorporated");
   Font serifItalic = new Font("Serif",Font.ITALIC,20);
   int leading,ascent,height,width;
   int x = 40,y = 60;
   static final int BORDER = 5;
   public void paint(Graphics gr)
   {
       Graphics2D two = (Graphics2D)gr;
       two.setFont(serifItalic);
       two.drawString(companyName, x, y);
       leading = two.getFontMetrics().getLeading();
       ascent = two.getFontMetrics().getAscent();
       height = two.getFontMetrics().getHeight();
       width = two.getFontMetrics().stringWidth(companyName);
       two.drawRect(x-BORDER, y-(ascent+ leading + BORDER), width+ 2*BORDER, height+2*BORDER);
       repaint();
   }
}
