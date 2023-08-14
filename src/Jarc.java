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
public class Jarc extends JApplet {
    int[] xpoints = {42,52,72,52,60,40,15,28,9,32};
    int[] ypoints = {38,62,68,80,105,85,102,75,58,60};
    Polygon aStar = new Polygon(xpoints,ypoints,xpoints.length);
public void paint(Graphics g)
{

    g.setColor(Color.RED);
    g.drawPolygon(aStar);
    g.copyArea(0, 0, 75, 105, 125, 130);
    g.copyArea(0, 0, 75, 105, 180, 70);
    
}
}
