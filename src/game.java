
import java.awt.Component;
import java.awt.GridLayout;
import javax.swing.JButton;
import javax.swing.JFrame;

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class game {
    public game()
    {
        JFrame frame = new JFrame("Bejeweled");
        JButton c[][] = new JButton[8][8];
        JButton button = new JButton();
        GridLayout g = new GridLayout(8,8);
        frame.setLayout(g);
        for(int i = 0;i<8;i++)
        {
            for(int j = 0;j<8;j++)
            {
                c[i][j]=new JButton();
                frame.add(c[i][j]);
            }
        }
        frame.setSize(600, 600);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
                
    }
    public static void main(String args[])
    {
        game g = new game();
    }
    
}
