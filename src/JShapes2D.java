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
public class JShapes2D extends JApplet {
 public void paint(Graphics gr)
 {
     Graphics2D gr2D = (Graphics2D)gr;
     Rectangle2D.Float rec = new Rectangle2D.Float(10F,10F,40F,20F);
      Rectangle2D.Float rec2 = new Rectangle2D.Float(10F,40F,40F,20F);
      gr2D.draw(rec);
      gr2D.fill(rec2);
     Ellipse2D.Float ell = new Ellipse2D.Float(10F,73F,40F,20F);
      Ellipse2D.Float ell2 = new Ellipse2D.Float(10F,103F,40F,20F);
      gr2D.draw(ell);
      gr2D.fill(ell2);
      Arc2D.Float ac = new Arc2D.Float(10,133,30,33,30,120,Arc2D.PIE);
      Arc2D.Float ac2 = new Arc2D.Float(10,163,30,33,30,120,Arc2D.PIE);
      gr2D.draw(ac);
      gr2D.fill(ac2);
      GeneralPath pol = new GeneralPath();
      pol.moveTo(10F, 193F);
      pol.lineTo(25F, 183F);
      pol.lineTo(100F, 223f);
      pol.closePath();
      gr2D.draw(pol);
 }
   
}
