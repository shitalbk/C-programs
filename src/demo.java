/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.nio.charset.Charset;
import java.util.Scanner;

/**
 * @author shital
 */
public class demo {
    public demo(){
        InputStream i=this.getClass().getResourceAsStream("index.html");
        String s=ConvertString(i);
       
        System.out.println();
        
    }
    public static void main(String arg[]){
    demo d =new demo();
    }
    public String ConvertString(InputStream in){
        int ava=0;
        try {
            ava = in.available();
        } catch (IOException ex) {
            ex.printStackTrace();
        }
       // System.out.println(ava);
        byte[] b= new byte[ava];
        try {
            in.read(b);
        } catch (IOException ex) {
            ex.printStackTrace();
        }        
        return new String(b,Charset.forName("utf-8"));
        
    }
    
}
