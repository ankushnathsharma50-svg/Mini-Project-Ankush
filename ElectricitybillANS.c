#include <stdio.h>

int main() {
    char name[50];
    int customerID, units;
    float bill;

    // Input customer details
    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    // Input units consumed
    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    // Calculate bill based on slabs
    if (units <= 100) {
        bill = units * 5.0;
    } 
    else if (units <= 200) {
        bill = 100 * 5.0 + (units - 100) * 7.0;
    } 
    else {
        bill = 100 * 5.0 + 100 * 7.0 + (units - 200) * 10.0;
    }

    // Print the bill
    printf("\n----- Electricity Bill -----\n");
    printf("Customer Name: %s\n", name);
    printf("Customer ID: %d\n", customerID);
    printf("Units Consumed: %d\n", units);
    printf("Total Bill Amount: Rs. %.2f\n", bill);
    printf("----------------------------\n");

    return 0;
}
/*Enter Customer Name: AnkushNathSharma
Enter Customer ID: 11809
Enter number of units consumed: 750

----- Electricity Bill -----
Customer Name: AnkushNathSharma
Customer ID: 11809
Units Consumed: 750
Total Bill Amount: Rs. 6700.00
----------------------------*/