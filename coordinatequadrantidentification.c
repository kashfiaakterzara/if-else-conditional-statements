#include<stdio.h>
int main(){
int co1, co2;
printf("Enter X coordinate: ");
scanf("%d", &co1);
printf("Enter Y coordinate: ");
scanf("%d", &co2);

if(co1 == 0 && co2 == 0){
    printf("The coordinate point (%d, %d) lies at the origin", co1, co2);
}
else if(co1 > 0 && co2 > 0){
    printf("The coordinate point (%d, %d) lies in the First quadrant", co1, co2);
}
else if(co1 > 0 && co2 < 0){
    printf("The coordinate point (%d, %d) lies in the Fourth quadrant", co1, co2);
}
else if(co1 < 0 && co2 > 0){
    printf("The coordinate point (%d, %d) lies in the Second quadrant", co1, co2);
}
else{
    printf("The coordinate point (%d, %d) lies in the Third quadrant", co1, co2);
}


return 0;

}