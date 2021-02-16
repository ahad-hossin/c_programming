#include <stdio.h>
 int main()
{
    int arr[1000] = {1,2,3,4,5,6};

    int count1 = 0;

    for (int i = 0;i<6;i++){

            printf("%d   ", arr[i]);

            if(arr[i]%2==0){

            printf("even\n");
            }
            else{
                printf("odd\n");
            }

    }
}
