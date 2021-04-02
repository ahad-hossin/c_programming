#include<stdio.h>

int main()
{
    int a,b,i,result=0;
   int x;
   printf("a: ");
   scanf("%d", &a);
   printf("b: ");
   scanf("%d", &b);

   while(true)
   {


   for(i=2;i<=a && i<=b;i++)
   {
       if(a%i==0 && b%i==0)
       {

           printf("%d", i);
           return 0;
       }

   }

   printf(" gcf = 1");

   break;

   }

}


