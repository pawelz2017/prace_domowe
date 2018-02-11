****
# Dlaczego dla preprocesingu w języku C używamy nadmiarowych nawiasów?
****
## Preprocesor
 - program komputerowy, którego zadaniem jest przetworzenie kodu źródłowego, 
w sposób określony przez programistę za pomocą dyrektyw preprocesora, 
na kod wyjściowy – tak przetworzony kod źródłowy poddawany jest następnie 
analizie składniowej, kompilacji, a w końcu konsolidacji.  
Odpowiada za wstępną obróbkę kodu źródłowego zanim rozpocznie się właściwy proces kompilowania.  
--------------
##Nawiasy w preprocessingu
Makra preprocesora działają na zasadzie zwykłego zastępowania napisów, to powoduje podatność na wiele kłopotliwych błędów, część z nich można przez odpowiednie stosowanie nawiasów.  

Należy umieszczać nawiasy dookoła parametrów makra kiedy to tylko możliwe. Zapewnia to, że gdy są wyrażeniami kolejność działań nie zostanie zmieniona. Na przykład:
```
    ***Źle: #define kwadrat(x) (x*x)
    ***Dobrze: #define kwadrat(x) ((x)*(x))
    ***Przykład: Załóżmy, że w programie makro kwadrat() zdefiniowane bez nawiasów zostało wywołane następująco: kwadrat(a+b). Wtedy zostanie ono zamienione przez preprocesor na: (a+b*a+b). Z kolejności działań wiemy, że najpierw zostanie wykonane mnożenie, więc wartość wyrażenia kwadrat(a+b) będzie różna od kwadratu wyrażenia a+b.
```
Należy umieszczać nawiasy dookoła całego makra, jeśli jest pojedynczym wyrażeniem. Ponownie, chroni to przed zaburzeniem kolejności działań.
```
    ***Źle: #define kwadrat(x) (x)*(x)
    ***Dobrze: #define kwadrat(x) ((x)*(x))
    ***Przykład: Definiujemy makro #define suma(a, b) (a)+(b) i wywołujemy je w kodzie wynik = suma(3, 4) * 5. Makro zostanie rozwinięte jako wynik = (3)+(4)*5, co — z powodu kolejności działań — da wynik inny niż pożądany.
```

Zródła:  
[wikiksiążka C][1]  

[1]:https://pl.wikibooks.org/wiki/C/Powszechne_praktyki#Konwencje_pisania_makr "wikiksiążka C"  
