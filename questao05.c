#include <stdio.h>
#include <string.h>

int main() {
    char entrada[100];

    printf("Digite uma string: ");
    fgets(entrada, sizeof(entrada), stdin);

    size_t len = strlen(entrada);
    if (len > 0 && entrada[len - 1] == '\n') {
        entrada[len - 1] = '\0';
    }

    printf("String invertida: ");
    for (int i = strlen(entrada) - 1; i >= 0; i--) {
        putchar(entrada[i]);
    }
    putchar('\n');
    return 0;
}