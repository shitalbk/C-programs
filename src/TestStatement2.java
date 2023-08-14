/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class TestStatement2 {
    static int count = 0;
    TestStatement2()
    {
        count++;
        System.out.println("You have created" + count + "objects");
        if(count>3)
        {
            System.out.println("this is not fair");
        }
        
    }
    public static void main(String args[])
    {
        TestStatement2 t = new TestStatement2();
        System.out.print(TestStatement2.count);
        TestStatement2 t1 = new TestStatement2();
        TestStatement2 t2 = new TestStatement2();
    }
}
