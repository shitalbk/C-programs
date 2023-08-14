/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */

import java.util.Scanner;
public class argument {
    public static void main(String args[]){
         Scanner sc = new Scanner(System.in);
        char c[] = new char[5];
        System.out.println("enter " + c.length + "characters");
        for(int i = 0;i<c.length;i++)
        {
           
         c[i] = (char) sc.nextByte();
         System.out.println("Please enter a character : ");
         
        
        }
        for(int i = 0;i<c.length;i++)
        {
       System.out.print((byte)c[i] + " ");
        }
    }
}
