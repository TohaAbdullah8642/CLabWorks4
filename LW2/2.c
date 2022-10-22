/*Practice Name: Entering The Input of the values of X And Y And shows where which quarant inputted coordinates lies
Author: Abu Abdullah Toha
ID: 222-16-670*/

#include<stdio.h>
int main(){

float x,y;

printf("Enter the value of the X");
scanf("%f",&x);
printf("Enter The Value of the Y");
scanf("%f",&y);

if(x>0 && y>0){
    printf("Inputted coordinate (%.2f, %.2f) lies in 1st Quadrant",x,y);
}else if(x<0 && y>0){
    printf("Inputted coordinate (%.2f, %.2f) lies in 2nd Quadrant",x,y);
}else if(x<0 && y<0){
    printf("Inputted coordinate (%.2f, %.2f) lies in 3rd Quadrant",x,y);
}else if(x>0 && y<0){
    printf("Inputted coordinate (%.2f, %.2f) lies in 4th Quadrant",x,y);
}else if (x==0 && y==0){
    printf("Inputted coordinate (%.2f, %.2f) lies in Quadrant",x,y);
}else{
printf("The coordinate (%.2f, %.2f) lies in the X or Y axis",x,y);
}
    return 0;
}
