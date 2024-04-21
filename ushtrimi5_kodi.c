#include <stdio.h>

int produktiNrCift(int n) {
    if (n == 0) {
        return 1;
    }

    return (2 * n) * produktiNrCift(n - 1);
}

int main() {
    int n;
    printf("Vendos numrin n: ");
    scanf("%d", &n);

    int produkti = produktiNrCift(n);

    printf("Produkti i n numrave te pare cift eshte: %d\n", produkti);

    return 0;
}