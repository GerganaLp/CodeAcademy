#include <stdio.h>
int main(){
unsigned char kilos; // za kilogram 
unsigned char piece;// za broi
float total;
 float tomatoes=4.5;
 float flour=1.8;
 float milk=0.5;
 float ice_cream=0.6;
 float candy=1.5;
 float lollipop=0.15;
printf("Hello, welcome to our shop. We have tomatoes, flour, milk, ice cream, candy and lollipop\n ");
printf("How many kilograms of tomatoes do you want? ");
scanf("%d",&kilos);
total=kilos*tomatoes;
printf("%f\n" ,total);

printf("How many kilograms of flour do you want? ");
scanf("%d",&kilos);
total=kilos*flour;
printf("%f\n" ,total);


printf("How much milk do you want? ");
scanf("%d",&piece);
total=piece*milk;
printf("%f\n" ,total);


printf("How many ice creams do you want? ");
scanf("%d",&piece);
total=piece*ice_cream;
printf("%f\n" ,total);


printf("How many candies do you want? ");
scanf("%d",&piece);
total=piece*candy;
printf("%f\n" ,total);


printf("How many lollipops of flour do you want? ");
scanf("%d",&piece);
total=piece*lollipop;
printf("%f\n" ,total);

    return 0;
}