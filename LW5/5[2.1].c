
/*Practice Name: Changing Value about the integer
Author: Abu Abdullah Toha
ID: 222-16-670*/

#include<stdio.h>
int main(){
int currentNumber;

printf("Please Enter The Current Number > ");
scanf("%d",&currentNumber);

if((currentNumber%2)!=0){
    Printf("The value of the number = %d",(currentNumber*3)+1);
}else{
    printf("The value is %d",currentNumber/2);
}
return 0;

}
