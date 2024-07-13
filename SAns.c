#include <stdio.h>
#include <math.h>

int main() {
    double number;
    int ceiling, floor;

    // Input the number
    printf("Enter a floating-point number: ");
    scanf("%lf", &number);

    // Find floor value
    if (number >= 0) {
        floor = (int)number;
    } else {
        floor = (int)(number - 1);
    }

    // Find ceiling value
    if (number == (int)number) {
        ceiling = (int)number;
    } else {
        ceiling = (int)(number + 1);
    }

    // Output the results
    printf("Number: %.2f\n", number);
    printf("Floor value: %d\n", floor);
    printf("Ceiling value: %d\n", ceiling);

    return 0;
}
 