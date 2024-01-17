#include <stdio.h>
#include <string.h>

int main() {
    int n, i, expance;
    
    printf("Введите количество элементов массива: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Введите массив:\n");
    for (i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }
    
    printf("Ваш массив:\n");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    
    for (i = 1; i < n; i++){
        int j = i;
		while (arr[j] < arr[j - 1]) {
			expance = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = expance;
			j--;
        }
    }

    printf("\nВаш массив после сортировки:\n");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}