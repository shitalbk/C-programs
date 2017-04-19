import java.awt.Color;
import java.awt.GridLayout;
import javax.swing.*;




public class today{
    public today()
    {
        JFrame j = new JFrame();
        JButton bi[] = new JButton[64];
        JButton b = new JButton();
        Color c[] = new Color[]{Color.BLACK,Color.BLUE,Color.DARK_GRAY,Color.ORANGE, Color.CYAN, Color.YELLOW,Color.GREEN};
        GridLayout g = new GridLayout(8,8);
        j.setLayout(g);
        for(int i = 0;i<64;i++)
        {
            bi[i] = new JButton();
            j.getContentPane().add(bi[i]);
            int rand = (int)(Math.random()*7);
            bi[i].setBackground(c[rand]);
            
        }
        j.setVisible(true);
        j.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        j.setSize(600, 600);
    }
    public static void main(String args[])
    {
       today t = new today(); 
    }
}