#include <stdio.h>

int vektorSimetrik(int vektori[], int fillimi, int fundi) {

    if (fillimi >= fundi) {
        return 1;
    }

    if (vektori[fillimi] != vektori[fundi]) {
        return 0;
    }

    return vektorSimetrik(vektori, fillimi + 1, fundi - 1);
}

int main() {
    int n;
    printf("Vendos gjatesine e vektorit: ");
    scanf("%d", &n);

    int vektor[n];
    printf("Vendos elementet e vektorit:\n");
    for (int i = 0; i < n; i++) {
        printf("Elementi [%d]: ", i);
        scanf("%d", &vektor[i]);
    }

    int rezultati = eshteSimetrik(vektor, 0, n - 1);

    if (rezultati == 1) {
        printf("Vektori eshte simetrik.\n");
    } else {
        printf("Vektori nuk eshte simetrik.\n");
    }

    return 0;
}
