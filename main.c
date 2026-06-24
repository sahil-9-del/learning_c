#include <stdio.h>

int main()
{
   /*int a,b,i=1,a1;
   char X;
   printf("Enter your calculation\n");
    scanf("%d %c %d",&a,&X,&b);
   
   
   if (X == '+')
   {   
      printf("%d",a+b);
   }
      
   else if (X == '-')
   {   
      printf("%d",a-b);
   }   
   else if (X == '*')
   {   
      printf("%d",a*b);
   }      
   else if (X == '/')
   {   
      printf("%d",a/b);
   }   
   else if (X== '^')
   {
      a1=a;
      while (i<b)
      {
         i=i+1;
         a1=a1*a;
      }
      printf("%d",a1);
   }   */
   int a,i=0;
   printf("Enter the number\n");
   scanf("%d",&a);
   while (i<10)  
   {
      i=i+1;
      printf("%d X %d = %d\n", a,i,a*i);
   }
   


   
   
      return 0;
}