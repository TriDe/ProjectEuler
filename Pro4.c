/*
  Author: TriDe
* A palindromic number reads the same both ways. 
* The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 99.
* Find the largest palindrome made from the product of two 3-digit numbers.

Works Fine in Dev-CPP

*/



#include<stdio.h>
#include<conio.h>

 int main()
 {
     
     long number,a,s,rem;
     long i,j;
     long max;
     
     for(i=999;i>100;i--)
     {
      for(j=999;j>100;j--){
        
        number=i*j;
        a=number;
          
        
          
          while(number>0){        //Loop to check whether the number is pallindrome
            
            rem=number%10;
            s=s*10+rem;
            number=number/10;
          }
            if(s==a)
            {
              if(s>max)
                 max=s;
            }
            else 
              s=0;
       }
          
      }
      printf("Largest Pallindrome is %ld",max);
      getch();
 }
