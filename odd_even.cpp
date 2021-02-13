
#include<stdio.h>

int main(){

int a ,b  ;

int result ;

printf("enter 1st number: ");
scanf("%d", &a);


result = a % 2;


if (result==1){
    printf("odd");
}

else {
    printf("even");
}


return 0;
}
