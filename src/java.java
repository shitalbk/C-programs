/* 
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
import java.util.Scanner;
public class java {

    public static void main(String args[]) {
        int input = 0;
        boolean gamecheck = false;
        int ran = (int) (Math.random() * 10);
        int count = 1;
        while (!gamecheck) {
            boolean exp = false;
            Scanner sc = new Scanner(System.in);
            System.out.println("Please guess the number from 1 to 10:");
            try {
                input = sc.nextByte();
                
            } catch (Exception e) {
                System.out.println("Invalid input! Please enter integer");
                exp = true;
            }
            if (!exp) {
                if (input == ran) {
                    System.out.println("you have guessed the correct number");
                    System.out.println("number of total guess is " + count);
                    gamecheck = true;
                } else if (input > 10 || input < 1) {
                    System.out.println("Invalid input! Number is out of range 1 to 10");
                } else {

                    if (input < ran) {
                        System.out.println("The number is greater than you have input");
                    } else {
                        System.out.println("The number is less than you have input");
                    }
                }
                count++;
            } else {
                //Do nothing loop ends and user input value again
            }
        }
    }
}
