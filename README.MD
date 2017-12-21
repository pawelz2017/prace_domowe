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

System szesnstkowy
------------------
> Szesnastkowy system liczbowy znany również pod nazwą system heksadecymalny – pozycyjny system liczbowy, w którym podstawą jest liczba 16. Do zapisu liczb w tym systemie potrzebne jest szesnaście znaków (cyfr szesnastkowych). W najpowszechniejszym standardzie poza cyframi dziesiętnymi od 0 do 9 używa się pierwszych sześciu liter alfabetu łacińskiego: A, B, C, D, E, F (wielkich lub małych). Cyfry 0-9 mają te same wartości co w systemie dziesiętnym, natomiast litery odpowiadają następującym wartościom: 
> A = 10, B = 11, C = 12, D = 13, E = 14 oraz F = 15.

>W kalkulatorach naukowych o siedmiosegmentowych wyświetlaczach LCD stosuje się następujące oznaczenia kolejnych cyfr szesnastkowych: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, b, C, d, E, F (b i d, zamiast B i D dla rozróżnienia wyświetlania, które wyglądają jak 8 i 0).

> Istnieją również projekty ujednolicenia zapisu i wprowadzenia zupełnie nowych cyfr, przeznaczonych dla tego systemu.

>Jak w każdym pozycyjnym systemie liczbowym, liczby zapisuje się tu jako ciągi znaków, z których każdy jest mnożnikiem kolejnej potęgi liczby stanowiącej podstawę systemu. Np. liczba zapisana w dziesiętnym systemie liczbowym jako 1000, w systemie szesnastkowym przybiera postać 3E8, gdyż:

+ 3x16^2 +14 x 16^1 + 8 x 16^0=768+224+8=1000


Zródło: [Wikipedia][1]


[1]: https://pl.wikipedia.org "Wikipedia"
[1]: Silno Ręki
