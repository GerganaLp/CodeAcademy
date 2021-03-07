#include <stdio.h>
#include <stdlib.h>
float priceWeight(float weight);
float priceSize(float size);
void total(float *priceWeight, float *priceSize);
void better(double *w, double *s, int num);
int main()
{
    
    
    return 0;
}

float priceWeight(float weight){
    float result = 0;
    if((weight > 0) && (weight<= 20)){
        result = 0.46;
    }else if((weight >= 21) && (weight <= 50)){
        result = 0.69;
    }else if ((weight >= 51) && (weight <= 100)){
        result = 1.02;
    }else if( (weight >= 101) && (weight <= 200)){
        result = 1.75;
    }else if ((weight >= 201) && (weight <= 350)){
        result = 2.13;
    }else if ((weight >= 351) && (weight <= 500)){
        result = 2.44;
    }else if ((weight >= 501) && (weight <= 1000)){
        result = 3.20;
    }else if ((weight >= 1001) && (weight <= 2000)){
        result = 4.27;
    }
    else if ((weight >= 2001) && (weight <= 3000)){
        result = 5.03;
    }else{
        printf("Invalid kg\n");
        priceWeight(weight);
    }

    return result;
}
float priceSize(float size){
    float price = 0;
    if ((size > 0)&& (size < 10)){
        price = 0.01;
    }else if ((size >= 10)&& (size < 50)){
        price = 0.11;
    }else if ((size >= 50)&& (size < 100)){
        price = 0.22;
    }else if ((size >= 100)&& (size < 150)){
        price = 0.33;
    }else if ((size >= 150)&& (size < 250)){
        price = 0.56;
    }else if ((size >= 250)&& (size < 400)){
        price = 1.50;
    }else if ((size >= 400)&& (size < 500)){
        price = 3.11;
    }else if ((size >= 500)&& (size < 600)){
        price = 4.89;
    }else if (size >= 600){
        price = 5.79;
    }
    return price;
}
void better(double *w, double *s, int num){
    if (*s <= *w){
        if (num == 1){
            printf("Your shipment will cost %.2f leva.\n", *w);
        } else{
            printf("It is better to combine your shipments. In this case they will cost %.2f leva instead of %.2f leva.\n", *s, *w);
        }       
    }
    else {
        printf("It is better to send your shipments separately. In this case they will cost %.2f leva instead of %.2f leva.\n", *w, *s);
    }
}
