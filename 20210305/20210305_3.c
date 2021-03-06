
 /*Задача 3. С увеличаване на надморската височина температурата намалява с
около 0,5ºC на всеки 100м. Нека приемем, че атмосферното налягане е нормално.
Ако се знае температурата (ХºC) на хижа Вихрен (1950 метра над морското
равнище), да се изчисли каква е температурата на връх Вихрен (2918 метра над
морското равнище). Ако се знае температурата (УºC) на връх Вихрен, да се изчисли
каква е температурата на хижа Вихрен.
Изход 1:
Ако атмосферното налягане е нормално и температурата на хижа Вихрен (1950м
н.м.р.) е ... ºC , то температурата на връх Вихрен (2918м н.м.р.) е ... ºC.
Изход 2:
Ако атмосферното налягане е нормално и температурата на връх Вихрен (2918м
н.м.р.) е ... ºC , то температурата на хижа Вихрен (1950м н.м.р.) е ... ºC
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float *tempHut;
    float *tempPeak;
    int choice=0;
    tempHut = (float*)malloc(sizeof(float));
    tempPeak = (float*)malloc(sizeof(float));
    printf("Temp of the peak press 1.\nTemp of the hut press 2:\n");
    scanf("%d", &choice);
    if(choice==1){
    printf("What is temperature at hut Vihren?\n");
    scanf("%f", tempHut);
    *tempPeak = *tempHut + (2918 - 1950) / 100 * 0.5;
    printf("Temperature at hut Vihren is %2.f, then temperature at peak Vihren is %2.f\n", *tempHut, *tempPeak);
    }
    else if(choice==2){
    printf("What is temperature at peak Vihren?\n");
    scanf("%f", tempPeak);
    *tempHut = *tempPeak - (2918 - 1950) / 100 * 0.5;
    printf("Temperature at peak Vihren is %2.f, then temperature at hut Vihren is %2.f\n", *tempPeak, *tempHut);
    }
    free(tempHut);
    free(tempPeak);
    return 0;
}
