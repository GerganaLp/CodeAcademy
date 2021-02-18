/*Задача 5.
Намерете стойностите в интервала 1-5, включително, в двумерен масив
[5] [5] пълен със случайни числа в интервала 0-10, включително.
Използвайте функция, която да пълни числата със случайни. */
int random(){
    int random;
    int lower=0;
    int upper=10;
    random=(rand() % upper)+lower;
    return random;
}
void randomInsert(int array[5][5]){
    int a,b;
    for(a=0; a<5; a++){
        for(b=0; b<5; b++){
            int random();
            array[a][b]=random();
            printf("\n");
        }
    }
}
void find(int array[5][5]){
    int a,b;
    for(a=0; a<5; a++){
        for(b=0; b<5; b++){
           if(array[a][b]>= 1&& array[a][b]<=5){
               printf("The value from 1-5 is araay [%d][%d] - %d \n",a,b,array[a][b]);
           }
        }
    }
}
int main(void){
    int array[5][5];
    srand((unsigned) time(0));
    randomInsert(array);
    find(array);
    return 0;

}