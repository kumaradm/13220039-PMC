#include <stdio.h>
#include <stdlib.h>

int main()
{
    int emberA = 0; /* kapasitas 3L*/
    int emberB = 0; /* kapasitas 5L*/
    int instruksi;
    do {
    printf("Hola!\n");
    printf("\nEmber A (kapasitas 3L) : %d L\n", emberA);
    printf("Ember B (kapasitas 5L): %d L\n", emberB);
    printf("\nInstruksi:\n");
    printf("1. Isi penuh ember A\n");
    printf("2. Isi penuh ember B\n");
    printf("3. Kosongkan ember A\n");
    printf("4. Kosongkan ember B\n");
    printf("5. Tuang isi ember A ke ember B\n");
    printf("6. Tuang isi ember B ke ember A\n\n");
    printf("Instruksi yang dipilih : ");
    scanf("%d", &instruksi);

    switch (instruksi)
    {
        case 1:
            if (emberA + 3 > 3) {
                printf("Ember A sudah penuh!\n");
            }
            else {
                emberA = emberA + 3;
            }
            break;
        case 2:
            if (emberB + 5 > 5) {
                printf("Ember B sudah penuh!\n");
            }
            else {
                emberB = emberB + 5;
            }
            break;
        case 3:
            emberA = 0;
            break;
        case 4:
            emberB = 0;
            break;
        case 5:
            if (emberA < (5 - emberB)) { /* kekurangan ember B lebih dari air di ember A */
                emberB = emberB + emberA;
                emberA = 0;
            }
            else { /* kekurangan ember B kurang dari air di ember A */
                emberA = emberA - (5 - emberB);
                emberB = 5;
            }
            break;
        case 6:
            if (emberB < (3 - emberA)) { /* kekurangan ember A */
                emberA = emberA + emberB;
                emberB = 0;
            }
            else {
                emberB = emberB - (3 - emberA);
                emberA = 3;
            }
            break;
        default:
            printf("Input tidak valid!\n");
    }
    printf("\n");
    }
    while(emberB != 4);

    printf("Ember A (kapasitas 3L) : %d L\n", emberA);
    printf("Ember B (kapasitas 5L): %d L\n", emberB);

    printf("\nProgram selesai!\n");
    printf("Gracias!");

    return 0;
}
