  // Lab Work 7 II Assignment
	/*program to convert infix to prefix expression*/
	#include<stdio.h>
    #include<stdlib.h>
	#include<string.h>
	#include<ctype.h>
	#define MAX 100
    
    void pushopstack( struct opstack *s, char ch);
    char popopstack(struct opstack *s);
   	int precedence(char);
	
    struct opstack      // stack for operators
	{
           char opitems[100];
           int otos;
    };
    
    
               
	int main()
	{
        struct opstack s;
        char prestring[MAX];
        int pretop = -1;
		int i, l;
		char infix[100];
        
        
        s.otos=-1;  // top of opstack set -1 to indicate empty stack
        
		
        printf("Enter a valid infix\n");
		gets(infix);
		
        l=strlen(infix);
		
        for(i=l-1;i>=0;i--)
		{
			//printf("%c",infix[i]);
			if(infix[i]==')')
			{
			  //printf("%c",infix[i]);
              pushopstack(&s,infix[i]); 
  			 }
			else if(isalpha(infix[i]))
			{
				 prestring[++pretop]= infix[i];

				
			}
           else if(infix[i]=='*'||infix[i]=='/'||infix[i]=='+'||infix[i]=='-'||infix[i]=='$')
			{
                if(s.otos!=-1)
                {
			        while(precedence(s.opitems[s.otos])>precedence(infix[i]))
			        {
				          prestring[++pretop]=popopstack(&s);
			        }
                 }   
			    pushopstack(&s , infix[i]);
			     
			}
			else if(infix[i]=='(')
			{
              while(s.opitems[s.otos]!=')')
				{
				   prestring[++pretop]=popopstack(&s);
				  
				  			
				
				}
				s.otos--;
			}
			
      	}
		while(s.otos!=-1)
		{
			  prestring[++pretop]=popopstack(&s);
			
		}
		
   /********for displaying***************/
     for(i=pretop;i>=0;i--)
		{
		   printf("%c",prestring[i]);
		}
     printf("\n");
     system("pause");
     return 0;
	
}

	/****************precedency function*********************/
 int precedence(char ch)
	{
		switch(ch)
		{
			case '$':
			     return(4);
			   //  break;
			case'*':
			case'/':
			     return(3);
			    // break;
			case'+':
			case'-':
			     return(2);
			   //  break;
			default:
			     return(1);
		  }
	}
void pushopstack( struct opstack *s, char ch)
{
     if(s->otos==99)
     {
          printf("\n stack is full.");
          exit(1);
    }
    else
    {
        s->opitems[++s->otos]=ch;
    }    
                        
 }

 
char popopstack(struct opstack *s)
{
     char x;
     if(s->otos ==-1)
       {
           printf("\nThe stack is empty.");
           exit(1);
       }    
       else
       {
           x= s->opitems[s->otos--];
           return x;
        }
 }             
