#include <stdio.h>
#include <stdlib.h>

int main() {
    float gallons, price, total_cost;

    //prompt user for input
    printf("Enter the number of gallons: ");
    scanf("%f", &gallons);
    
    printf("Enter the price per gallon: ");
    scanf("%f", &price);
    
    // calculate total cost
    total_cost = gallons * price;
    
    // display result
    printf("The total cost of filling up is: $%.2f\n", total_cost);
    
    return 0;
}

