/*Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът да отпечатва
само входни редове, които са по дълги от 80 символа
*/
#include <stdio.h>
int main(void){
    char c; //simvol
    char text[100]; //vyvejdane na tekst
    int br=0; //broqch na teksta
    while((c=getchar())!=EOF){
        text[br]=c;
        br++;
        if(br>=80 && c=='\n'){
            printf("%s",text);
        }
        else {
            br=0;
        }
    }
    return 0;
} 