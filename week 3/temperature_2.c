#include <stdio.h>

int main(void)
{
float fahrenheit, celsius;
printf("enter temperature in celsius: \n");
scanf("%f" , &celsius);
fahrenheit = (celsius * 1.8) + 32 ;
printf("fahrenheit: %.2f \n", fahrenheit);
//-40f = -40c

if (celsius < 0 ){
    printf("❄️ Freezing weather \n");
}
else if (celsius < 10){
printf("🥶 Very cold weather\n");
}
else if(celsius < 20){
printf("🧥 Chilly weather\n");
}
else if(celsius < 30){
printf("🖼️ Normal weather\n");
}
else if(celsius < 40){
printf("☀️ Hot weather\n");
}
else if(celsius > 40){
printf("🔥 Very hot weather\n");
}
}

