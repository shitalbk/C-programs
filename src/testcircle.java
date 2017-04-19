/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class testcircle {
    public static void main(String args[])
    {
        circle c = new circle();
        circle c1 = new circle();
        circle c2 = new circle();
        c.setRadius(2);
        System.out.println("The small radius is" + c.getRadius());
        c1.setRadius(20);
        System.out.println("The large radius is" + c1.getRadius());
        c.computeDiameter();
        c1.computeArea();
        
    }
    
}
