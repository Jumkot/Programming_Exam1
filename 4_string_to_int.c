#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    char str[10];
    scanf("%s", str);

    int num, i, n;
    num = 0;
    n = strlen(str);
    for (i = n; i >= 1; --i) {
        if (str[i - 1] == '1') {
            num += pow(2, (n - i));
        }
    }

    printf("%d\n", num);

    return 0;
}