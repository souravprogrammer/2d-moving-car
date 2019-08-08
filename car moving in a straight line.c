/*    
       Manuplation of loops  Program For  car moving in a straight line.
       This is a common program in c for beginners.
       A best exercise to learn Loops in c program.

       -------------------------------------------------------------
       internet <souravsh1234567@gmail.com>
       -------------------------------------------------------------



 */


#include <stdio.h>
#include <stdlib.h>
int raw = 0 , col = 0 ; 
/*variable raw and col are global variable using to control 
the raw(y-axis) and column(x-axis) of the screen .
 */
void display() 
{

int x = 0 ,x1 = 0 ,x2 =0 ,x3 =0 ,x4 = 0, x5 = 0 ,x6 = 0 ,x7 = 0 ;
/*variable x1 to x7 are cause to move a car   */



    for (raw = 0 ;raw< 100 ;raw++) //first line 
   {
              system("clear") ; /*It will clear the screen 
              (if you are using windows use "cls" instead of "clear") */

       for (col = 0 ; col < 100 ; col++ )
       {
           printf(" ") ;
           
       }
       printf("\n") ;
       for (col = 0 ; col < 100 ; col++ )
       {

           printf(" ") ;
           
       }
       printf("\n") ;
       for (col = 0 ; col < 100 ; col++ )
       {

           printf(" ") ;
           
       }
       printf("\n") ;
       //----------------------------------------------------------------------x1 (car)-- 
     for (col = 0 ; col < 100 ; col++ )
       {
           if (col==x1 )
           {
               printf("---------") ; /*printing a car roof */
           }
           else 
           printf(" ") ;
           
       }
       printf("\n") ;
       //----------------------------------------------------------------------
            for (col = 0 ; col < 100 ; col++ )
       {
           if (x2==col + 1 )
           {
               printf("/         \\") ;
           }
           else 
           printf(" ") ;
           
       }
       printf("\n") ;
            for (col = 0 ; col < 100 ; col++ )
       {
           if (x3 == col+2 )
           {
               printf("/           \\") ;
           }
           else 
           printf(" ") ;
           
       }
       printf("\n") ;
       //----------------------------------------------------------------------x4 starts here 
                   for (col = 0 ; col < 100 ; col++ )
       {
           if (x4 == col+3 )
           {
               printf("/             \\") ;
           }
           else 
           printf(" ") ;
           
       }
       printf("\n") ;
       //--------------------------------------------------x5------
                   for (col = 0 ; col < 100 ; col++ )
       {
           if (x5 == col+3 )
           {
               printf("| /-\\-----/-\\ |") ;
           }
           else 
           printf(" ") ;
           
       }
       printf("\n") ;
       //----------------------------------------------------x6---
    for (col = 0 ; col < 100 ; col++ )
       {
           if (x6 == col+3 )
           {
               printf("|-|  |   |  |-|") ;
           } 
           else 
           printf(" ") ;
           
       }
       printf("\n") ;

       //----------------------------------------------------x7
                         for (col = 0 ; col < 100 ; col++ )
       {
           if (x7 == col+1 )
           {
               printf("\\-/     \\-/") ;
           } 
           else 
           printf(" ") ;
           
       }
       printf("\n") ;
       /*Here ends the car designe */
//------------------------------------------------------------------
/*it is printing a road for a car  */
       for (col = 0 ; col < 120 ; col++ )
       {

           printf("-") ;
           
       }
       printf("\n") ;



   //-------------------------------------------------------------end portion----

   /* add a value to print a next frame so its look's like object is actully moving */
      x++ ;
      x1++ ;
      x2++ ;
      x3++ ;
      x4++ ;
      x5++ ;
      x6++ ;
      x7++ ;

   //-----------------------------------------------------------------delaying--
   /*i use a loop to dlay. you can use a delay function instead of loop delaying */
   for (int a = 0 ;a<20000 ;a++)
   {
       for (int b = 0 ; b<1000 ; b++)
       {

       }

   }
   //-----------------------------------------------------------------delaying--

    }
   
    }
int main ()
{

    display () ;

    return 0 ;
}