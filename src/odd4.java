/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */

    import java.util.*;
public class odd4
{
public static void main(String ar[])
{
Scanner sc=new Scanner(System.in);
System.out.println("enter your number to show odd star pattern :");
int a=sc.nextInt();

for(int i=0; i<a; i++)
{
int b=2*i+1;

for(int j=1; j<=b; j++)
{
System.out.print("*");
}
System.out.println();
}
}
}
    
    

