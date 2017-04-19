public class Greet
{
    public static void main(String args[])
    {
        for(int i=1;i<=6;i++)
        {
            
            for(int j= 5;j>=1;j--)
            {
                if(i==5)
            {
                System.out.print("J    ");
                break;
            }
                if(i==6)
                {
                    System.out.print("JJJJJ");
                    break;
                }
                System.out.print(" ");
            }
            
            for(int k = 0;k<1;k++)
            {
                System.out.print("J");
            }
            for(int l=1;l<=4;l++)
            {
                System.out.print(" ");
            }
            for(int a = 0;a<6;a++)
            {
                 if(i==2 && a==0)
             {
                 System.out.print("F");
                 break;
             }
                 if(i==3 && a==0)
                 {
                     System.out.print("FFFF");
                     break;
                 }
                 if(i==4 && a==0)
                 {
                   System.out.print("F");
                   break;
                 }
                 if(i==5 && a==0)
                 {
                   System.out.print("F");
                   break;
                 }
                 if(i==6 && a==0)
                 {
                   System.out.print("F");
                   break;
                 }
             System.out.print("F");
            
            }
            System.out.println( );
        
        }
    }
}
