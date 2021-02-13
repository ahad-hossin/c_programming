
#include<stdio.h>

int main(){

int a ,b;

printf("enter 1st number");
scanf("%d", &a);

printf("enter 2nd number");
scanf("%d", &b);

if (a>b){

    printf("a is greater ");
}

else if(a==b){
    printf("a equal b");
}

else
        printf("b is greater");


return 0;
}
