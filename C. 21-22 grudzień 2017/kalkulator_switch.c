#include <stdio.h>

double mnoz(double a, double b) {
    printf("Wynik mnozenia: %lf\n", a * b);
    return 0;
}

double dziel(double a, double b) {
    printf("Wynik dzielenia: %lf\n", a / b);
    return 0;
}

double dodaj(double a, double b) {
    printf("Wynik dodawania: %lf\n", a + b);
    return 0;
}

double odejmowanie(double a, double b) {
    printf("Wynik odejmowania: %lf\n", a - b);
    return 0;
}

double licz(double a, double b, char wybor) {

    /*Wybor na podstawie IF
    if(wybor == '+') dodaj(a,b);
    else	if(wybor == '-') odejmowanie(a,b);
    else	if(wybor == '*') mnoz(a,b);
    else	if(wybor == '/') dziel(a,b);
    else	printf("Dzialanie nie obslugiwane\n");
    */

    //Wybor na podstawie switch
    switch (wybor) {
        case '+':
            dodaj(a, b);
            break;
        case '-':
            odejmowanie(a, b);
            break;
        case '*':
            mnoz(a, b);
            break;
        case '/':
            dziel(a, b);
            break;

        default:
            printf("Bledny wybor\n");
            break;

    }

    return 0;


}

int main() {

    double a, b;
    char wybor;
    int czy_dalej = 1;

    while (czy_dalej == 1) {


        printf("Podaj pierwsza liczbe\n");
        scanf("%lf", &a);    /*Odczytaj z konsoli i zapisz pod wybor*/

        printf("Podaj symbol dzialania matematycznego (+, -, *, /)\n");
        scanf(" %c", &wybor);    /*Odczytaj z konsoli i zapisz pod wybor*/

        printf("Podaj druga liczbe\n");
        scanf("%lf", &b);    /*Odczytaj z konsoli i zapisz pod wybor*/

        licz(a, b, wybor);


        printf("Czy chcesz dalej liczyc? (1 - tak / 0 - nie: ");
        scanf("%i", &czy_dalej);
    }

    return 0;
}
