#include<stdio.h>
int main(){
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if(age > 18){
        printf("Eligible for casting vote");
    }
    else{
        printf("Not eligible for casting vote");
    }
    return 0;
}