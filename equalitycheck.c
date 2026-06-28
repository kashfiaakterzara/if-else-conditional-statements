#include<stdio.h>
int main(){
    int number1, number2;

    printf("Enter first integer: ");
    scanf("%d", &number1);
    printf("Enter second integer: ");
    scanf("%d", &number2);

    if(number1 == number2){
        printf("Number 1 & Number 2 are equal\n");
    }
    else{
        printf("Number 1 & Number 2 are not equal\n");
    }


    return 0;
}