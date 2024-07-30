#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    printf("Current locale: %s\n", setlocale(LC_ALL, NULL));
    return 0;
}

