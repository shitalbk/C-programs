/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class findState {
    public static void main(String args[])
    {
        String states[] = {"Alaska", "California" , "Illinois" , "Oregon", "Texas", "Wisconin" , "Joey", "Harry", 
            "Mick", "Wyoming"};
        String firststate = "California";
        //This state will be found
        String secondstate = "Joey";
        //This state will not be found
        int x;
        boolean found = false;
        for(x = 0;x<states.length;x++)
        
         if(firststate.equals(states[x]))
             found = true;
        if(found)
        
            System.out.println(firststate + " is in the list");
        
        else
        System.out.println(firststate +" is not in the list");
        found = false;
        for(x= 0;x<states.length;x++)
            if(secondstate.equals(states[x]))
        found = true;
        if(found)
            System.out.println(secondstate + " is in the list");
        else
          System.out.println(secondstate + " is not in the list");  
    }
}
