//Задача 12. Напишете функция, която изчислява разстоянието между две
//точки в равнината. Нека функцията да приема два параметъра, които са
//структури ТPoint с два члена X и Y координати.
#include <stdio.h>
#include <string.h>
#include <math.h>
struct Tpoint{
  int x;
  int y;
  
};
int distance(struct Tpoint a, struct Tpoint b);
int main(void){
    
    struct Tpoint a = {2,3};
    struct Tpoint b = {4,5};
    printf("%d",distance(a,b));
    
    return 0;
}
int distance(struct Tpoint a, struct Tpoint b){
    //point1(x1, y1)
    //point2(x2,y2)
    // sqrt((pow(x2-x1))+(pow(y1-y2)) tova e formulata 
    int formula=((b.x-a.x)*(b.x-a.x))+((b.y-a.y)*(b.y-a.y));
    return sqrt(formula);
}
