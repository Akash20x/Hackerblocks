#include <stdio.h> 
#include <bits/stdc++.h> 
using namespace std; 

int factorial(int num) 
{
   int fact;
   for(fact = 1; num > 1; num--)
      fact *= num;
   return fact;
}

int main() 
{
   int num, i, j;
   cin>>num;
   
   for(i = 0; i < num; i++) 
   {
      for(j = 0; j < num-i; j++)
         cout<<"  ";
      
      for(j = 0; j <= i; j++)
        cout<<" "<<factorial(i)/(factorial(j)*factorial(i-j))<<"  ";
      
      cout<<"\n";
   }
   return 0;
}
