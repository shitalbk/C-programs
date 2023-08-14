import java.util.Scanner;
public class oddterm{
    public static void main(String args[])
    {
         System.out.println("Please enter a first number: ");
        Scanner first = new Scanner(System.in);
        int num1 = first.nextInt();
        System.out.println("Please enter a second number: ");
        Scanner second = new Scanner(System.in);
        int num2 = second.nextInt();
         System.out.println("Please enter a third number: ");
        Scanner third = new Scanner(System.in);
        int num3 = third.nextInt();
       int i;
        if(num1>num2)
           
        {
             
            i = num1;
        }
         else
            i = num2;
        int s;
        if(i>num3)
        {
           s = i; 
        }
      else
            s = num3;
     System.out.println("The greater number among the three numbers is "+ s);
    }
}