#include <stdio.h>

int sasiaNrCift(int v[], int n) {

    if (n < 1) {
        return 0;
    }

    int cift = (v[n - 1] % 2 == 0) ? 1 : 0;

    return cift + sasiaNrCift(v, n - 1);
}

int main(void) {

    int n;

    printf("Vendos gjatesine e vektorit: ");
    scanf("%d", &n);

    int a[n];
    printf("Vendos elementet e vektorit:\n");
    for (int i = 0; i < n; i++) {
        printf("Elementi [%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Vektori qe keni vendosur eshte: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    int sasiaCifteve = sasiaNrCift(a, n);
    printf("Sasia e numrave cift ne vektor: %d\n", sasiaCifteve);

    return 0;
}
