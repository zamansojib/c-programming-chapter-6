#include<stdio.h>

int main(void){

    // lowercase to uppercase

    // char name[30];
    // int i = 0;
    // printf("Enter your any string: ");
    // fgets(name,30,stdin);

    // while(name[i]){
    //     if(name[i] >= 'a' && name[i] <= 'z'){
    //         name[i] = name[i] - 32;
    //     }
    //     i++;
    // }
    // printf("Your name capital letter: %s",name);

    // draw star pyramid

    //left half star pyramid using for loop
    
    // int i,j,row;
    // printf("enter your half pyramid rows: ");
    // scanf("%d",&row);
    // for(i = 1;i <= row;i++){
    //     for(j = 1;j <= i;j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
     
    //left half star pyramid using while loop

    //  int i = 1,j,row;
    // printf("enter your expected row to create left star pyramid: ");
    // scanf("%d",&row);
    // while(i <= row){
    //     j = 1;
    //     while(j <= i){
    //          printf("* ");
    //         j++;
    //     }

    //     i++;
    //     printf("\n");
    // }

     //left half star pyramid using do while loop
      
    //  int i = 1,j,row;
    //  printf("enter your expected row to create left star pyramid: ");
    //  scanf("%d",&row);

    //  do{
        
    //     j = 1;
    //     do{

    //         printf("* ");
    //         j++;
    //     }while(j <= i);
      
    //     i++;
    //     printf("\n");
    //  }while(i<=row);

    //left half number pyramid using for loop

    //  int i,j,row;
    //  printf("Enter your expected row to create left number pyramid: ");
    //  scanf("%d",&row);

    //  for(i = 1;i <= row;i++){
      
    //     for(j = 1; j <= i; j++){
    //         printf("%d ",j);
    //     }

    //   printf("\n");
    //  }

    //left half number pyramid using while loop

    //  int i = 1,j,row;
    //  printf("Enter your expected row to create left number pyramid: ");
    //  scanf("%d",&row);

    //  while(i <= row){
    //     j = 1;

    //     while(j <= i ){
    //         printf("%d ",j);

    //         j++;
    //     }
       
    //     i++;
    //   printf("\n");
    //  }

    //left half number pyramid using do while loop

    //  int i = 1,j,row;
    //  printf("Enter your expected row to create left number pyramid: ");
    //  scanf("%d",&row);

    //  do{
    //     j = 1;

    //     do{
    //         printf("%d ",j);

    //         j++;
    //     }while(j <= i );
       
    //     i++;
    //   printf("\n");
    //  }while(i <= row);


      //left half Alphabet pyramid using for loop
        
    //    int i,j,n;
    //    printf("Enter yor expected row: ");
    //    scanf("%d",&n);

    //    for(i = 0; i < n; i++){

    //      for(j = 0;j <= i;j++){

    //         printf("%c ",j + 'A');

    //      }


    //    printf("\n");
    //    }


       //left half Alphabet pyramid using while loop

        // int i = 0,j,n;
        // printf("Enter your expected value: ");
        // scanf("%d",&n);

        // while(i<n){
        //    j = 0;
        //    while(j<=i){
        //     printf("%c ",j + 'A');
        //     j++;
        //    }

        //  i++;
        //  printf("\n");
        // }

        // int i = 0,j,n;
        // printf("Enter your expected value: ");
        // scanf("%d",&n);

        // do{
        //    j = 0;
        //    do{
        //     printf("%c ",j + 'A');
        //     j++;
        //    }while(j<=i);

        //  i++;
        //  printf("\n");
        // }while(i<n);

        //Inverted right half pyramid using for loop
       
    //   int i,j,n;
    //   printf("Enter your expected row: ");
    //   scanf("%d",&n);
      
    //   for(i = 0; i < n;i++){
    //     for(j = 0; j < n - i; j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    //   }

   //Inverted right number half pyramid using for loop

    // int i,j,n;
    // printf("enter your expectation number: ");
    // scanf("%d",&n);
    // for(i = 0;i<n;i++){
    //    for(j = 0; j < n - i;j++){
    //     printf("%d ",j + 1);
    //    } 


    //   printf("\n");
    // }


   //Inverted right Alphabet half pyramid using for loop

    // int i,j,n;
    // printf("enter your expectation number: ");
    // scanf("%d",&n);
    // for(i = 0;i<n;i++){

    //    for(j = 0; j < n - i;j++){
    //     printf("%c ",j + 'A');
    //    } 


    //   printf("\n");

    // }


   //Inverted left half star pyramid using for loop

      // int i,j,k,n;
      // printf("enter your expectation number: ");
      // scanf("%d",&n);

      // for(i = 0; i < n; i++){

      //   for(j = 0; j < 2*i;j++){       //white space

      //     printf(" ");
      //   }

      //   for(k = 0; k < n - i;k++){
      //     printf("* ");
      //   }

      //   printf("\n");

      // }
      
     

      //Inverted right star half pyramid using while loop
      
      // int i = 0,j,n;
      // printf("Enter your row: ");
      // scanf("%d",&n);

      // while(i < n){

      //   j = 0;
      //   while(j < n - i){
      //       printf("* ");
      //       j++;
      //   }


      //   i++;
      //   printf("\n");
      // }

      //Inverted right number half pyramid using while loop

      // int i = 0,j,n;
      // printf("enter your expected value: ");
      // scanf("%d",&n);
      // while(i<n){
      //   j = 0;
      //   while(j < n - i){
      //       printf("%d ",j + 1);

      //     j++;
      //   }

      //   i++;
      //   printf("\n");
      // }

    //Inverted right Alphabet half pyramid using while loop

    //   int i = 0,j,n;
    // printf("enter your expectation number: ");
    // scanf("%d",&n);
    // while(i<n){

    //   j = 0;
    //    while( j < n - i){
    //     printf("%c ",j + 'A');

    //     j++;
    //    } 


    //   printf("\n");
    //   i++;
    // }

      //Inverted left half star pyramid using while loop

      //    int i = 0,j,k,n;
      // printf("enter your expectation number: ");
      // scanf("%d",&n);

      // while( i < n ){

      //   j = 0;
      //   while( j < 2*i){                         //white space
      //     printf(" ");
      //      j++;
      //   }  
      //   k = 0;
      //   while(k < n-i){
      //     printf("* ");

      //     k++;
      //   }                  

      //   printf("\n");
      //   i++;
      // }


     //Inverted right half pyramid using do while loop

      // int i = 0,j,n;
      // printf("Enter your row: ");
      // scanf("%d",&n);

      // do{

      //   j = 0;
      //   do{
      //       printf("* ");
      //       j++;
      //   }while(j < n - i);


      //   i++;
      //   printf("\n");
      // }while(i < n);

    /*
    * * * * *
    * * * *
    * * *
    * * 
    * 
    
    */

    //Inverted right number half pyramid using do while loop

    // int i = 0,j,n;
    //   printf("enter your expected value: ");
    //   scanf("%d",&n);
    //   do{
    //     j = 0;
    //    do{
    //         printf("%d ",j + 1);

    //       j++;
    //     }while(j < n - i);

    //     i++;
    //     printf("\n");
    //   }while(i<n);

    //Inverted right Alphabet half pyramid using do while loop

    // int i = 0,j,n;
    // printf("enter your expectation number: ");
    // scanf("%d",&n);
    // do{

    //   j = 0;
    //    do{
    //     printf("%c ",j + 'A');

    //     j++;
    //    } while( j < n - i);


    //   printf("\n");
    //   i++;
    // }while(i<n);

    //Inverted left half star pyramid using do while loop

    // int i = 0,j,k,n;
    // printf("enter your expectation number: ");
    // scanf("%d",&n);

    // do{

    //   j = 0;
    //   do{                         //white space
    //     printf(" ");
    //      j++;
    //   } while( j < 2*i); 

    //   k = 0;
    //   do{
    //     printf("* ");

    //     k++;
    //   }  while(k < n-i);                

    //   printf("\n");
    //   i++;
    // }while( i < n );


    //  int m,n,rows,spc,k;
    //  printf("Enter your pyramid rows: ");
    //  scanf("%d",&rows);
    //  spc = rows + 4 - 1;
     
    //  for(m = 1; m <= rows; m++){

    //     for(k = spc; k >= 1; k--){
    //         printf(" ");
    //     }
        
    //     for(n = 1; n <= m; n++){
    //         printf("* ");
    //     }

    //     printf("\n");
    //     spc--;

    //  }

     
    // int i = 1,j,row_wh;
    // printf("Enter you half pyramid row: ");
    // scanf("%d",&row_wh);

    // while(i<=row_wh){
    //     j = 1;
    //     while(j<=i){
    //         printf("* ");
    //         j++;
    //     }


        
    //     printf("\n");
    //     i++;
    // }
 
    //  int x = 1,y,row_do;
      
    //  printf("Enter your expression: ");
    //  scanf("%d",&row_do);

    //  do{
      
    //     y = 1;
    //     do{

    //         printf("* ");
    //         y++;
    //     }while(y <= x);


    //     x++;
    //     printf("\n");
    //  }while(x <= row_do);


    //  int p = 1 ,q,spcs,row_ph,s;
    //  printf("Enter your pyramid rows: ");
    //  scanf("%d",&row_ph);
    //  spcs = row_ph + 4 - 1;
     
    //  while(p <= row_ph){
        
    //     q = spcs;
    //     while(q >= 1){
    //         printf(" ");
    //         q--;
    //     }

    //     s = 1;
    //     while(s <= p){
    //         printf("* ");
    //      s++;   
    //     }
    //     p++;
    //     printf("\n");
    //     spcs--;
    //  }
     
      /*
       full pyramid using do while loop
      */

    //  int p = 1,q,row_dh,r,spcsr;
    //  printf("Enter your expression: ");
    //  scanf("%d",&row_dh);
    //  spcsr = row_dh + 4 - 1;

    //  do{
      
    //     q = spcsr;
    //     do{

    //      printf(" ");
    //      q--;
    //     }while(q >= 1);
      
    //     r = 1;
    //     do{
    //      printf("* ");

    //         r++;
    //     }while(r <= p);


    //   p++;
    //   printf("\n");
    //   spcsr--;
    //  }while(p <= row_dh);


    /*
     inverted full pyramid star pattern using for loop
    */
    

    // int i,j,n,k;
      

    // printf("Enter your expected pyramid row: ");
    // scanf("%d",&n);

    // for(i = 0; i < n; i++){

    //  for(j = 0; j < 2*i; j++){
    //    printf(" ");
    //  }
    //  for(k = 0; k < 2 * (n-i)-1;k++){
    //    printf("* ");
    //  }

    //    printf("\n");
    // }

    /*
     inverted full pyramid number pattern using for loop
    */

    // int i,j,n,k;
      

    // printf("Enter your expected pyramid row: ");
    // scanf("%d",&n);

    // for(i = 0; i < n; i++){

    //  for(j = 0; j < 2*i; j++){
    //    printf(" ");
    //  }
    //  for(k = 0; k < 2 * (n-i)-1;k++){
    //    printf("%d ",k + 1);
    //  }

    //    printf("\n");
    // }


   /*
     inverted full pyramid Alphabet pattern using for loop
    */

    //  int i,j,n,k;
      

    //  printf("Enter your expected pyramid row: ");
    //  scanf("%d",&n);

    //  for(i = 0; i < n; i++){

    //   for(j = 0; j < 2*i; j++){
    //     printf(" ");
    //   }
    //   for(k = 0; k < 2 * (n-i)-1;k++){
    //     printf("%c ",k + 'A');
    //   }

    //     printf("\n");
    //  }

    /*
     inverted full pyramid star pattern using while loop
    */

    // int i = 0,j,k,n;
    
    // printf("Enter your expected row: ");
    // scanf("%d",&n);
    
    // while(i < n){
    //     j = 0;

    //     while(j < 2*i){

    //         printf(" ");
    //         j++;
    //     }

    //     k = 0;
    //     while(k < 2*(n-i)-1){
    //         printf("* ");
    //         k++;
    //     }

    // i++;
    // printf("\n");
    // }


    /*
     inverted full pyramid number pattern using while loop
    */
    
    // int i = 0,j,k,n;
    
    // printf("Enter your expected row: ");
    // scanf("%d",&n);
    
    // while(i < n){
    //     j = 0;

    //     while(j < 2*i){

    //         printf(" ");
    //         j++;
    //     }

    //     k = 0;
    //     while(k < 2 * (n - i) -1){
            
    //         printf("%d ",k+1);
    //         k++;
    //     }

    // i++;
    // printf("\n");
    // }

     /*
     inverted full pyramid Alphabet pattern using while loop
     */

    // int i = 0,j,k,n;
    
    // printf("Enter your expected row: ");
    // scanf("%d",&n);
    
    // while(i < n){
    //     j = 0;

    //     while(j < 2*i){

    //         printf(" ");
    //         j++;
    //     }

    //     k = 0;
    //     while(k < 2*(n-i)-1){
            
    //         printf("%c ",k + 'A');
    //         k++;
    //     }

    // i++;
    // printf("\n");
    // }


     /*
     inverted full pyramid star pattern using do while loop
     */

    //  int i = 0,j,k,n;
    //  printf("enter your star pattern row: ");
    //  scanf("%d",&n);

    //  do{
        
    //     j = 0;

    //     do{
    //         printf(" ");
    //         j++;
    //     }while(j < 2*i);
         
    //      k = 0;

    //      do{

    //         printf("* ");
    //         k++;
    //      }while(k < 2*(n-i)-1);


    //     i++;
    //     printf("\n");
        
        
    //  }while(i < n);

     /*
     inverted full pyramid number pattern using do while loop
     */


    //  int i = 0,j,k,n;
    //  printf("enter your number pattern row: ");
    //  scanf("%d",&n);

    //  do{
        
    //     j = 0;

    //     do{
    //         printf(" ");
    //         j++;
    //     }while(j < 2*i); // i=2, j<=4, i = 3, 2*3 = 6, i = 4, 2*4 = 8 , i = 5, 2*5 = 10
         
    //      k = 0;

    //      do{

    //         printf("%d ",k + 1);
    //         k++;
    //      }while(k < 2*(n-i)-1); // i = 2, k <= 5 , i = 3, k<=3 , i = 4, k<=1 , i = 5, k<=


    //     i++;
    //     printf("\n");
        
        
    //  }while(i < n);

    /*
     inverted full pyramid Alphabet pattern using do while loop
     */

    //  int i = 0,j,k,n;
    //  printf("enter your number pattern row: ");
    //  scanf("%d",&n);

    //  do{
        
    //     j = 0;

    //     do{
    //         printf(" ");
    //         j++;
    //     }while(j < 2*i); // i=2, j<=4, i = 3, 2*3 = 6, i = 4, 2*4 = 8 , i = 5, 2*5 = 10
         
    //      k = 0;

    //      do{

    //         printf("%c ",k + 'A');
    //         k++;
    //      }while(k < 2*(n-i)-1); // i = 2, k <= 5 , i = 3, k<=3 , i = 4, k<=1 , i = 5, k<=


    //     i++;
    //     printf("\n");
        
        
    //  }while(i < n);


    //  program to print diamond pattern
      
    // int i,j,rows = 4;
    // int stars,spaces;
    // stars = 1;
    // spaces = rows - 1;

    // for(i = 1; i < rows * 2;i++){

    //    for(j = 1; j <= spaces; j++){                 // white spaces print
    //       printf(" ");

    //    }  
    //    for(j = 1; j < stars * 2 ; j++){                               //star printf
    //     printf("*");
    //    }
       
    //    printf("\n");

    //    if(i < rows){
    //     spaces--;
    //     stars++;
    //    }else{
    //     spaces++;
    //     stars--;
    //    }

    // }


    
    // int number, i, k, count = 1;
 
    // printf("Enter number of rows: \n");
    // scanf("%d", &number);
    // count = number - 1;
    // for (k = 1; k <= number; k++)
    // {
    //     for (i = 1; i <= count; i++)  //white spaces
    //         printf(" ");
    //     count--;
    //     for (i = 1; i <= 2 * k - 1; i++)
    //         printf("*");
    //     printf("\n");
    //  }
    //  count = 1;
    //  for (k = 1; k <= number - 1; k++)
    //  {
    //      for (i = 1; i <= count; i++)
    //          printf(" ");
    //      count++;
    //      for (i = 1 ; i <= 2 *(number - k)-  1; i++)
    //          printf("*");
    //      printf("\n");
    //   }
    

    //  int i,number,j,spaces = 1;
    //  printf("Enter your row: ");
    //  scanf("%d",&number);

    //  spaces = number - 1;
    //  for(i = 1; i <= number; i++){

    //   for(j = 1; j <= spaces; j++){
    //     printf(" ");
        

    //   }
    //   spaces--;
    //   for(j = 1; j <= 2 * i - 1; j++){
    //     printf("%d",j);
    //   }
    //    printf("\n");

    //  }

    //  spaces = 1;

    //  for(i = 1; i <= number - 1; i++){

    //   for(j = 1; j <= spaces; j++){
    //     printf(" ");
        
    //   }
    //   spaces++;
    //    for(j = 1; j <= 2* (number - i)-1;j++){
    //     printf("%d",j);

    //   }
    //     printf("\n");

    //  }


    // int n = 5;

    // // First outer loop to iterator through each row
    // for (int i = 0; i < 2 * n - 1; i++) {

    //     // Assigning values to the comparator according to
    //     // the row number
    //     int comp;
    //     if (i < n){
    //       comp = 2 * (n - i) - 1;
    //     }else{
    //       comp = 2 * (i - n + 1) + 1;
    //     } 

    //     // First inner loop to print leading whitespaces
    //     for (int j = 0; j < comp; j++){
    //       printf(" ");
    //     }
            

    //     // Second inner loop to print stars *
    //     for (int k = 0; k < 2 * n - comp; k++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    int n = 5, i,j,k;
    for(i = 0; i < 2 * n - 1 ; i++){

       int comp;
      if(i < n){
        comp = 2 * (n-i) - 1;
      }else{
        comp = 2 * (i-n+1) + 1;
      }

      for(j = 0; j < comp; j++){
        printf(" ");
      }
      for(k = 0; k < 2 * n - comp;k++){
        printf("%c ",k+'A');
      }
      printf("\n");
    }

    return 0;
}


/*
*
* *
* * *
* * * *
* * * * *
*/

/*
    *
   * *
  * * *
 * * * *
*/

/*

* * * * * *
 * * * * *
  * * * *
   * * *
    * *
     * 
*/