/*

* Largest Prime Factor of a composite number

* This program finds the largest prime factor of 600851475143

* Works fine in DEV-CPP
*/


#include<stdio.h>
#include<conio.h>
#include<math.h>
 
 


//Funtion to check whether the number is prime 
 
 int prime(long primenum)  
 {
      long i;
      
      
      
      
      for(i=2;i<primenum/2;i++)
      {
         if(primenum%i==0)
              return 0;
          
      }
      
     
   return 1;
 }
 
 
 int main()
 {
     /*
     note that at the end of the number 'll' is used so that long long works
     */
     long long int number =600851475143ll;       
     
     long long trynum=0ll;      //Note 'll'
     
     
     
     
     
     trynum=sqrt(number);
     
     
     if(trynum % 2 == 0)
          trynum+=1;
          
     while(trynum>1)
     {
         if(number % trynum == 0 && prime(trynum)){
              printf("%lld",trynum);
              break;
          }
       
       trynum=trynum-2;
     }
     getch();
     
 }
            
     
     
     
     
