/*Practice Name:
Author: Abu Abdullah Toha
ID: 222-16-670*/


#include<stdio.h>
int main (){
int choice;
float num1, num2;

printf("Please Enter the First Number > ");
scanf("%f",&num1);
printf("Please Enter the Second Number > ");
scanf("%f",&num2);
printf("What do you want to do with the inputted numbers? > \n1. Calculate the summation\n2. Calculate the subtraction\n3. Calculate the multiplication\n4. Calculate the division \nPlease enter your choice > ");
scanf("%d",&choice);
if(choice==1){
    printf("The summation of %.2f and %.2f is = %.2f",num1,num2,num1+num2);
}else if(choice==2){
    printf("The subtraction of %.2f and %.2f is = %.2f",num1,num2,num1-num2);
}else if(choice==3){
    printf("The multiplication of %.2f and %.2f is = %.2f",num1,num2,num1*num2);
}else if(choice==4){
    printf("The division of %.2f and %.2f is = %.2f",num1,num2,num1/num2);
}else{
    printf("Invalid Options! Please Try Again");
}
return 0;

}
