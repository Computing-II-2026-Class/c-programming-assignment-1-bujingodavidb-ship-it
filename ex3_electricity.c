/* Name: Bujingo DavidKabanda*/
/* Student Number: 25/U/BIE/01364/PE */

#include <stdio.h>

int main() {
    double units, costPerUnit, totalBill;

    // Prompt user for input
    printf("Enter units consumed: ");
    scanf("%lf", &units);

    printf("Enter cost per unit: ");
    scanf("%lf", &costPerUnit);

    // Calculate total bill
    totalBill = units * costPerUnit;

    // Display result
    printf("Total bill: %.2f UGX\n", totalBill);

    return 0;
}
