/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package bejeweled;

import javax.swing.JFrame;

/**
 *
 * @author shital
 */
public class Bejeweled {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Panel panel = new Panel(8, 8);
        JFrame j = new JFrame();
        j.setSize(600, 600);
        j.setVisible(true);
        j.setContentPane(panel);
        j.setTitle("Bejeweled Game");
        j.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
