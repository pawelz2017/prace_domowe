# Sortowanie bąbelkowe 

(ang. bubble sort) Sortowanie bąbelkowe jest bardzo łatwe - sprawdzamy czy następny element tablicy jest większy od aktualnego, jeżeli tak, to zamieniamy te elementy miejscami. Aby skrócić czas wykonywania całego algorytmu kosztem dłuższego czasu przejścia przez jedną pętlę, można utworzyć flagę przechowującą zmiany. Flaga jest zerowana na wejściu w pętli, w przpadku zmiany jest ona podnoszona. Po wykonaniu pętli sprawdzamy czy zaszła zmiana, jeżeli nie to kończymy sortowanie.<br> Przykład:<br><br>
>void Sortowanie( int tab[], int size )<br>
>{<br>
>    for( int i = 0; i < size; i++ )<br>
>    {<br>
>        for( int j = 0; j < size - 1; j++ )<br>
>        {<br>
>            if( tab[ j ] > tab[ j + 1 ] )<br>
>                 swap( tab[ j ], tab[ j + 1 ] );<br>            
>        }<br>
>    }<br>
>}<br>


# Sortowanie przez wybieranie
(selection sort ) Sortowanie te polega na wyszukaniu najmniejszego elementu z całej tablicy i wstawieniu go na następny element posortowanej tablicy. Gdy najmniejszy element zamienimy na największy, wówczas tablica będzie posortowana od największego do najmniejszego elementu. <br>
Przykład


>void Sortowanie( int tab[], int size ) <br>
>int k;<br>
>for( int i = 0; i < size; i++ )<br>
>  k = i;<br>
>  for( int j = i + 1; j < size; j++ )<br>
>  if( tab[ j ] < tab[ k ] )<BR>
>  k = j;<BR>
>  swap( tab[ k ], tab[ i ] );<BR>
>  }<BR>
>  }<BR>



# Sortowanie przez wstawianie 

(ang. Insert Sort, Insertion Sort) – jeden z najprostszych algorytmów sortowania, którego zasada działania odzwierciedla sposób w jaki ludzie ustawiają karty – kolejne elementy wejściowe są ustawiane na odpowiednie miejsca docelowe. Jest efektywny dla niewielkiej liczby elementów. Pomimo tego, że jest znacznie mniej wydajny, posiada pewne zalety:liczba wykonanych porównań jest zależna od liczby inwersji w permutacji, dlatego algorytm jest wydajny dla danych wstępnie posortowanych, jest wydajny dla zbiorów o niewielkiej liczebności, jest stabilny. <br> Przykład:<br><br>
void Sortowanie( int tab[], int size )<br>
{<br>
>    int temp, j;<br>    
>    for( int i = 1; i < size; i++ )<br>
>    {<br>
>        temp = tab[ i ];<br>
>                for( j = i - 1; j >= 0 && tab[ j ] > temp; j-- )<br>
>             tab[ j + 1 ] = tab[ j ];<br>
>                tab[ j + 1 ] = temp;<br>
>    }<br>
>}<br>

