#include <stdio.h>

int main()
{
    int arr[10];
    int  min, max, i;

    for (i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++) {
        if (i != 0){
            max = arr[i];
            if (min > max){
                max = min;
                min = arr[i];
            }
        }
        else if (i == 1){
            min = arr[i];
        }
        if (arr[i] < min){
            min = arr[i];
        }
        else if (arr[i] > max){
            max = arr[i];
        }
    }
    printf("Минимум: %d \nМаксимум: %d\n", min, max);
    printf("Сумма минимума и максимума: %d\n", min + max);
    
    return 0;
}