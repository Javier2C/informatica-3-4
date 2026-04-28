#include <stdio.h>

int main(void)
{
    float minutes, hours;
    printf("movie minutes: \n");
    scanf("%f", &minutes);
    hours = minutes/60;
    printf("hours: %.2f \n", hours);

//making the times when you are going to enter and exit
    float starting_time, ending_time;
    printf("starting_time: \n");
    scanf("%f", &starting_time);
    ending_time = starting_time + hours;
    printf("ending_time: %.2f \n", ending_time);



}

