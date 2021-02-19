
#include <stdio.h>
 int main()
{

    char str1[1000],str2[1000];

    gets(str1);
    gets(str2);

    int i = 0 , j = 0;

    while(str1[i]!='\0'){

            i++;

    }


    while(j!=i){


        if (str1[j]!=str2[j]){

                printf("not same");
                return 0;

        }



        j++;
    }


    printf("same");

    return 0;

}
