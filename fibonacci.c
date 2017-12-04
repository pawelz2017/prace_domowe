#include <stdio.h>

void info() {
    printf("Program wyswietlajacy liczby ciagu Fibonacciego\n");
}


int main(void) {
    int n, i, czy_dalej = 1;;

    info();
/*	
	printf("Podaj liczbe poczatkowa (naturalna): \n");
	scanf("%i", &poczatkowa);
*/

    while (czy_dalej == 1) {

        printf("Ile cyfr ciagu zwrocic: \n");
        scanf("%i", &n);

        long long int ciag[n - 1];


        //Dodanie 2 poczatkowych cyfr do ciagu
        ciag[0] = 0;
        ciag[1] = 1;

        //Dodawanie kolejnych liczb fibo do tablicy

        for (i = 2; i < n; i++) {

            ciag[i] = ciag[i - 2] + ciag[i - 1];

        }

        //Wyswietlenie ciagu
        printf("Liczby Fibonacciego: \n");

        for (i = 0; i < n; i++) {

            if (ciag[i] < 0) {
                printf("BLAD - przekroczono zakres zmiennej dla %i liczby ciagu", i + 1);
                break;
            }
            printf("%lli, ", ciag[i]);

        }

        printf("\n");

        printf("Czy chcesz dalej liczyc? (1 - tak / 0 - nie: ");
        scanf("%i", &czy_dalej);
    }

}
