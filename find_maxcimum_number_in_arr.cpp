

#include <stdio.h>
 int main()
{
    int input;

    printf("enter how many number");

    scanf("%d",&input);

    int arr[100];

    int temp = 0;


    for(int i = 0;i<input;i++){

        printf("enter number %d    ",i);
        scanf("%d",&arr[i]);
    }

    temp = arr[0];

    for(int i=0;i<input;i++){
        if(temp<arr[i]){
            temp = arr[i];
        }
    }

printf("%d",temp);


}
