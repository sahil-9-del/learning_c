#include <stdio.h>

int fib_recursive(int n)
{
    if (n==1 || n==2)
    {
        return 1;
    }
    else{
        return (fib_recursive(n-1) + fib_recursive(n-2));
    }
    
}
int fib_iterative(int n)
{ 
    int i,a=0,b=1,c;
    for ( i = 1; i < n; i++)
    {
        c=a+b;
        a=b;
        b=c;
        
    }
    
    return c;
    
}
int main()
{
   int x;
   x= fib_recursive2(14);
   printf("%d",x);
    
    return 0;
}
