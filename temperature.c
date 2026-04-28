#include <stdio.h>

int main(void)
{
float fahrenheit, celsius;
printf("enter temperature in fahrenheit: \n");
scanf("%f" , &fahrenheit);
celsius = (fahrenheit - 32) / 1.8;
printf("celsius: %.2f \n", celsius);
//-40f = -40c

}
