/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class exponent {
  public static void main(String args[])
  {
      int a = 2;
      exponent e = new exponent();
     int s = e.square(a);
      System.out.println(s);
      
    int k =   e.cube(a);
    System.out.println(k);
      
  }
  public int square(int a)
  {
      int b = a*a;
      return b;
  }
  public int  cube(int a)
  {
      int c = a*a*a;
      return c;
  }
}
