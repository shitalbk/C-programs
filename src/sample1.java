
import java.awt.Color;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Random;
import javax.swing.*;
import javax.swing.border.EmptyBorder;

/*
 * To change this template, choose Tools | Templates and open the template in
 * the editor.
 */
/**
 *
 * @author shital
 */
public final class sample1 implements ActionListener {

    private int points = 0;
    private int coord1[] = new int[2];
    private int coord2[] = new int[2];
    private int turn = 0;
    JLabel label = new JLabel("Points :");
    JLabel label1 = new JLabel("" + points);
    JButton jewel[][] = new JButton[8][8];

    public sample1() {
            JFrame ali = new JFrame("Bejeweled Game");
            Color c[] = new Color[]{Color.BLACK,
            Color.MAGENTA,
            new Color(0xffff00),
            Color.RED, Color.GREEN,
            Color.YELLOW,
            Color.PINK};
        GridLayout g = new GridLayout(9, 8);
        ali.setLayout(g);
        JButton but = new JButton();
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {

                jewel[i][j] = new JButton();
                ali.getContentPane().add(jewel[i][j]);
                int rand = (int) (Math.random() * 10);
                if (rand < 7) {
                    jewel[i][j].setBackground(c[rand]);
                } else {
                    jewel[i][j].setBackground(c[3]);
                }
                jewel[i][j].setActionCommand("(" + i + "," + j + "," + c + ")");
                jewel[i][j].addActionListener(this);
            }
        }


        JPanel pane = new JPanel();
        pane.add(label);
        pane.add(label1);
        ali.add(pane);
        ali.setSize(600, 600);
        ali.setVisible(true);
        ali.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        ali.setResizable(false);



    }

    @Override
    public void actionPerformed(ActionEvent e) {
        
        
        
    }

    public static void main(String args[]) {
        sample1 s = new sample1();
    }
}
