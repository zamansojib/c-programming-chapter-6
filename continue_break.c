#include<stdio.h>

int main(void){

    //  int i;

    //  for(i = 0; i < 100;i++){
    //     // if(i == 5){
    //     //     break;
    //     // }

    //     if(i%3 == 0 || i % 5 == 0 || i % 6 == 0){
    //         continue;
    //     }
    //     printf("I = %d\n",i);
    //  }

    int i,j;

    for(i = 0; i < 5; i++){
  
        printf("i = %d, j = ",i);

        for(j = 0; j < 5; j++){
            if(j == 2){
                // break;
                continue;
            }

            printf("%d ",j);
        }
        printf("\n");

    }
  


    return 0;
}