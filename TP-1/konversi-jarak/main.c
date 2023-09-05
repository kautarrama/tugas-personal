#include <stdio.h>

float kilometersToMeters(float value)
{
    return value * 1000;
}

float metersToCentimeters(float value)
{
    return value * 100;
}

float kilometersToCentimeters(float value)
{
    return value * 100000;
}

int main() {
    float kilometers, meters, centimeters;

    printf("============================================\n");
    printf("\tPROGRAM KONVERSI JARAK\n");
    printf("============================================\n");

    printf("Masukkan jarak(km): ");
    scanf("%f", &kilometers);

    meters = kilometersToMeters(kilometers);
    centimeters = metersToCentimeters(meters);

    printf("\n\tHasil konversi\n");
    printf("\t%.2f Kilometer(km)\n", kilometers);
    printf("Meter(m): %.2fm\n", meters);
    printf("Sentimeter(cm): %.2fcm\n\n", centimeters);

    printf("=========================================\n");
    printf("\tTERIMA KASIH\n");
    printf("=========================================\n");

    return 0;
}
