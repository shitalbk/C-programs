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
public class Jrec extends JApplet {

    public void paint(Graphics g)
    {
        g.drawRoundRect(20, 20, 100, 80, 0, 0);
        g.drawOval(20, 20, 100, 80);
        g.drawRoundRect(140,20 , 80, 80, 10, 10);
        g.drawRoundRect(240, 20, 80, 80, 40, 40);
        g.drawRoundRect(340, 20, 80, 80, 80, 80);
    }
}
