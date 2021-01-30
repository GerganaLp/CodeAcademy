// Напишете програма на С, която чрез функция да обръща десетични числа в двоични
 #include<stdio.h>
 int convertToBinary(int n);
 int main()
 {
     int num, binary;

     printf("Enter Decimal Number: ");
     scanf("%d",&num);

     binary = convertToBinary(num);

     printf("Binary Value= %d\n",binary);

     return 0;
 }

 int convertToBinary(int n)
 {
     int rem, bin=0, i=1;

     while(n!=0)
     {
         rem= n%2;
         bin += (rem*i);
         n /= 2; 
         i *= 10;
     }

     return bin;
 }