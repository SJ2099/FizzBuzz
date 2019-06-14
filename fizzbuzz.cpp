#include<iostream.h>
#include<conio.h>
int main()
{
  int i=1;
  while(i<=100)
  {
    if(i%15==0)
    {
      cout<<"FizzBuzz";
     }
     else if(i%5==0)
     {
      cout<<"Buzz";
     }
     else if(i%3==0)
     {
      cout<<"Fizz";
     }
     else
      cout<<i;
   }
   getch();
   return 0;
}
