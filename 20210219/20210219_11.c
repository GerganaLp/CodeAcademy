// Дефинирайте структура, в която има член указател към самата
//структура Използвайте тази структура, за да дефинирате две променливи,
//които се указват една друга.
#include <stdio.h>
struct Point{
    int x;
    int y;
    struct First *ptr; // ukazatel kym strukturata 
};
int main(void){
    
    struct Point tochka; //tova ne sa li obekti vsyshtnost?
    struct Point zapetaika;

    tochka.ptr = &zapetaika;
    zapetaika.ptr = &tochka;
   
}

