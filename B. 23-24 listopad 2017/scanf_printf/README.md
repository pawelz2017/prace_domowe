****
# FUNKCJE WEJŚCIA / WYJŚCIA w jezyku C
****
## Funkcja: printf()
W celu użycia funkcji ***printf()*** należy użyć biblioteki: #include <stdio.h>
Funkcja ***printf()*** wysyła sformatowane dane do standardowego strumienia wyjściowego (stdout)
***printf ( tekst_sterujcy , argument_1 , argument_2 ,  . . .  ) ;***
tekst sterujący → jest to stała łańcuchowa (w cudzysłowach) zawierająca: 
````  
    − zwykłe znaki (które są po prostu kopiowane na ekran) 
    − kody formatujące kolejnych argumentów:
    − %c pojedynczy znak 
    − %s łańcuch znaków
    − %d liczba dziesiętna ze znakiem 
    − %f liczba zmiennoprzecinkowa (notacja dziesiętna) 
    − %e liczba zmiennoprzecinkowa (notacja wykładnicza) 
    − %e liczba zmiennoprzecinkowa (krótszy z formatów %f %e) 
    − %u liczba dziesiętna bez znaku
    − %x liczba w kodzie szesnastkowym (bez znaku) 
    − %o liczba w kodzie ósemkowym (bez znaku) 
    − l przedrostek (long) stosowany przed:  d  u  x  o
````
  
##### przykład 1: 

    #include <stdio.h>
    int main()
    {
    printf("Hello to ja :-)");
    return 0;
    }
    
Na ekranie pojawi się napis:

    Hello to ja :-)


##### przykład 2:

    #include <stdio.h>
    int main()
    {
    int x = 10;
    long y = 20;
    double s;
    s = x + y;
    printf("%s obliczeń %d + %ld = %f\n" , "Wynik" , x , y ,s);
    return 0;
    }

Na ekranie pojawi się napis: 

    Wynik obliczen 10 + 20 = 30.000000

Dodatkowo aby określić ilość drukowanych cyfr do kodu formatującego można dodać kody długości: %Xd  %X.Xf np.     

    − %4d liczba dziesiętna na czterech pozycjach 
    − %10f liczba rzeczywista na 10 pozycjach  
    − %10.2f liczba rzeczywista na 10 pozycjach, 2 cyfry po przecinku  
    − %.3f liczba rzeczywista z dokladnoscią do 3 cyfr po przecinku  

# Funkcja: scanf() 
W celu użycia funkcji ***scanf()*** należy użyć biblioteki: #include <stdio.h> 
odczytuje dane ze standardowego strumienia wejściowego (stdin) w/g zadanego formatu i zapamiętuje je pod zadanymi adresami pamięci
***int scanf ( tekst_sterujący , adres_1 , adres_2 ,  . . .  ) ;*** 
tekst  sterujący →  jest  to  stała  łańcuchowa  (w  podwójnych  cudzysłowach) 
zawierająca polecenia jak traktować kolejne dane wczytywane ze strumienia 
(jakie typy zmiennych są pod adresami *adres_1, adres_2, ...* ) 
Kody formatujące (podobne jak dla *printf()* ): 
````
− %c pojedynczy znak 
− %s łańcuch znaków 
− %d liczba dziesiętna ze znakiem   
− %f lub %e liczba zmiennoprzecinkowa 
− %u liczba dziesiętna bez znaku 
− %x liczba w kodzie szesnastkowym (bez znaku)  
− %o liczba w kodzie ósemkowym (bez znaku) 
− l przedrostek stosowany przed:  d u x o  (long int) 
− l przedrostek stosowany przed:  f e  (double) 
− L przedrostek stosowany przed:  f e  (long double)  

− & operator adresowania (zwraca adres zmiennej podanej po operatorze) 
````
przykład: 

    #include <stdio.h> 
    int main()
    { 
    int x; 
    double y; 
    char znak; 
    printf("Podaj jedna liczbe calkowita: ");
    scanf("%d", &x);
	printf("Podaj jedną liczbe rzeczywista i jeden znak np.2a : ");
    scanf("%lf %c", &y, &znak);
    printf("liczba całkowita = %d\nLiczba rzeczywista = %lf\nznak to = %c\n", x,y,znak);
  	} 

Na ekranie pojawi się napis: 

    Podaj jedną liczbę calkowita:

podajemy np. 123 ↵
Następnie na ekranie pojawi się napis:

    Podaj jedną liczbę rzeczywista i jeden znak:

podajemy np. ***456 a ↵*** 
Po wprowadzeniu danych otrzymamy wynik na ekranie:  

    liczba całkowita = 123
    liczba rzeczywista = 456
    znak to = a


Zródła:  
[grzesu1973][1]  

[1]:https://github.com/grzesu1973/ "grzesu1973"  
