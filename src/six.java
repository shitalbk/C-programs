/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class six {
    public static void main(String args[]) {
        int val = Integer.valueOf(args[0]) ,i=1;
        boolean start=true;
        boolean ifstart=true;
        while (start) {            
            for (int j = val; j > i; j -= 2) {
                System.out.print(" ");
            }
            for (int k = 0; k < i; k++) {
                System.out.print("*");
            }
            System.out.println();
            if(i<val && ifstart){
                i+=2;
                if(i==val) ifstart=false;
            }
            else{
                i-=2;
                if(i==-1)start=false;
            }
            
        }
    }
}
