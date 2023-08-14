/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class cube {
    public static void main(String args[])
    {
        int a = 3;
        cube cu = new cube();
        int s = cu.cube(a);
        System.out.println(s);
    }
    public int cube(int a)
    {
        int c = a*a*a;
        return c;
    }
}
