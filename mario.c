#include<stdio.h>
#include <cs50.h>
 
int main(void)
{
    int n=get_int("Enter the number of Matrix : ");
   
    if ( n < 8)
    {
         for (int i = 0; i < n+1 ; i++)
        {  
             
            for (int j = 1; j <i+1 ; j++)
                {
              
                    printf("#");
                    
                }
           
                printf("\n");  
               
        }
    }else
    {
             printf("you inputed a  wrong valiue !!\n ");
    }
}



  
