/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shitalnnn
 */
import java.util.Scanner;
public class nuts {
    public nuts(){
    
    }
    int i;
   public char[] initboard(char[] a){
   int size=a.length;
   for (i=1;i<size;i++){ 
       char change= (char) ('0' + i);
    
   a[i]=change;
   }
   return a;
   }
   public char[] board(char[] a){
   int z=0;
   int size=a.length;
   for (i=1;i<size;i++){
   System.out.print("| " + a[i] + " ");
   if (i%3==0){
   z= z + 1;
   System.out.println("|");
   if(z<=2){
   System.out.println("|---|---|---|");
   }
   }
   }
   return a;
   }
   public int checkwin(char[] a){
   if (a[1]==a[2]&&a[2]==a[3]){
   return 1;
   } 
   else if (a[4]==a[5]&&a[5]==a[6]){
   return 1;
   }
   else if (a[7]==a[8]&&a[8]==a[9]){
   return 1;
   }
   else if (a[1]==a[4]&&a[4]==a[7]){
   return 1;
   }
   else if (a[2]==a[5]&&a[5]==a[8]){
   return 1;
   }
   else if (a[3]==a[6]&&a[6]==a[9]){
   return 1;
   }
   else if (a[1]==a[5]&&a[5]==a[9]){
   return 1;
   }
   else if (a[3]==a[5]&&a[5]==a[7]){
   return 1;
   }
   else if(a[1]!='1'&&a[2]!='2'&&a[3]!='3'&&a[4]!='4'&&a[5]!='5'&&a[6]!='6'&&a[7]!='7'&&a[8]!='8'&&a[9]!='9'){
   return 0;
   }
   else{
   return -1;
   }
   }
   public int checkcell(int c,char[] a){ 
       for (i=1;i<10;i++){
          char change=(char) ('0' + i);
            if (c==i && a[c]==change){
            return i;
            
            }
       }
       return 0;
   }
   public static void main(String[] args)
    {
        char[] a= new char[10];
        nuts n= new nuts();
        int winval=-1,player=1;
        char mark;
        a=n.initboard(a);
        
     do{
         n.board(a);
    if (player%2==1){
    player=1;
    }
    else{
    player=2;
    }
    System.out.println();
    System.out.println("=>Player " + player + " Enter a number of cell where you want to provide your input.");
    System.out.println();
    System.out.print("->");
    Scanner s= new Scanner(System.in);
    int choice = s.nextInt();
    System.out.println();
    if(player==1){
    mark='X';
    }
    else {
    mark='O';
    }
    int index = n.checkcell(choice,a);
    if (index>=1){
         a[index]=mark;
    }
    else {
    System.out.println("Invalid move !! Please Try Again.");
    System.out.println();
    player=player - 1;
    }
    winval=n.checkwin(a);
    player=player + 1; 
    }
     while(winval==-1);
    n.board(a);
    if (winval==1){
        System.out.println();
        System.out.println("+++++++++++++++++");
        System.out.println("+ Player " + (player-1) + " wins +");
        System.out.println("+++++++++++++++++");
    }
    else{
        System.out.println();
        System.out.println("++++++++++++++++");
        System.out.println("+ Game is draw +");
        System.out.println("++++++++++++++++");
    }
    }
}