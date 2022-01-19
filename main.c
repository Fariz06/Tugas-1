#include <stdio.h>
#include <stdlib.h>

// Fariz Iftikhar Falakh / 13220029
// Membuat program mencari 4 liter dari ember 3 dan 5 liter.

int main()
{
    /* Kamus */
    int command;
    int gelas_a; // gelas 3 liter
    int gelas_b; // gelas 5 liter
    // Inisialisasi
    gelas_a = 0;
    gelas_b = 0;
    command = 0;

    /* Algoritma*/
    while (gelas_b != 4)
    {
    printf("Silakan pilih langkah-langkah berikut :\n"
        "1. Isi gelas a\n"
        "2. Isi gelas b\n"
        "3. Kosongkan gelas a\n"
        "4. Kosongkan gelas b\n"
        "5. Tuang isi gelas a ke gelas b\n"
        "6. Tuang isi gelas b ke gelas a\n");
    scanf("%d", &command);
    printf("Anda memilih : %d\n",command);
    if (command == 1)
        {
            gelas_a = 3;
            gelas_b = gelas_b;
        }
    else if (command == 2)
        {
            gelas_a = gelas_a;
            gelas_b = 5;
        }
    else if (command == 3)
        {
            gelas_a = 0;
            gelas_b = gelas_b;
        }
    else if (command == 4)
        {
            gelas_a = gelas_a;
            gelas_b = 0;
        }
    else if (command == 5)
        {
            if ((gelas_a + gelas_b - 5) > 0)
            {
                gelas_a = gelas_a + gelas_b - 5;
                gelas_b = 5;
            }
            else
            {
                gelas_b = gelas_a + gelas_b;
                gelas_a = 0;
            }
        }
    else if (command == 6)
        {
            if ((gelas_a + gelas_b - 3) > 0)
            {
                gelas_b = gelas_a + gelas_b - 3;
                gelas_a = 3;
            }
            else
            {
                gelas_a = gelas_a + gelas_b;
                gelas_b = 0;
            }
        }
    else
        {
            printf("Instruksi salah, harap masukkan angka 1-6\n");
            gelas_a = gelas_a;
            gelas_b = gelas_b;
        }
    printf("Isi gelas a = %d\n"
           "Isi gelas b = %d\n"
           ,gelas_a, gelas_b);
    }
    printf("Anda sudah mendapatkan pas 4 liter");
return 0;
}
