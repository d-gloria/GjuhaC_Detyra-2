#include <stdio.h>

#define MAX_RRJESHTA 20
#define MAX_KOLONA 20

int shumaElementeveMatrices(int matrica[MAX_RRJESHTA][MAX_KOLONA], int rr, int k, int rreshta, int kolona) {
    if (rr >= rreshta) {
        return 0;
    }

    if (k >= kolona) {
        return shumaElementeveMatrices(matrica, rr + 1, 0, rreshta, kolona);
    }

    int shumaSipasRreshtave = matrica[rr][k] + shumaElementeveMatrices(matrica, rr, k + 1, rreshta, kolona);

    return shumaSipasRreshtave;
}

int main() {
    int rreshta, kolona;

    printf("Vendos numrin e rreshtave te matrices (maksimalisht %d): ", MAX_RRJESHTA);
    scanf("%d", &rreshta);
    printf("Vendos numrin e kolonave te matrices (maksimalisht %d): ", MAX_KOLONA);
    scanf("%d", &kolona);

    int matrica[MAX_RRJESHTA][MAX_KOLONA];

    printf("Vendos elementet e matrices:\n");

    for (int i = 0; i < rreshta; i++) {
        for (int j = 0; j < kolona; j++) {
            printf("Elementi [%d][%d]: ", i, j);
            scanf("%d", &matrica[i][j]);
        }
    }

    int shuma = shumaElementeveMatrices(matrica, 0, 0, rreshta, kolona);

    printf("Shuma e elementeve te matrices eshte: %d\n", shuma);

    return 0;
}