#include <stdio.h>
int main() {
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c ", ch);
    }

    printf("\n"); // Move to the next line after printing all alphabets
    return 0;
}

