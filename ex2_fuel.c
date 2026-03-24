/*Name: Bujingo David Kabanda*/
/*Student Number: 25/U/BIE/01364/PE*/
#include <stdio.h>

int main() {
    double distance, fuel, efficiency;

    // Prompt user for input
    printf("Enter distance (km): ");
    scanf("%lf", &distance);

    printf("Enter fuel used (litres): ");
    scanf("%lf", &fuel);

    // Calculate fuel efficiency
    if (fuel != 0) {
        printf("-----Fuel efficiency------");
        efficiency = distance / fuel;
        printf("Fuel efficiency: %.2f km/l\n", efficiency);
    } else {
        printf("Fuel used cannot be zero.\n");
    }

    return 0;
}