/*
 * To change this template, choose Tools | Templates2
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class Sort {

    public static void main(String arg[]) {
        int places= 15;
        for (int i = 1; i <= places; i += 2) {
            int l=1;
            for (int j = places; j > i; j = j - 2) {
                System.out.print(" ");
            }
            for (int k = 1; k <= i; k++) {                
                System.out.print(l);
                if ((i/2 + 1)<=k){
                    l--;
                }else{
                    l++;
                }               
            }
            System.out.println();
        }
    }
}
