/*Write a program that will calculate the price for a quantity entered from the keyboard, given
that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
percent discount for quantities over 50.*/
#include <stdio.h>

int main() {
    int quantity;
    float unitPrice = 5.0;
    float totalPrice;

    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    if (quantity <= 0) {
        printf("Invalid quantity entered.\n");
        return 1;
    }

    totalPrice = quantity * unitPrice;

    if (quantity > 30 && quantity <= 50) {
        totalPrice -= totalPrice * 0.10; // 10% discount
    } else if (quantity > 50) {
        totalPrice -= totalPrice * 0.15; // 15% discount
    }

    printf("Total price: Rs %.2f\n", totalPrice);

    return 0;
}
