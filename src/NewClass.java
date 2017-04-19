
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.UIManager;
import javax.swing.UnsupportedLookAndFeelException;

public class NewClass implements ActionListener {

    JButton g[]=new JButton[16];

    public static void main(String ar[]) { 
        try {
                UIManager.setLookAndFeel(UIManager.getSystemLookAndFeelClassName());
        } catch (ClassNotFoundException ex) {
            Logger.getLogger(NewClass.class.getName()).log(Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            Logger.getLogger(NewClass.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            Logger.getLogger(NewClass.class.getName()).log(Level.SEVERE, null, ex);
        } catch (UnsupportedLookAndFeelException ex) {
            Logger.getLogger(NewClass.class.getName()).log(Level.SEVERE, null, ex);
        }
        
        calc n= new calc();
        JFrame frame = new JFrame();
        
        frame.add(n);
        frame.pack();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }

    public void go() {
        /*JFrame frame = new JFrame();
        JPanel pan = new JPanel();
        JPanel main = new JPanel();
        JPanel screen = new JPanel();
        GridLayout df=new GridLayout(0,3,8,8);
        for (int i=0;i<16;i++){
        g[i] = new JButton(String.valueOf(i));
        g[i].addActionListener(this);
        pan.add(g[i]);
        }
        pan.setLayout(df);
        JTextArea area =new JTextArea();
        area.setBorder(null);
        area.setPreferredSize(new Dimension(222, 70));
        screen.add(area);
        main.setLayout(new BorderLayout());
        main.add(BorderLayout.NORTH,screen);
        main.add(BorderLayout.SOUTH,pan);
        main.setBorder(new EmptyBorder(10,10,10,10));
        frame.setSize(250, 300);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
       
        frame.add(main);
        g[1].setSize(50, 100);
        frame.setResizable(false);*/
        
    }

    public void actionPerformed(ActionEvent e) {
        Object s = e.getSource();
        if (s == g) {
            System.out.println("true");
            System.out.println(g);
        }
    }
}