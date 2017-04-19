/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

import javax.swing.*;
import java.applet.*;
import java.awt.*;

/**
 *
 * @author shital
 */
public class JSound extends JApplet {
AudioClip sound;
    public void init() {
        sound = getAudioClip(getCodeBase(), "");
    }
    public void start()
    {
        sound.loop();
    }
    public void stop()
    {
        sound.stop();
    }
    public void paint(Graphics g)
    {
        Graphics2D g2D = (Graphics2D)g;
        g2D.drawString("Playing event handlers inc.event sounds ...", 10, 10);
        
    }
}
