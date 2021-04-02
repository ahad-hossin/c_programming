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


   for(i=2;i<1000;i++)
   {
       if(i%a==0 && i%b==0)
       {

           printf("%d", i);
           return 0;
       }

   }

   break;

   }

}


