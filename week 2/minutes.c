#include <stdio.h>

int main(void)
{
    int minutes;
printf("movie minutes: \n");
scanf("%d", &minutes);

    int start_h;
    int start_m;
printf("Start time: ");
scanf("%d:%d" , &start_h, &start_m);

    int hours = minutes/60;
    int min = minutes %60;

    int end_h = start_h + hours;
    int end_m = start_m + min;


    printf("hours: %d and minutes %d \n", hours, min);
    printf("end time: %d:%d \n", end_h, end_m);


}

