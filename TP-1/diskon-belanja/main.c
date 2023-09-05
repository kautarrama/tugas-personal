#include <stdio.h>
#include <ctype.h>

float discountAmount(float totalAmount, float discount) {
    return totalAmount * discount;
}

float totalDiscountShoping(float totalAmount, float discount) {
    return totalAmount - discountAmount(totalAmount, discount);
}

int main() {
    float amount;
    float totalAmount = 0;
    float discount = 0.00;
    char shopingConfirmation;
    int spendingMaximum = 4;
    int shopingTime = 1;
    int index = 0;

    printf("============================================\n");
    printf("\tPROGRAM MENGHITUNG NILAI BELANJAAN\n");
    printf("============================================\n");

    while(shopingTime <= spendingMaximum) {
        printf("Masukan total nilai belanjaan: Rp.");
        scanf("%f", &amount);
        totalAmount += amount;

        printf("\nTotal belanjaan anda saat ini dalam sebulan: Rp.%.2f\n", totalAmount);
        printf("=================================\n");

        if (shopingTime < spendingMaximum) {
            printf("Ingin belanja kembali ? (y/n): ");
            scanf(" %c", &shopingConfirmation);
        }

        if (tolower(shopingConfirmation) != 'y') break;

        if (shopingTime == spendingMaximum) {
            break;
        }
        shopingTime++;
        printf("\n");
    }

    if (shopingTime < 4) {
        if (totalAmount >= 200000 && totalAmount <= 500000) {
            discount = 0.10;
        } else if (totalAmount >= 500000 && totalAmount <= 1000000) {
            discount = 0.20;
        } else if (totalAmount > 1000000) {
            discount = 0.30;
        }
    } else {
        discount = 0.20;
    }

    printf("\n");
    printf("=============================\n");
    printf("Total transaksi pembelian dalam sebulan: %dx\n", shopingTime);
    printf("Total belanja dalam sebulan: Rp.%.2f\n", totalAmount);
    printf("Diskon dari total belanjaan: Rp.%.2f\n", discountAmount(totalAmount, discount));
    printf("Total Belanja setelah dikurang diskon: Rp.%.2f\n\n", totalDiscountShoping(totalAmount, discount));
    printf("=========================================\n");
    printf("\tTERIMA KASIH\n");
    printf("=========================================\n");

    return 0;
}
