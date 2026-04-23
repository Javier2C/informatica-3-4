#include <stdio.h>

int main(void)
{
    char name[50];
    printf("Enter your name: ");
    //i put the scanf and the %s to make the screen ask you for your name and put a lot of characters
scanf("%s", &name);
    printf("Hello %s! \n",name);

    char color[50];
    printf("enter your favorite color: ");
    scanf("%s", &color);
    printf("%s sucks! \n",color );
}
