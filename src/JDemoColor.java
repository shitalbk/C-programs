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
public class JDemoColor extends JApplet {
    Font f = new Font("Helvetica" , Font.BOLD , 25);
   

    public void paint(Graphics gr) {
        int r,g,b;
        int x = 0,y=0;
        gr.setFont(f);
       for(r = 255;r>=0;r-=20)
       {
           for(g=255;g>=0;g-=20)
           {
               for(b=255;b>=0;b-=20)
               {
                   Color variety = new Color(r,g,b);
                   gr.setColor(variety);
                   gr.drawString("X", x, y);
                   x+=5;
                  if(x>=400)
                   {
                       x=0;
                       y+=10;
                   }
               }
           }
       }
                    
               
          

    }
}
