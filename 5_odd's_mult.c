#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

    int n;
    printf("Введите длину массива:\n");
    scanf("%d", &n);
    printf("\n");

    int k, arr[n];
    for (k = 0; k < n; k++){
        scanf("%d", &arr[k]);
    }

    int i, s;
    s = 1;

    for (i = 0; i < n; i++) {
        if ((arr[i] % 2) == 1) {
            s = s * arr[i];
        }
    }

    printf("Произведение нечётных чисел в массиве равно %d\n", s);

    return 0;
}