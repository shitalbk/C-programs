/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class motey {

    public static void main(String args[]) {

        for (int i = 1; i <= 4; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        int a = 3;
        for (int i = 4; i >= 1; i--) {
            for (int h = 1; h <= a; h++) {
                System.out.print(" ");
            }
            a++;
            for (int j = 0; j < i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
