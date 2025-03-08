#include<stdio.h>
#include<stdbool.h>
#include<time.h>
#include<stdlib.h>
int main(void){


//    int n = 5;

//    while(n < 5){
//     printf("this is right code.\n");
//    }

//    do{
//      printf("at least printf once.\n");
//    }while(n < 5);
   
    // int i = 0;
    // do{
    //     printf("%d\n",i);
    //     i++;
    // }while(i < 5);
      

    // bool c = false;

    // do{
    //     printf("this body is executed.\n");
    // }while(c);


    //  int i = 0, j;
    //  int c = 0;

    //  do{
    //     j = 0;
      
    //     do{
    //         printf("%d ",c++);
    //         j++;
    //     }while(j < 3);
        
    //     printf("\n");
    //     i++;
    //  }while(i < 3);

    // int a = 1;

    // do{
    //     printf("hello world\n");
    //     a++;
    // }while(a<=5);
    // printf("End of the loop\n");

    // int a = 0, b = 0;

    // printf("output of the while loop:\n");

    // while(a < 5){
    //     a++;
    //     printf("a: %d\n",a);
    // }

    // printf("Output of the do while loop:\n");

    // do{
    //     b++;
    //     printf("b: %d\n",b);
    // }while(b < 5);

//     int i,row,j;
//     i=1;
//     j=1;
//     printf("Input number of rows for the table : ");
//     scanf("%d",&row);
//  do{
//   j=1;
//   do{
// 	printf("%d\t",i*j);
// 	  j++;
//    	}while(j<=row);
//     i++;
//     printf("\n");
//    }while(i<=row);



    int choosen_number,chance = 3;
  time_t t;
  srand((unsigned)time(&t));
  int lucky_number = rand() % 10 + 1;
  bool is_lose = true;
  
  do{
     printf("Enter your lucky number (%d) : ",chance);
     scanf("%d",&choosen_number);
     
     if(lucky_number == choosen_number){
        printf("Congratulaton! You have choose correct number.\n");
        is_lose = false;
        break;
     }
     
     if(choosen_number < lucky_number){
      printf("Your guessing number is small.\n");
     }else{
      printf("Your guessing number is big.\n");
     }


     chance--;
  }while(chance > 0);
  if(is_lose){
    printf("You lose.Your lucky number = %d\n",lucky_number);
  }
    
    return 0;
}