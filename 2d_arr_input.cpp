
#include <stdio.h>
int main() {

    int arr[100][100],r,c;

    printf("enter row");
    scanf("%d",&r);
    printf("enter coloum");
    scanf("%d",&c);





    for (int i = 0;i<r;i++){
        for(int j =0 ; j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }


    for (int i = 0;i<r;i++){
        for(int j =0 ; j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }

        printf("\n");
    }





    return 0;
}
