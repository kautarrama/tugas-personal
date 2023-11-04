#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Fungsi untuk menghitung jumlah vokal dalam sebuah string
int countVowels(char *str) {
    int count = 0;
    while (*str) {
        char ch = tolower(*str);
        if (ch == 'a' || ch == 'i' || ch == 'u' || ch == 'e' || ch == 'o') {
            count++;
        }
        str++;
    }
    return count;
}

// Fungsi untuk menghitung jumlah karakter non-vokal dalam sebuah string
int countConsonants(char *str) {
    int count = 0;
    while (*str) {
        char ch = tolower(*str);
        if (isalpha(ch) && ch != 'a' && ch != 'i' && ch != 'u' && ch != 'e' && ch != 'o') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char input;
    char *bulan[12] = {"Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};

    printf("Masukkan huruf (A-Z): ");
    scanf(" %c", &input);

    // Cari bulan-bulan dengan awalan yang sesuai
    printf("Bulan-bulan dengan awalan '%c':\n", input);
    for (int i = 0; i < 12; i++) {
        if (tolower(bulan[i][0]) == tolower(input)) {
            printf("%s\n", bulan[i]);
        }
    }

    // Pilih bulan
    int selectedMonth;
    printf("Pilih nomor bulan yang diinginkan (1-12): ");
    scanf("%d", &selectedMonth);
    selectedMonth--; // Kurangi satu karena array dimulai dari 0

    if (selectedMonth >= 0 && selectedMonth < 12) {
        char *selectedBulan = bulan[selectedMonth];
        int numVowels = countVowels(selectedBulan);
        int numConsonants = countConsonants(selectedBulan);

        printf("Jumlah vokal dalam %s: %d\n", selectedBulan, numVowels);
        printf("Jumlah karakter non-vokal dalam %s: %d\n", selectedBulan, numConsonants);
    } else {
        printf("Nomor bulan tidak valid.\n");
    }

    return 0;
}
