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
public class JFontMetrics extends JApplet {
String companyname = new String("Event Handlers Incorporated");
Font courier = new Font("Courier",Font.ITALIC,16),
     times = new  Font("TimesRoman",Font.PLAIN,16),
      helvet = new Font("Helvetica", Font.BOLD,16);
int ascent,descent,height,leading;
int x= 10, y=15;
static final int INCREASE = 15;
public void paint(Graphics pen)
{
    pen.setFont(courier);
    pen.drawString(companyname, x, y);
    displayMetrics(pen);
    pen.setFont(times);
    pen.drawString(companyname, x, y+=40);
    displayMetrics(pen);
    pen.setFont(helvet);
    pen.drawString(companyname, x, y+=40);
    displayMetrics(pen);
}
public void displayMetrics(Graphics m)
{
    leading = m.getFontMetrics().getLeading();
    ascent = m.getFontMetrics().getAscent();
    descent = m.getFontMetrics().getDescent();
    height = m.getFontMetrics().getHeight();
    m.drawString("Leading is " + leading, x, y+=INCREASE);
    
    m.drawString("Ascent is " +ascent, x, y+=INCREASE);
    m.drawString("Descent is " + descent, x, y+=INCREASE);
    m.drawString("    ", x, y+=INCREASE);
    m.drawString("height is " + height, x, y+=INCREASE);
}
    
}
