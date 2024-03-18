#include <stdio.h>

void inverter(char *string) {
    int tamanho;

    while (string[tamanho] != '\0') {
        tamanho++;
    }

    for (int i = 0; i < tamanho / 2; i++) {
        char temporario = string[i];
        string[i] = string[tamanho - i - 1];
        string[tamanho - i - 1] = temporario;
    }
}

int main() {
    char string[] = "Target";

    printf("String original: %s\n", string);

    inverter(string);

    printf("String invertida: %s\n", string);
    return 0;
}
