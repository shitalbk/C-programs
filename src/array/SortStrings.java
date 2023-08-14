/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package array;

/**
 *
 * @author shital
 */
public class SortStrings {
    public static void main(String args[])
            
    {
        String [] students = {"Kim" , "Ken" , "Tom","Kathy","Brad"};
        int x;
        System.out.println("Before sort");
        for(x = 0;x<5;x++)
            System.out.println(students[x]);
        sortstrings(students,students.length);
        System.out.println("\nAfter sort");
        for(x = 0;x<5;x++)
            System.out.println(students[x]);
    }
    public static void sortstrings(String[] array,int len)
    {
        int a,b;
        String temp;
        for(a = 0;a<len-1;a++)
        {
            for(b = 0;b<len-1;b++)
            {
                if(array[b].compareTo(array[b+1])>0)
                {
                    temp = array[b];
                    array[b]= array[b+1];
                    array[b+1] = temp;
                }
            }
        }
    }
}
