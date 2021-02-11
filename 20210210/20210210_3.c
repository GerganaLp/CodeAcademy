/*Задача 3. Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво. */

 
#include <stdio.h> 

void isPalindrome(char* string) 
{ 
    char *ptr, *rev; 
  
    ptr = string; 
  
    while (*ptr != '\0') { 
        ++ptr; 
    } 
    --ptr; 
  
    for (rev = string; ptr >= rev;) { 
        if (*ptr == *rev) { 
            --ptr; 
            rev++; 
        } 
        else
            break; 
    } 
  
    if (rev > ptr) 
        printf("String is Palindrome"); 
    else
        printf("String is not a Palindrome"); 
} 

int main() 
{ 
    char str[1000] = "bqlhlqb"; 
  
    isPalindrome(str); 
  
    return 0; 
} 
