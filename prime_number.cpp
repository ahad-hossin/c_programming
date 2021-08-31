#include<stdio.h>
int main()
{
int result,a;

scanf("%d",&a);

for(int i=2;i<a/2;i=i+1){
    if(a%i==0){
    printf("not prime");
    return 0;
   }
}
printf("is prime");

return 0;
}


