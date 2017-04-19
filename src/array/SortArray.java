/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */


/**
 *
 * @author shital
 */
public class SortArray {
    public static void main(String args[])throws Exception
    {
      char [] array = new char[10];
      for(int x = 0;x<array.length;x++)
      {
          System.out.println("Enter a character : ");
          array[x] = (char)System.in.read();
          System.in.read();System.in.read();
      }
          System.out.println("Before sort ");
          for(int x = 0;x<array.length;x++)
              System.out.print(array[x] + " ");
          bubblesort(array,array.length);
          System.out.println("\nAfter sort ");
          for(int x = 0;x<array.length;x++)
              System.out.print(array[x] +" ");
    } 
    public static void bubblesort(char[] some,int len)
    {
        for(int x = 0;x<(len-1);x++)
        {
            for(int y = 0;y<(len-1);y++)
            {
                if(some[y]>some[y+1])
                {
                  char  temp = some[y];
                  some[y] = some[y+1];
                  some[y+1] = temp;
                }
            }
        }
    }
}
