/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
import java.io.InputStream;
import java.util.Scanner;
public class asciiTest {
    public asciiTest(){
        InputStream in= asciiTest.class.getResourceAsStream("index.html");
        String reader=CovertString(in);
        
            System.out.println(reader.indexOf(""));
            
        
        
         
    }
    public static void main(String args[]) {
        
        asciiTest a=new asciiTest();
        
        
    }
    public String CovertString(InputStream in){
    Scanner sc = new Scanner(in).useDelimiter("\\A");
        return sc.hasNext()? sc.next() : "" ;
    }
}
