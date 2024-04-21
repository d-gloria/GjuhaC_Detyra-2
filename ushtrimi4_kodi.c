#include <stdio.h>

int shumaFibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return shumaFibonacci(n - 1) + shumaFibonacci(n - 2);
}

int main() {
    int n;
    printf("Vendos numrin n: ");
    scanf("%d", &n);

    int shuma = 0;

    for (int i = 0; i < n; i++) {
        shuma += shumaFibonacci(i);
    }

    printf("Shuma e n-kufizave te vargut te Fibonacci deri ne %d: %d\n", n, shuma);

    return 0;
}