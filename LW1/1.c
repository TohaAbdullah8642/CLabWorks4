/*Practice Name: Finding The Oldest, Youngest and Between Them or Middle aged
Author: Abu Abdullah Toha
ID: 222-16-670*/


#include<stdio.h>
int main () {
int f_age, m_age, u_age;

printf("Please Enter Your Father Age > ");
scanf("%d",&f_age);

printf("Please Enter Your Mother Age > ");
scanf("%d",&m_age);

printf("Please Enter Your Uncle Age > ");
scanf("%d",&u_age);

if(f_age>m_age && m_age>u_age){
    printf("Your Father is the Oldest\n Your Uncle Is Youngest \n Your Mother Is between The oldest and Youngest");
}else if(f_age>u_age && u_age>m_age){
    printf("Your Father is The Oldest\n Your Mother Is Youngest \n Your Uncle Is between The Oldest And Youngest");
}else if(m_age>f_age && f_age>u_age){
    printf("Your Mother is The Oldest\n Your Uncle Is Youngest \n Your Father Is between The Oldest And Youngest");
}else if(m_age>u_age && u_age>f_age){
    printf("Your Mother is The Oldest\n Your Father Is Youngest \n Your Uncle Is between The Oldest And Youngest");
}else if(u_age>f_age && f_age>m_age){
    printf("Your Uncle is The Oldest\n Your Mother Is Youngest \n Your Uncle Is between The Oldest And Youngest");
}else if(u_age>m_age && m_age>f_age){
    printf("Your Uncle is The Oldest\n Your father Is Youngest \n Your Mother Is between The Oldest And Youngest");
}else{
    printf("Invalid Input,Please Try again!");
}
    return 0;
}
