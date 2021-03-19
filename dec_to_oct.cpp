
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,a,temp,result=0;

    printf("If Decimal press 10 or press 8: ");
    scanf("%d",&a);

     if(a==8)
     {
        printf("enter a number: ");
        scanf("%d",&n);
        i=1;

          while (n != 0)
        {
        result += (n % 8) * i;
        //printf("%d \n",result);
        n /= 8;
        i *= 10;
        }


     }

     printf("%d",result);
    return 0;
}
