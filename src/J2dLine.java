/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

import javax.swing.*;
import java.awt.*;
import java.awt.geom.*;

/**
 *
 * @author shital
 */
public class J2dLine extends JApplet {
    public void paint(Graphics gr)
    {
        Graphics2D gr2D = (Graphics2D)gr;
        Point2D.Float pos1 = new Point2D.Float(50,10);
        Point2D.Float pos2 = new Point2D.Float(13,28);
        BasicStroke aLine = new BasicStroke(5.0f, BasicStroke.CAP_ROUND, BasicStroke.JOIN_ROUND);
        gr2D.setStroke(aLine);
        Line2D.Float line = new Line2D.Float(pos1, pos2);
        gr2D.draw(line);
        repaint();
    }
   
  
}
