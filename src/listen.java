/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
import javax.swing.*;
import java.awt.event.*;

public class listen {
    JButton gh;
    JButton can;
    JPanel pane;
    JFrame g;

    public static void main(String[] args) {
        listen h = new listen();
        h.go();
    }
    public void go() {
        g = new JFrame();
        gh = new JButton("ok");
        gh.addActionListener(new label());
        pane = new JPanel();
        pane.add(gh);
        can = new JButton("Cancel");
        pane.add(can);
        g.setSize(300, 700);
        g.setTitle("My First Application");
        g.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        g.setVisible(true);
        g.add(pane);
        can.addActionListener(new color());

    }

    public class label implements ActionListener {
        public void actionPerformed(ActionEvent event) {
            gh.setText("I am clicked");
        }
    }

    public class color implements ActionListener {
        public void actionPerformed(ActionEvent event) {
            can.setText("I am clicked");
        }
    }
}