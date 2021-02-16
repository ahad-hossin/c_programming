

#include <stdio.h>
 int main()
{
    int input;

    printf("enter how many number");

    scanf("%d",&input);

    int arr[100];



    for(int i = 0;i<input;i++){

        printf("enter number %d    ",i);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<input;i++){
        printf("%d \n" , arr[i] );
    }


}
