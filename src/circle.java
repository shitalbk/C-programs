/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class circle {
    private double radius;
    public static void main(String args[])
    {
        circle c = new circle();
        c.setRadius(2);
        System.out.println("The radius is" + c.getRadius());
         c.computeDiameter();
         c.computeArea();
         String s="dft";
         
    }
    public double getRadius()
    {
        return radius;
    }
    public void setRadius(double radius)
    {
      this.radius = radius;  
    }
    
    public void computeDiameter()
    {
        double d = getRadius()*2;
        System.out.println(d);
    }
    public void computeArea()
    {
        double area = 3.14*getRadius()*getRadius();
        System.out.println(area);
    }
    public circle()
    {
        radius = 1;
    }
}
