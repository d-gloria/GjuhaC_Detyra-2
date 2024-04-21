#include <stdio.h>

//MENYRA ITERATIVE
/*
int faktoriali(int n) {
    int rezultati = 1;
    for (int i = 1; i <= n; i++) {
        rezultati *= i;
    }
    return rezultati;
}

int shumaFaktorialeveIterative(int n) {
    int shuma = 0;
    for (int i = 1; i <= n; i++) {
        shuma += faktoriali(i);
    }
    return shuma;
}
*/

//MENYRA REKRUSIVE
int faktoriali(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * faktoriali(n - 1);
}

int shumaFaktorialeveRekursive(int n) {
    if (n <= 0) {
        return 0;
    }
    return faktoriali(n) + shumaFaktorialeveRekursive(n - 1);
}

int main() {
    int n;
    printf("Vendos numrin n: ");
    scanf("%d", &n);

    //int shumaIterative = shumaFaktorialeveIterative(n);
    //printf("Shuma iterative e faktorialeve deri ne %d: %d\n", n, shumaIterative);

    int shumaRekursive = shumaFaktorialeveRekursive(n);
    printf("Shuma rekursive e faktorialeve deri ne %d : %d\n", n, shumaRekursive);

    return 0;
}
