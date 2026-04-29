#include <stdio.h>

int main(void)
{
char item[50];
float price;
int quantity;
printf("Item name: \n ");
scanf("%s", &item);
printf("Price: \n ");
scanf("%f", &price);
printf("quantity: \n ");
scanf("%d", &quantity);
float total = quantity*price;
printf("Item name: %s \n", item);
//probablemente necesite .2f
printf("Price: %f \n", price);
printf("Quantity: %d \n", quantity);
printf("\n" );
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
printf("La Pechuga De Cesar Super \n");
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
printf("\n");
printf("Item    Price   Quantity \n");
printf("%s      %.2f      %d \n",item,price,quantity);
printf("-------------------------- \n");
printf("Total: %.2f \n", total);
printf("-------------------------- \n");
printf("Come back again!! \n");


}
