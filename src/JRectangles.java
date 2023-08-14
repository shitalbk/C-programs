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
public class JRectangles extends JApplet {

    public void paint(Graphics g)
    {
       g.setColor(Color.RED);
       setBackground(Color.cyan);
       g.fillRect(20, 20, 120, 120);
       g.clearRect(40, 40, 50, 50);
       invalidate();
       validate();
       
    }
    
}
