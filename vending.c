#include <stdio.h>
int main(void){
printf("Vending Machine Stock \n");
printf("---------------------- \n");

//variables for gorditas
float price1 = 20.50; //aqui nos enseñan como poner los precios a las cosas, como seleccionarlos y lo que cuestan
int quantity1 = 50;
char select1 = 'N';

//variables for skittles
float price2 = 25.99;
int quantity2 = 10;
char select2 = 'S';

//variables for Pickles
float price3 = 14.99;
int quantity3 = 6;
char select3 = 'P';

//now to start printing it
printf("item name: Gorditas of Momma \n");
printf("Price: = %.2f \n", price1);
printf("Quantity available: = %d \n", quantity1);
printf("Selection code: = %c \n", select1);

printf("\n");

printf("item name: Skittles \n");
printf("Price: = %.2f \n", price2);
printf("Quantity available: = %d \n", quantity2);
printf("Selection code: = %c \n", select2);

printf("\n");

printf("item name: Pickles \n");
printf("Price: = %.2f \n", price3);
printf("Quantity available: = %d \n", quantity3);
printf("Selection code: = %c\n", select3);

}
