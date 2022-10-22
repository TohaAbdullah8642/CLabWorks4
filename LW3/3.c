/*Practice Name: Convert Temprature from degree Celsius to Fahrenheit and Fahrenheit to Celsius
Author: Abu Abdullah Toha
ID: 222-16-670*/

#include<stdio.h>
int main(){
    int choices;
    float f,c;

printf("Please Select the options > \n1. Celsius To Fahrenheit\n2. Fahrenheit to Celsius\n");
scanf("%d",&choices);

if(choices==1){
    printf("Please Enter the Temperature of Celsius > ");
    scanf("%f",&c);
    printf("%.2f Celsius is %.2f Fahrenheit",c,(c*1.8)+32);
    }else if(choices==2){
    printf("Please Enter the Temperature of Fahrenheit > ");
    scanf("%f",&f);
    printf("%.2f Fahrenheit is %.2f Celsius",f,(f-32)*0.555555556);
    }else{
        printf("Invalid Options, Try Again!");
    }
return 0;
}
