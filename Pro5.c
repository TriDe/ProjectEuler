/*
     Author: TriDe
 *2520 is the smallest number that can be divided by 
 *each of the numbers from 1 to 10 without any remainder.
 *What is the smallest positive number that is 
 *evenly divisible by all of the numbers from 1 to 20?
  
  Worked fine in Dev-Cpp
*/
#include<stdio.h>
#include<conio.h>
  
  int main()
  {
    long number=1000;                   //Just took an Arbitary Value - 1000
    int i=20;
      
      while(i>0)                         
      {
         if(number%i==0)
           i--;
         
         else{ 
          
           number=number+1;
           i=20;
         }   
         
      }
    
     printf("Number is %ld ",number);
     getch();
  }
      
      
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
