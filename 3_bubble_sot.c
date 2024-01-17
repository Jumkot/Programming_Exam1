#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j ,k, expance, count;
    _Bool flag;
    count = 0;
    printf("Введите количество элементов массива: ");
    scanf("%d", &n);
    int array[n];
    printf("Введите массив:\n");
    
    for (k = 0; k < n; k++){
        scanf("%d", &array[k]);
    }
    
    printf("Ваш массив:\n");
    for (k = 0; k <= (n - 1); k++){
        printf("%d ", array[k]);
    }
    
    for (i = n - 1; i >= 0; i--){
        flag = 1;
        for (j = 0; j < i; j++){
            if (array[j + 1] < array[j]){
                expance = array[j];
                array[j] = array[j + 1];
                array[j + 1] = expance;
                count += 1;
                flag = 0;
            }
        }
        if (flag == 1){
            break;
        }
    }

    printf("\nВаш массив после сортировки:\n");
    for (k = 0; k < n; k++){
        printf("%d ", array[k]);
    }
    printf("\nКоличество операций перестановки: %d\n", count);

    return 0;
}