#include <stdio.h>

int main(void)

{
    int length;
    int width;
    printf("enter width:  \n");
    scanf("%d", &width);
    printf("enter length: \n" );
    scanf("%d", &length);
    int area = length*width;
    int perimeter = (length+width)*2;
    printf("area: %d\n", area);
     printf("perimeter: %d\n", perimeter);
}
