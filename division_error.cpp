
#include<stdio.h>

int main(){

float a ,b , result ;

printf("enter 1st number: ");
scanf("%f", &a);

printf("enter 2nd number: ");
scanf("%f", &b);

if (b==0)
{
    printf("ERROR");
}
else{
    result = a/b;

    printf("result %f ", result );
}
return 0;
}
