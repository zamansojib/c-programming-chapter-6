#include<stdio.h>

int main(void){

     /*
     1.Write a program in C to display the first 10 natural numbers.
     */
    // int i;
    // for(i = 1; i <= 10; i++){
    //   printf("%d ",i);
    // }
    // printf("\n");

    /*
     2. Write a C program to compute the sum of the first 10 natural numbers.
     */
     
    //  int i,sum = 0;
    //  printf("The first 10 natural number is :\n");
    //  for(i=1;i<=10;i++){
        
    //    printf("%d ",i);
    //    sum = sum + i;
    //  }
    //  printf("\nThe sum is : %d\n",sum);
     
    /*
     3. Write a program in C to display n terms of natural numbers and their sum.
     */

    // int i,n,sum=0;
    
    // printf("Please enter your test number: ");
    // scanf("%d",&n);
    
    // for(i=1;i<=n;i++){
        
    //    sum = sum+i;
       
    //    printf("%d ",i);
    // }
    // printf("\nThe sum of natural number upto %d terms : %d",n,sum);
    

    /*
     4. Write a program in C to read 10 numbers from the keyboard and find their sum and average.
     */

    //  int i,n,sum = 0;
    //  float average;
    //  printf("Input the 10 numbers : ");
    //  scanf("%d",&n);
    //  for(i = 1; i <= n; i++){
       
    //    if(n<=10){
    //      sum = sum + i;
    //    average = (float)sum/n;
    //    printf("%d ",i);
    //    }else{
    //     printf("Invalid Number.Please enter value 1-10");
        
    //    }
    //  }
    //  printf("\nThe sum of %d is = %d\n",n,sum);
    //  printf("average: %.2f",average);

    //  int i,n,sum = 0;
    //  float avg;
    //  printf("Input the 10 Numbers: \n");

    //  for(i = 1; i <= 10; i++){
      
    //   printf("Number-%d:",i);
    //   scanf("%d",&n);
    //   sum += n;
      

    //  }
    //  avg = sum/10.0;
    //  printf("The sum is upto 10 input: %d\nThe average is: %.2f\n",sum,avg);

    /*
    5. Write a program in C to display the cube of the number up to an integer.
     */

    //  int i,n,cube;
    //  printf("Please input your terms: ");
    //  scanf("%d",&n);
    //  for(i = 1; i <= n;i++){
       
    //    cube = i*i*i;
    //    printf("Number is: %d and cube of the %d is: %d\n",i,i,cube);

    //  }

     /*
      6. Write a program in C to display the multiplication table for a given integer.
     */
  
      // int n,i,multiplication;
      // printf("Input the number (Table to be calculated) : ");
      // scanf("%d",&n);
      
      // for(i=1;i<=10;i++){
      //   multiplication = n*i;
      //   printf("%d x %d = %d\n",n,i,multiplication);
      // }

      /*
      7.Write a program in C to display the multiplier table vertically from 1 to n.
     */
      
      // int i,j,n;
      // printf("Input upto the table number starting from 1 : ");
      // scanf("%d",&n);
      // printf("Multiplication table from 1 to %d\n",n);

      //  for(i=1;i<=10;i++){
      //     for(j=1;j<=n;j++){
        
      //   printf("%dx%d=%d ,",j,i,i*j);
      // }
      // printf("\n");
      //  }

       /*
      8. Write a C program to display the n terms of odd natural numbers and their sum.
     */

     
    //  int n,i,sum=0;
    //  printf("Input Number of terms: ");
    //  scanf("%d",&n);
    //  printf("The odd Number are: ");
    //  for(i=1;i<=n;i++){  
    //   printf("%d ",2*i-1);
    //   sum+=2*i-1;
    //  }
    //   printf("\nThe sum odd natural number are: %d\n",sum);

    /*
      9. Write a program in C to display a pattern like a right angle triangle using an asterisk.
     */

    // int i,j,rows;
    // printf("Input number of rows : ");
    // scanf("%d",&rows);

    // for(i=1;i<=rows;i++){
    //   for(j=1;j<=i;j++){
    //     printf("* ");
    //   }
    //   printf("\n");
    // }

    /*
     10. Write a C program to display a pattern like a right angle triangle with a number.
     */

    // int i,j,num;
    // printf("The pattern like right angle triangle : ");
    // scanf("%d",&num);

    // for(i=1;i<=num;i++){
    //   for(j=1;j<=i;j++){
    //     printf("%d ",j);
    //   }
    //     printf("\n");
    // }

     /*
    11. Write a program in C to make such a pattern like a right angle triangle with a number which will repeat a number in a row.
     */
     
  // int i,j,row_num;
  // printf("The pattern like rught angle triangle : ");
  //   scanf("%d",&row_num);
  //   for(i=1;i<=row_num;i++){
  //     for(j=1;j<=i;j++){
  //       printf("%d ",i);
  //     }
  //     printf("\n");
  //   }

    /*
    12. Write a program in C to make such a pattern like a right angle triangle with the number increased by 1.
     */
    //  int i,j,right_angle_number,k=1;
    //  printf("The pattern Like: ");
    //  scanf("%d",&right_angle_number);
    //  for(i=1;i<=right_angle_number;i++){
    //     for(j=1;j<=i;j++){
    //       printf("%d ",k++);
    //     }
    // printf("\n");
    //  }

    /*
     13. Write a program in C to make a pyramid pattern with numbers increased by 1.
     */

    
     int i,j,k,spc,rows,t=1; //Declare variables 'i' and 'j' for loop counters, 'spc' for spaces, 'rows' for user input, 'k' for loop counter, 't' for incrementing numbers,
     printf("Input number of rows: "); //print a msg to prompt user input.
     scanf("%d",&rows); //read the value of 'rows' from the user.
     spc = rows+4-1; //calculate the initial number of spaces.
     
     for(i=1;i<=rows;i++){   //start a loop to generate row
        for(k=spc;k>=1;k--){ //loop to print spaces before the numbers
          printf(" ");   
        }
        for(j=1;j<=i;j++){    // Loop to print numbers based on the current row.
          printf("%d ",t++);  // Print the value of 't' and increment it.
        }
        printf("\n");        // Move to the next line for the next row.
        spc--;                // Decrement the number of spaces for the next row
     }
     
      
     /*
     14. Write a C program to make such a pattern as a pyramid with an asterisk.
     */

    //  int i,j,spc,k,t,rows;

    //  printf("Input Number of rows: ");
    //  scanf("%d",&rows);

    //  spc = rows+3-1;
    //  for(i=1;i<=rows;i++){
    //     for(k=spc;k>=1;k--){
    //       printf(" ");
    //     }
    //     for(j=1;j<=i;j++){
    //       printf("* ",t++);
    //     }
    //     printf("\n");
    //     spc--;
    //  }

      /*
     15. Write a C program to calculate the factorial of a given number.
     */

      // int i,num,f=1;
      // printf("Input the factorial number is: ");
      // scanf("%d",&num);
      // for(i=num;i>=1;i--){
      //   printf("%d ",i);
      //   f = f * i;
      // }
      // printf("\nThe factorial of %d is: %d\n",num,f);
 
      /*
      16. Write a C program to display the sum of n terms of even natural numbers.
     */

      // int i,even_num,even_sum=0;
      // printf("Input Number of terms: ");
      // scanf("%d",&even_num);
      // printf("The Even Numbers are: ");
      // for(i=1;i<=even_num;i++){
      //    printf("%d ",2*i);
      //    even_sum += 2*i;
      // }
      // printf("\nThe Sum of even Natural Number upto %d terms: %d\n",even_num,even_sum);

        /*
      17. Write a C program to make such a pattern like a pyramid with a number which will repeat the number in the same row.
     */

    //  int i,j,k,spc,rows;
    //  printf("Enter your expected value: ");
    //  scanf("%d",&rows);
    //  spc = rows+4-1;
    //  for(i=1;i<=rows;i++){
    //   for(k=spc;k>=1;k--){
    //     printf(" ");
    //   }
    //   for(j=1;j<=i;j++){
    //     printf("%d ",i);
    //   }
    //   printf("\n");
    //   spc--;
    //  }

      /*
     18. Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........].the same row.
     */
    //   float x, sum, t, d;  // Declare variables to store input and intermediate values.
    // int i, n;  // Declare variables for loop control and input.

    // // Prompt the user to input the value of 'x'.
    // printf("Input the Value of x :");
    // scanf("%f", &x);  // Read the value of 'x' from the user.

    // // Prompt the user to input the number of terms.
    // printf("Input the number of terms : ");
    // scanf("%d", &n);  // Read the value of 'n' from the user.

    // sum = 1;  // Initialize 'sum' to 1, as the first term is always 1.
    // t = 1;    // Initialize 't' to 1 for the first term.

    // // Loop to calculate the sum of the series.
    // for (i = 1; i < n; i++)
    // {
    //     d = (2 * i) * (2 * i - 1);  // Calculate the denominator for the term.
    //     t = -t * x * x / d;        // Calculate the term value.
    //     sum = sum + t;             // Add the term to the sum.
    // }

    // // Print the final result along with the input values.
    // printf("\nThe sum = %f\nNumber of terms = %d\nValue of x = %f\n", sum, n, x);

    return 0;
}