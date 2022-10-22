/*Practice Name: Calculate the leap year
Author: Abu Abdullah Toha
ID: 222-16-670*/

#include<stdio.h>
int main(){
int year;

printf("Please enter the year > ");
scanf("%d",&year);

if((year%4==0 && year%100!=0) || year%400==0){
    printf("%d is a leap year", year);
}else{
    printf("%d is not a leap year", year);
}

return 0;
}
