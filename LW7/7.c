/*Practice Name: Programming about BMI Calculator
Author: Abu Abdullah Toha
ID: 222-16-670*/

#include<stdio.h>
int main(){
float height, weight, bmi;

printf("Please enter your weight(kg) > ");
scanf("%f",&weight);
printf("Please enter your height(meter) > ");
scanf("%f",&height);

bmi=weight/(height*height);
if(bmi<18.5){
    printf("your BMI is %.1f Wright status: Underweight",bmi);
}else if(bmi>=18.5 && bmi<=24.9){
    printf("your BMI is %.1f Wright status: Normal",bmi);
}else if(bmi>=25 && bmi<=29.9){
    printf("your BMI is %.1f Wright status: Overweight",bmi);
}else{
    printf("your BMI is %.1f Wright status: Obese",bmi);
}
return 0;
}
