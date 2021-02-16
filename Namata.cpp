

#include <stdio.h>
 int main()
{
    int input,a,result=1;



    printf("number: ");

    scanf("%d",&input);

    printf("how many you want: ");
    scanf("%d",&a);


    for (int i = 1 ; i<(a+1);i++){

        result = input * i;

        printf("%d \n" , result);
    }

}
