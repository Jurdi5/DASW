#include <stdio.h>

int main() {
    char c;
    while (1) {
        c = getchar();
        if (c == '$') {
            break;  
        }
    }
    return 0;
}