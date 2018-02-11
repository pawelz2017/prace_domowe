#include <stdio.h>
#include <stdlib.h>

#define DOKLADNOSC 20

void info() {
    printf("\n\sin(x)n");

}

int main(int liczba_slow, char *tablica_slow[]) {
    info();
    double x;
    double wynik = 0.0;
    double silnia = 1.0;
    double potega_x = 1.0;

    if (liczba_slow == 2) {
        x = atof(tablica_slow[1]);
        for (int licznik = 1; licznik < DOKLADNOSC * 2; ++licznik) {
            potega_x *= x;
            silnia *= licznik;
            if (((licznik + 1) % 4) == 0)
                wynik -= potega_x / silnia;
            else if (((licznik - 1) % 4) == 0)
                wynik += potega_x / silnia;
        }
        printf("Wynik: %lf\n", wynik);
    } else {
        printf("Niepoprawna liczba parametrow!\n");
    }

    return 0;
}
