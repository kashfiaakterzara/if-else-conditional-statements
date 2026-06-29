
#include <stdio.h> 
  // Include the standard input/output header file. 
int main(void)
{
   int m,n;   // Declare two integer variables 'm' and 'n'.
   printf("Input the  value of m :");   // Prompt the user to input the value of 'm'.
   scanf("%d",&m);   // Read and store the user's input in 'm'.
   if(m!=0)   // Check if 'm' is not equal to 0.
   {
     if(m>0)
       n=1;   // If 'm' is greater than 0, set 'n' to 1.
     else
       n=-1;   // If 'm' is less than 0, set 'n' to -1.
   }
   else
     n=0;   // If 'm' is equal to 0, set 'n' to 0.
   printf("The value of m = %d \n",m);   // Print the value of 'm'.
   printf("The value of n = %d \n",n);   // Print the value of 'n'.
   
   return 0;

}

//MY SOLUTION
/*#include<stdio.h>
int main(){
int m, n;

printf("Enter the integer: ");
scanf("%d", &m);

if(m == 0){
    printf("n is 0");
}
else if(m>0){
    printf("n is 1");
}
else{
    printf("n is -1");
}









return 0;

}
*/