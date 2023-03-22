#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[100];
    int i, valid = 1;
    printf("Enter an expression: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; i < strlen(str); i++) {
        if (!isdigit(str[i]) && !isspace(str[i]) &&
            str[i] != '+' && str[i] != '-' &&
            str[i] != '*' && str[i] != '/' &&
            str[i] != '%' && str[i] != '(' &&
            str[i] != ')') {
            valid = 0;
            break;
        }
    }
    if (valid) {
        printf("Valid expression\n");
    }
    else {
        printf("Invalid expression\n");
    }
    return 0;
}

