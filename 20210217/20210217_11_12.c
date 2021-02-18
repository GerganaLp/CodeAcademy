/*Задача 11.
Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int i = 0;               //for executing the loops
    int length = 0;          //to input the size of password
    int randomizer = 0;

    //Seed the random-number generator with current time so that
    //the numbers will be different every time we run.

    srand((unsigned int)(time(NULL)));

    char numbers [] = "0123456789";                     //array of numbers
    char letter [] = "abcdefghijklmnoqprstuvwyzx";      //array of small alphabets
    char LETTER [] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";      //array of capital alphabets
    char symbols [] = "!@#$^&*?";                       //array of all the special symbols

    do
    {
       

        char password[100];                          //declaration of array to store the random password
        randomizer = rand() % 4;                        //to select the randomizer inside the loop
        for (i=0 ; i < length ; i++)
        {
           
            if(randomizer == 1)
            {
              
                password[i] = numbers[rand() % 10];
                randomizer;
                printf("%c", password[i]);
            }
            else if (randomizer == 2)
            {
                password[i] = symbols[rand() % 8];
                randomizer ;
                printf("%c", password[i]);
            }
            else if (randomizer == 3)
            {
                password[i] = LETTER[rand() % 26];
                randomizer ;
                printf("%c", password[i]);
            }
            else
            {
                password[i] = letter[rand() % 26];
                randomizer;
                printf("%c", password[i]);
            }
        }
    }while(length != -1);

    return 0;
}