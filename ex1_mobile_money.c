/* Name: Bujingo DavidKabanda*/
/* Student Number: 25/U/BIE/01364/PE */
#include <stdio.h>

int main() {
    double amount, fee_percentage, fee_amount, total_deducted;

    // Prompt the user for inputs
    printf("Enter amount to send: ");
    scanf("%lf", &amount);

    printf("Enter transaction fee (%%): ");
    scanf("%lf", &fee_percentage);

    // Calculate fee and total deduction
    fee_amount = (fee_percentage / 100.0) * amount;
    total_deducted = amount + fee_amount;

    // Display results
    printf("------TRANSACTION SUMMARY------");
    printf("Transaction fee: %.2f UGX\n", fee_amount);
    printf("Total deducted: %.2f UGX\n", total_deducted);

    return 0;
}