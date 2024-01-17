#include <stdio.h>
#include <string.h>
#include <ctype.h>

int if_digit(char* str);

int main (void){
    
    char str[10];
    scanf("%s", str);
    printf ("%d\n", if_digit(str));
    
    return 0;
}

int if_digit(char* str){
    int num, s, i, n, count;
    num = count = 0;
    s = 1;
    n = strlen(str);
    
    for (i = 0; i < n; i++) {
        if (isdigit(str[i])){
            num = str[i] - 48;
            s = s * num;
            count += 1;
        }
    }

    if (count == 0) {
        s = 0;
    }

    return s;
}