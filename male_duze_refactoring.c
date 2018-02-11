#include <stdio.h>
#include <ctype.h>

#define tekst 33
int m;  // Zmienna globalna przechowujaca male litery
int d;  // Zmienna globalna przechowujaca duze litery
const char tab[tekst] = "AlA ma kOta\n";

void info(void) {
    printf("\nProgram liczacy litery\n");
}

void wyswietl_tablice(void) {
    printf("%s", tab);
}

void male() {
    for (int i = 0; i < tekst; ++i) {
        if (islower(tab[i])) {
            m += 1;
        }
    }
    printf("%i malych liter\n", m);
}

void duze() {
    for (int i = 0; i < tekst; ++i) {
        if (isupper (tab[i])) {
            d += 1;
        }
    }
    printf("%i duzych liter\n", d);
}

int main() {
    info();
    wyswietl_tablice();
    printf("\nTekst zawiera:\n");
    male();
    duze();
    return 0;
}
