#include <stdio.h>
#include <stdlib.h>

void insertionSort(int v[200], int n)
{
    int i, j, x;
    for (i=1; i < n; i++) {
        x = v[i];
        j = i - 1;
        while (j >= 0 && v[j] > x) {
            v[j+1] = v[j];
            j--;
        }
        v [j+1] = x;
    }
}
int main()
{
    int v[200], n, i;
    printf("Entre tamanho desejado do vetor: ");
    scanf("%d", &n);
    printf("Entre com os %d elementos do vetor:\n", n);
    for (i = 0; i< n; i++) {
        scanf("%d", &v[i]);
    }
    insertionSort(v, n);
    printf("\nVetor ordenado:\n");
    for(i = 0; i < n; i++) {
        printf("%d\t", v[i]);
    }
    printf("\n");
    return 0;
}
