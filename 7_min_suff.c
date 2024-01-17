#include <stdio.h>
#include <string.h>

char* suff(char* str);

int main() {
    
    char str[] = "prog.exe";
    printf("%s\n", suff(str));
    
    return 0;
}

char* suff(char* add) {
    
    char * first = add;

    while (*add != '\0') {
        add++;
    }
    while (*add != '.') {
        if (add == first) {
            return "no suff";
            break;
        }
        add--;
    }

    return add;
}