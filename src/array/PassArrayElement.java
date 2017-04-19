/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */


/**
 *
 * @author shital
 */
public class PassArrayElement {
    public static void main(String args[])
    {
        int [] someNums = {5,10,15,20};
        int x;
        for(x = 0;x<4;x++)
        {
            System.out.println("In main " + someNums[x]);
        }
        for(x = 0;x<4;x++)
        {
            methodGetOneInt(someNums[x]);
        }
        for(x = 0;x<4;x++)
            System.out.println("At the end of main " + someNums[x]);
    }
    public static void methodGetOneInt(int one)
    {
      System.out.println("In methodGetOneInt "  + one);
      one = 999;
      System.out.println("After change " + one);
    }
}
