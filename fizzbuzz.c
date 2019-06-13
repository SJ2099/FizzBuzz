#include<stdio.h>
void main()
{
  for(int p=1;p<=100;p++)
  {
    if(((p%3)==0) && ((p%5)==0)
    {
      printf("FizzBuzz\n");
     }
     else if((p%3)==0)
     {
      printf("Fizz\n");
     }
     else if((p%5)==0)
     {
      printf("Buzz\n");
     }
     else
      printf("%d\n",p);
   }
   getch();
}
