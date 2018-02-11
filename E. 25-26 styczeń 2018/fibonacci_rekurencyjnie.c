#include <stdio.h>

void info() {
    printf("Program wyswietlajacy liczby ciagu Fibonacciego - rekurencyjnie\n");
}


int fibonacci(int n) {
    if (n < 3) return 1;

    return fibonacci(n - 2) + fibonacci(n - 1);
}

int main() {

    int n;


    printf("Podaj numer liczby z ciagu: ");
    scanf("%i", &n);


    printf("Wartosc wyrazu ciagu wynosi: %i\n", fibonacci(n));


    return 0;
}
