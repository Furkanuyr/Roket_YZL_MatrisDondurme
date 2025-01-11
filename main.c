#include <stdio.h>
#include <stdlib.h>

void matrisgirin(int n, int matris[n][n]) {
    if (n <= 0) {
        printf("0 veya 0'dan kucuk bir sayi giremezsiniz.\n");
        exit(1); 
    } else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("Matrisin %d. satirin %d. sutununu giriniz: ", i + 1, j + 1);
                scanf("%d", &matris[i][j]);
            }
        }
    }
}

void islem_seciniz(int n, int matris[n][n], int islem) {
    if (islem != 1 && islem != -1) {
        printf("Gecersiz islem girdiniz.\n");
        exit(1);
    }

    if (islem == -1) {
      
        int temp[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                temp[i][j] = matris[j][n - 1 - i];
            }
        }

       
        printf("\nMatris sola donduruldu:\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", temp[i][j]);
            }
            printf("\n");
        }
    } else if (islem == 1) {
       
        int temp2[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                temp2[i][j] = matris[n - 1 - j][i];
            }
        }

       
        printf("\nMatris saga donduruldu:\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", temp2[i][j]);
            }
            printf("\n");
        }
    }
}

int main() {
    int n;
    printf("Gireceginiz Matris satir ve sutun sayisini giriniz: ");
    scanf("%d", &n);

    int matris[n][n];
    matrisgirin(n, matris);

    int islem;
    printf("\nMatrisinizi dondurmek icin islem seciniz (1: Saga, -1: Sola): ");
    scanf("%d", &islem);

    islem_seciniz(n, matris, islem);

    return 0;
}
