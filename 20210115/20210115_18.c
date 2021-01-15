#include <stdio.h>
int main(){
unsigned char kilos; // za kilogram 
unsigned char piece;// za broi
float total;
 float tomatoes=4.5;
 float totalTomatoes;
 float flour=1.8;
 float totalFlour;
 float milk=0.5;
 float totalMilk;
 float ice_cream=0.6;
 float total_ice;
 float candy=1.5;
 float totalCandy;
 float lollipop=0.15;
 float totalLoli;
printf("Hello, welcome to our shop. We have tomatoes, flour, milk, ice cream, candy and lollipop\n ");
printf("How many kilograms of tomatoes do you want? ");
scanf("%d",&kilos);
totalTomatoes=kilos*tomatoes;
printf("%2.f\n" ,totalTomatoes);

printf("How many kilograms of flour do you want? ");
scanf("%d",&kilos);
totalFlour=kilos*flour;
printf("%2.f\n" ,totalFlour);


printf("How much milk do you want? ");
scanf("%d",&piece);
totalMilk=piece*milk;
printf("%2.f\n" ,totalMilk);


printf("How many ice creams do you want? ");
scanf("%d",&piece);
total_ice=piece*ice_cream;
printf("%2.f\n" ,total_ice);


printf("How many candies do you want? ");
scanf("%d",&piece);
totalCandy=piece*candy;
printf("%2.f\n" ,totalCandy);


printf("How many lollipops of flour do you want? ");
scanf("%d",&piece);
totalLoli=piece*lollipop;
total=totalLoli+totalMilk+totalTomatoes+totalFlour+totalCandy;
printf("Your order pays: %2.f\n" ,total);

    return 0;
}