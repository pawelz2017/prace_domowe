System liczbowy
===================


System liczbowy – zbiór reguł jednolitego zapisu i nazewnictwa liczb.
----------------------------------------------------------------------

>Do zapisywania liczb używa się skończonego zbioru znaków, zwanych cyframi, które można łączyć w dowolnie długie ciągi, otrzymując nieskończoną liczbę kombinacji.

### System binarny
### Historia

>Używał go już John Napier w XVI wieku, przy czym 0 i 1 zapisywał jako a i b[1]. Ojcem nowoczesnego systemu binarnego nazywany jest Gottfried Wilhelm Leibniz[2], autor opublikowanego w 1703 roku artykułu Explication de l'Arithmétique Binaire.

Wykorzystanie
--------------

> Powszechnie używany w elektronice cyfrowej, gdzie minimalizacja liczby  stanów (do dwóch) pozwala na prostą implementację sprzętową odpowiadającą zazwyczaj stanom wyłączony i włączony oraz zminimalizowanie przekłamań danych[2]. Co za tym idzie, przyjął się też w informatyce.
Jak w każdym pozycyjnym systemie liczbowym, liczby zapisuje się tu jako ciągi cyfr, z których każda jest mnożną kolejnej potęgi podstawy systemu.

>
> Np. liczba zapisana w dziesiętnym systemie liczbowym jako 10, w systemie dwójkowym przybiera postać 1010, gdyż:

+ 1*2^3 + 0*2^ + 1*2^1 + 0*2^0 = 8 + 2 = 10

>
w systemie          |w systemie
dziesiętnym	        |dwójkowym
1	                |1
2	                |10
3	                |11
4	                |100
5	                |101
6	                |110
7	                |111
8	                |1000
9	                |1001
10	                |1010


System ósemkowy
================

> Ósemkowy system liczbowy – pozycyjny system liczbowy o podstawie 8. System ósemkowy jest czasem nazywany oktalnym od słowa octal. Do zapisu liczb używa się w nim ośmiu cyfr, od 0 do 7.

> Jak w każdym pozycyjnym systemie liczbowym, liczby zapisuje się tu jako ciągi cyfr, z których każda jest mnożnikiem kolejnej potęgi liczby będącej podstawą systemu, np. liczba zapisana w dziesiętnym systemie liczbowym jako 100, w ósemkowym przybiera postać 144, gdyż:

>1×82 + 4×81 + 4×80 = 64 + 32 + 4 = 100.

> W matematyce liczby w systemach niedziesiętnych oznacza się czasami indeksem dolnym zapisanym w systemie dziesiętnym, a oznaczającym podstawę systemu, np. 1448 = 10010.

> Przykład zamiany liczby z systemu dziesiętnego na system ósemkowy:
100/8 = 12 i 4 reszty = 4
12/8 = 1 i 4 reszty = 4
1/8 = 0 i 1 reszty = 1
Teraz czytamy od dołu: 144 w systemie oktalnym to 100 w systemie dziesiętnym.

Zastosowanie w informatyce.
===========================
System ósemkowy
----------------

>System ósemkowy jest w niektórych przypadkach stosowany w informatyce, przykładowo w systemie Linux polecenie chmod ustawiające prawa dostępu do pliku może przyjąć jako argument oktalną reprezentację żądanych praw dostępu (np: chmod u=rwx g=rx o=r plik odpowiada zapisowi chmod 754 plik). W językach programowania C/C++/Java/Perl/PHP liczby oktalne poprzedza się pojedynczym zerem (np. 0212).

System szesnastkowy
------------------
> Szesnastkowy system liczbowy znany również pod nazwą system heksadecymalny – pozycyjny system liczbowy, w którym podstawą jest liczba 16. Do zapisu liczb w tym systemie potrzebne jest szesnaście znaków (cyfr szesnastkowych). W najpowszechniejszym standardzie poza cyframi dziesiętnymi od 0 do 9 używa się pierwszych sześciu liter alfabetu łacińskiego: A, B, C, D, E, F (wielkich lub małych). Cyfry 0-9 mają te same wartości co w systemie dziesiętnym, natomiast litery odpowiadają następującym wartościom: 
> A = 10, B = 11, C = 12, D = 13, E = 14 oraz F = 15.

>W kalkulatorach naukowych o siedmiosegmentowych wyświetlaczach LCD stosuje się następujące oznaczenia kolejnych cyfr szesnastkowych: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, b, C, d, E, F (b i d, zamiast B i D dla rozróżnienia wyświetlania, które wyglądają jak 8 i 0).

> Istnieją również projekty ujednolicenia zapisu i wprowadzenia zupełnie nowych cyfr, przeznaczonych dla tego systemu.

>Jak w każdym pozycyjnym systemie liczbowym, liczby zapisuje się tu jako ciągi znaków, z których każdy jest mnożnikiem kolejnej potęgi liczby stanowiącej podstawę systemu. Np. liczba zapisana w dziesiętnym systemie liczbowym jako 1000, w systemie szesnastkowym przybiera postać 3E8, gdyż:

+ 3x16^2 +14 x 16^1 + 8 x 16^0=768+224+8=1000

Systemy binarne, ósemkowe oraz szesnastkowe w C
===========================
>Standard ANSI C nie obsługuje natywnie systemu binarnego, ósemkowego oraz szesnastkowego.
>Niektóre kompilatory jak np. AVR-GCC pozwala na ich obsługę poprzez wykorzystanie składni specyficznej dla tego konkretnego kompilatora.


KONWERSJA LICZB Z RÓŻNYCH SYSTEMÓW LICZBOWYCH
===========================================
Konwersja liczb z systemu 10 na 2.
---------------------------------------------
##### 1 metoda(dzielenie) liczbe zapisaną w systemie dziesiętnym dzielimy przez 2 jeśli wynik jest bez reszty piszemy 0 jeśli z resztą 1 tak do końca

| liczba dziesiętna |wynik dzielenia przez 2 |reszta 0 V 1|
| ------ | ------ |  ------ |
|251 |125|1|
| 125|62 |1|
| 62 |31 |0|
| 31 |15 |1|
|15  | 7 |1|
| 7  | 3 |1|
| 3  | 1 |1|
| 1  | 0 |1|

Wynik odczytujemy od dołu do góry 11111011

251(<sub>10</sub>)=11111011(<sub>2</sub>)

##### 2 metoda (odejmowanie) to wykorzystanie tabelki z kolejnymi wagami bitów. 
Polega na tym, że znajdujemy w górnej pozycji wagę bitu o największej wartości która mieści się w szukanej liczbie dziesiętnej i odejmuje je od siebie:

    251 - 128 = 123

szukamy kolejnej potegi liczby  o największej wartości która mieści się w 123 i odejmujemy:
    
    123 - 64 = 59

szukamy kolejnej potegi liczby  o największej wartości która mieści się w 59 i odejmujemy:
    
    59 - 32 = 27

szukamy kolejnej potegi liczby  o największej wartości która mieści się w 32 i odejmujemy:
    
    27 - 16 = 11

szukamy kolejnej potegi liczby  o największej wartości która mieści się w 11 i odejmujemy:
    
    11 - 8 = 3

szukamy kolejnej potegi liczby  o największej wartości która mieści się w 3 i odejmujemy:
    
    3 - 2 = 1

szukamy kolejnej potegi liczby  o największej wartości która mieści się w 1 i odejmujemy:
    
     1 - 1 = 0

Otrzymujwynik zero koniec operacji. Teraz w tabelce wpisujemy 1 po tymi potęgami których używaliśmy do odejmowania, pozostałe pozycje wpisujemy 0. Pomijamy zera z lewej strony. Odczytujemy wynik z tabeli dolnej:

    11111011
    
251(<sub>10</sub>)=11111011(<sub>2</sub>)

8192 |4096 |2048|1024 |512 |256 |128 |64 | 32 |16 | 8 |4|2|1|
| - | - | - | - | - | -| - | - | - | - | - | - |  -| - |  
|2<sup>13</sup>|2<sup>12</sup>|2<sup>11</sup>|2<sup>10</sup>|2<sup>9</sup>|2<sup>8</sup>|2<sup>7</sup>|2<sup>6</sup>|2<sup>5</sup>|2<sup>4</sup>|2<sup>3</sup>|2<sup>2</sup>|2<sup>1</sup>|2<sup>0</sup>|
 | 0 |0 | 0 | 0 | 0 | 0 | 1 | 1 | 1 | 1 | 1 | 0 | 1| 1 |
 
 Konwersja liczb z systemu 2 na 10.
---------------------------------------------
#### 1 metoda (potęgowanie) polega na dodawaniu kolejnych potęg liczby 2:
11111011(<sub>2</sub>)

>1x2<sup>7</sup>+1x2<sup>6</sup>+1x2<sup>5</sup>+1x2<sup>4</sup>+1x2<sup>3</sup>+0x2<sup>2</sup>+1x2<sup>1</sup>+1x2<sup>0</sup> =1x128 + 1x64 + 1x32 + 1x16 + 1x8 + 0x4 + 1x2 + 1x1 = 128 + 64 + 32 + 16 + 8 + 2 + 1 = 251(<sub>10</sub>)
## 2 metoda to dodawanie wag bitów (1) z tabelki:
11111011(<sub>2</sub>)

8192 |4096 |2048|1024 |512 |256 |128 |64 | 32 |16 | 8 |4|2|1|
| - | - | - | - | - | -| - | - | - | - | - | - |  -| - |  
|2<sup>13</sup>|2<sup>12</sup>|2<sup>11</sup>|2<sup>10</sup>|2<sup>9</sup>|2<sup>8</sup>|2<sup>7</sup>|2<sup>6</sup>|2<sup>5</sup>|2<sup>4</sup>|2<sup>3</sup>|2<sup>2</sup>|2<sup>1</sup>|2<sup>0</sup>|
 | 0 |0 | 0 | 0 | 0 | 0 | 1 | 1 | 1 | 1 | 1 | 0 | 1| 1 |
 
>128 + 64 + 32 + 16 + 8 + 2 + 1 = 251(<sub>10</sub>)

 Konwersja liczb z systemu dziesiętnego na ósemkowy.
---------------------------------------------

##### metoda(dzielenie) liczbe zapisaną w systemie dziesiętnym dzielimy przez 8 jeśli wynik jest bez reszty piszemy 0 jeśli z resztą przepisujemy resztę, tak do końca:
251(<sub>10</sub>)

| liczba dziesiętna |wynik dzielenia przez 8 |reszta  z dzielenia|
| ------ | ------ |  ------ |
|251 | 31 | 3|
| 31 |  3 | 7|
| 3  |  0 | 3|

Wynik odczytujemy od dołu do góry 373(<sub>8</sub>)
251(<sub>10</sub>)=373(<sub>8</sub>)

 Konwersja liczb z systemu ósemkowego na dziesiętny.
---------------------------------------------
## Dodajemy kolejne potęgi liczby 8 pomnożone przez ich wartości:
373(<sub>8</sub>)= 3x8<sup>3</sup> + 7x8<sup>1</sup> + 3X8<sup>0</sup> = 3x64 + 7x8 + 3x1 = 251(<sub>10</sub>)

 Konwersja liczb z systemu ósemkowego na binarny
 -----------------------------------------------
 ##### Każdą cyfrę ósemkową zastępujemy grupą 3 bitów wg tabelki konwersji. Grupy łączymy w jedną liczbę binarną, pomijamy skrajne zera z lewej strony.

    Tabela konwersji dwójkowo ósemkowa
    
|Cyfra ósemkowa| cyfra binarna|
|------------|------------|
| 0 | 000 |
| 1 | 001 |
| 2 | 010 |
| 3 | 011 |
| 4 | 100 |
| 5 | 101 |
| 6 | 110 |
| 7 | 111 |

3______7______3(<sub>8</sub>) = 011_____111______011 = 11111011(<sub>2</sub>)



 Konwersja liczb z systemu binarnego na ósemkowy
 -----------------------------------------------
 ##### Liczbę binarną rozdzielamy na grupy 3 bitowe idąc od strony prawej ku lewej. Jeśli w ostatniej grupie jest mniej bitów, to brakujące bity uzupełniamy zerami. Teraz każdą z 3 bitowych grup zastępujemy cyfrą ósemkową zgodnie z tabelką konwersji.
 
   Tabela konwersji dwójkowo ósemkowa
    
|Cyfra ósemkowa| cyfra binarna|
|------------|------------|
| 0 | 000 |
| 1 | 001 |
| 2 | 010 |
| 3 | 011 |
| 4 | 100 |
| 5 | 101 |
| 6 | 110 |
| 7 | 111 |

11111011(<sub>2</sub>)= 011_____111_____011 = 373(<sub>8</sub>)
 
  Konwersja liczb z systemu dziesiętnego na szesnastkowy.
---------------------------------------------
##### metoda(dzielenie) liczbe zapisaną w systemie dziesiętnym dzielimy przez 16 jeśli wynik jest bez reszty piszemy 0 jeśli z resztą przepisujemy resztę, tak do końca:
251(<sub>10</sub>)

>W systemie szesnastkowym używamy 16 znaków:
>0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F

| liczba dziesiętna |wynik dzielenia przez 16 |reszta  z dzielenia|
| ------ | ------ |  ------ |
|251 | 15 | 11=>B|
| 15 |  0 |15=>F|

Wynik odczytujemy od dołu do góry FB(<sub>16</sub>)

251(<sub>10</sub>)=FB(<sub>16</sub>)

Konwersja liczb z systemu szesnastkowego na dziesiętny.
---------------------------------------------
##### Dodajemy kolejne potęgi liczby 16 pomnożone przez ich wartości:
FB(<sub>16</sub>)= 15x16<sup>1</sup> + 11x16<sup>0</sup> = 240 + 11 = 251(<sub>10</sub>)

 Konwersja liczb z systemu szesnastkowego na binarny
 -----------------------------------------------
 ##### Każdą cyfrę szesnastkową zastępujemy grupą 4 bitów wg tabelki konwersji. Grupy łączymy w jedną liczbę binarną, pomijamy skrajne zera z lewej strony.

    Tabela konwersji dwójkowo ósemkowa
    
|Cyfra szesnastkowa| cyfra binarna|
|------------|------------|
| 0 | 0000 |
| 1 | 0001 |
| 2 | 0010 |
| 3 | 0011 |
| 4 | 0100 |
| 5 | 0101 |
| 6 | 0110 |
| 7 | 0111 |
| 8 | 1000 |
| 9 | 1001 |
| A | 1010 |
| B | 1011 |
| C | 1100 |
| D | 1101 |
| E | 1110 |
| F | 1111 |

F_________B(<sub>16</sub>) =>
1111____1011=11111011(<sub>2</sub>)

 Konwersja liczb z systemu binarnego na szesnastkowy.
 -----------------------------------------------
 ##### Liczbę binarną rozdzielamy na grupy 4 bitowe idąc od strony prawej ku lewej. Jeśli w ostatniej grupie jest mniej bitów, to brakujące bity uzupełniamy zerami. Teraz każdą z 4 bitowych grup zastępujemy znakiem szesnastkowym zgodnie z tabelką konwersji.

    Tabela konwersji dwójkowo ósemkowa
    
|Cyfra szesnastkowa| cyfra binarna|
|------------|------------|
| 0 | 0000 |
| 1 | 0001 |
| 2 | 0010 |
| 3 | 0011 |
| 4 | 0100 |
| 5 | 0101 |
| 6 | 0110 |
| 7 | 0111 |
| 8 | 1000 |
| 9 | 1001 |
| A | 1010 |
| B | 1011 |
| C | 1100 |
| D | 1101 |
| E | 1110 |
| F | 1111 |

11111011(<sub>2</sub>)=> 1111______1011 = FB(<sub>16</sub>)


Zródła:  
[Wikipedia][1]  
[Silno Ręki][2]  
[darek526][3]  

[1]: https://pl.wikipedia.org "Wikipedia"  
[2]: https://github.com/majonez007 "Silno Ręki"  
[1]: https://github.com/darek526 "darek526"
  
