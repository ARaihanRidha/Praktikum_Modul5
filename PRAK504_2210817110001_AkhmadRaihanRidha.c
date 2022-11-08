#include <stdio.h>
int reverse(int a,int reversed)
{ 
    while (a!=0)
    {
        reversed *=  10;
        reversed +=  a%10;
        a=a/10;

    }
    return reversed;    
}

int main() 
{
   int a,b,reversed=0;
   scanf("%d %d", &a,&b);
   a=reverse(a,reversed);
   b=reverse(b,reversed);
   int C = a+b;
   printf("%d",reverse(C,reversed));
}
