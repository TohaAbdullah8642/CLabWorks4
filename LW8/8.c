/*Practice Name: Calculating about the number of the illiterate men and womens
Author: Abu Abdullah Toha
ID: 222-16-670*/

#include<stdio.h>
int main(){
    int popu=80000,popu_men,popu_women,popu_lit,popu_illit,lit_men,illit_men,lit_women,illit_women;

    popu_men=0.52*popu;
    popu_women=popu-popu_men;
    popu_lit=0.48*popu;
    lit_men=0.35*popu;
    lit_women=popu_lit-lit_men;
    illit_men=popu_men-lit_men;
    illit_women=popu_women-lit_women;

    printf("Total number of illiterate men = %d",illit_men);
    printf("\nTotal number of illiterate women = %d",illit_women);
    return 0;
}
