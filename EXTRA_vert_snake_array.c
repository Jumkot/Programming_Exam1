#include <stdio.h>

void print_2d_array(int rows, int cols, int array[rows][cols]){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", array[i][j]); 
        printf("\n");  
    }
}

int main() {
    printf("Введите размер массива:\n");
    int rows = 0;
    int cols = 0;
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];

    if (cols < 1 || rows < 1) {    
        printf("Нельзя создать массив такой размерности.\n");
        return 0;
    } 

    int valToWrite = 0;                         

    for (int i = 0; i < cols; i++){
        if (i % 2 == 0) {                      
            for(int j = 0; j < rows; j++) {
                arr[j][i] = valToWrite;
                valToWrite++;
            }
        }
        else {
            for(int j = rows - 1; j >= 0; j--){
                arr[j][i] = valToWrite;
                valToWrite++;
            }
        }
    }
    
    print_2d_array(rows, cols, arr);
    return 0;
}