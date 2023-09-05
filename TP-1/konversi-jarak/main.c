#include <stdio.h>

float kilometersToMeters(float value)
{
    return value * 1000;
}

float metersToCentimeters(float value)
{
    return value * 100;
}

int main() {
    float kilometers, meters, centimeters;

    printf("=================================\n");
    printf("PROGRAM KONVERSI JARAK\n");
    printf("=================================\n");

    printf("Masukkan jarak(km): ");
    scanf("%f", &kilometers);

    meters = kilometersToMeters(kilometers);
    centimeters = metersToCentimeters(meters);

    printf("\nHasil konversi:\n");
    printf("Jarak dalam meter: %.2f m\n", meters);
    printf("Jarak dalam sentimeter: %.2f cm\n", centimeters);

    return 0;
}
