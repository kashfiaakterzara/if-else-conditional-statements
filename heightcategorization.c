#include<stdio.h>
int main(){
float height;

printf("Enter height(in cms): ");
scanf("%f", &height);
if(height<150.00){
    printf("The person is dwarf");
}

else if(height==150){
   printf("The person is of average height");

}

else if(height<=165){
printf("The person is tall");
 
}

else{
printf("Abnormal height");


}


  return 0;
}