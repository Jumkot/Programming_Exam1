#include <stdio.h>
#include <ctype.h>
#define SIZE 10

char* wth_gl(char str[]);

int main(){
    char str[SIZE];
    scanf("%s", str);

    printf("%s\n", wth_gl(str));
    
    return 0;
}

char* wth_gl(char str[SIZE]) {
    
    char *start = str;
    char gl[12] = "AaEeIiOoUuYy";
    int i, j, k;

    for (i = 0; i < SIZE; i++){
        for (j = 0; j < 12; j++) {
            if (str[i] == gl[j]) {
                for (k = i; k < SIZE; k++){
                    str[k] = str[k + 1];
                }
                i--;
            }
        }
    }
    return start;
}