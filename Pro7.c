/*
  *Author: TriDe
* By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

* What is the 10 001st prime number?

* Works Fine in Dev-Cpp

*Time-Taken approx: 4s
*/


#include<stdio.h>
#include<conio.h>
 int main()
 {
     long long number=1ll;
     long i=1;
     long j;
     int flag=1;
     
  for(number=3; ;number=number+2)             
   {
        flag=1;   
        if(i==10001)
           break;         
       for(j=2;j<number/2;j++)                      //loop to check whether the Number is prime
         {
           if(number%j==0){
               
               flag=0;
               break;            
              }
           }
           
      if(flag==1){                               
         
         i++;
      } 
      
      if(i==10001)
           break; 
   }
      
      
       printf("%lld",number);
  
 getch();
}          
                   
     
     
