/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

import java.awt.Container;
import javax.swing.JApplet;
import javax.swing.JLabel;

/**
 *
 * @author shital
 */
public class JGreet extends JApplet {
JLabel greeting = new JLabel("this is what i wanted");
  
    public void init() {
        Container con = getContentPane();
        con.add(greeting);
    }
    // TODO overwrite start(), stop() and destroy() methods
}
