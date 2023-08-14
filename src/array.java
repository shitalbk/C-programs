/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */

    import java.util.Scanner;
public class array{
	public static void main(String ar[]){
		Scanner sc=new Scanner(System.in);
		char a[]=new char[5];
		System.out.println("enter "+a.length+" characters: ");
		for(int i=0;i<a.length;i++)
		{
			a[i]=(char)sc.nextByte();

		}
		for(int i=0;i<a.length;i++)
		{
					System.out.print((byte)a[i]+" ");
		}

	}
}
    

