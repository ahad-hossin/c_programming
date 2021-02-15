#include<stdio.h>

int main(){

int a;

int result ;

printf("Year: ");
scanf("%d", &a);


result = a % 4;


if (result==0){
    printf("leap year");
}

else {
    printf("normal year");
}


return 0;
}
