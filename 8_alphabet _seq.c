#include <stdio.h>
#include <string.h>

int search(char arr[]);

int main(void) {
    char str[100];
    scanf("%s", str);
    printf("Самая длинная последовательность, расположенная в алфавитном порядке, имеет длину %d\n", search(str));

    return 0;
}

int search(char *arr) {
    char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
    int max[100] = {0};
    
    int symb, i, j, m;
    symb = m = i = 0;
    while (i < strlen(arr)) {
        for (j = 0; j < 26; j += 1){
            if (arr[i] == alpha[j]) { 
                symb += 1;
                i += 1;
            }
            else {
                if (symb != 0){
                    max[m] = symb;
                    m += 1;
                    symb = 0;
                    j = 0;
                }
            }
        }
    }

    int maX = 0;
    for (i = 0; i < 100; i++) {
        if (max[i] > maX) {
            maX = max[i];
        }
    }

    return maX;
}