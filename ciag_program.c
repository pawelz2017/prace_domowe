#include <stdio.h>

//Deklaracja zmiennych globalnych
int ciag[9];
int wybor = 0;


void wprowadzanie(){
	
	int i;
//Petla do wprowadzania danych 	
	for(i=0;i<10;i++){
		printf("Wprowadz %i liczbe ciagu liczb calkowitych: \n", i+1);
		scanf("%i", &ciag[i]);
	}
	
}

float liczSredniaParzystych(){
	
//Deklaracja zmiennych funkcji wraz z ich zerowaniem
	float sredniaParzystych = 0;
	int licznikParzystych = 0, i;

	for(i=0;i<10;i++){
		
		if(ciag[i] % 2 == 0){
			licznikParzystych++;
			sredniaParzystych += ciag[i];
		}
	}
	
	if(licznikParzystych == 0){
		printf("Brak liczb parzystych w ciagu\n");
	}else{
		sredniaParzystych = sredniaParzystych / licznikParzystych;
		printf("Srednia liczb parzystych wynosi : %f\n", sredniaParzystych);
	}
	return sredniaParzystych;
}
void wyswietlCiag(){
	int i;
	printf("Liczby ciagu: ");
	for(i=0;i<10;i++){
		printf("%i ", ciag[i]);
	}
	printf("\n");
}

void sortujRosnaco(){
	int i, j, temp;
	for(j=0; j<10; j++){
    for(i=0; i<9; i++){
             if(ciag[i]>ciag[i+1]){
                             temp=ciag[i];
                             ciag[i]=ciag[i+1];
                             ciag[i+1]=temp;
                             }
                      }
                      }
    printf("Posortowano\n");
	wyswietlCiag();
}

int podajDominante(){
	int i, j, iloscWystapien, maxWystapien = 0, dominanta;
	
	for(j=0;j<10;j++){
		iloscWystapien = 0;
		for(i=1;i<10;i++){
	
			if(ciag[j] == ciag [i]){
			iloscWystapien++;
				if(iloscWystapien > maxWystapien){
					maxWystapien = iloscWystapien;
					dominanta = ciag[j];
				}
			}
		}
	}	
	
	if(maxWystapien > 1){
		printf("Dominanta: %i\n", dominanta);
	}else{
		printf("Ciag nie posiada powtarzajacych sie liczb\n");
	}	
return 0;
}


void menu(){
	
	printf("\nMenu - wybierz opcje\n");
	printf("1 - wprowadzanie danych\n");
	printf("2 - wyswietl dominante\n");
	printf("3 - wyswietl srednia liczb parzystych\n");
	printf("4 - sortuj rosnaco\n");
	printf("5 - wyswietl liczby ciagu\n");
	printf("9 - wyjscie z programu\n");
	
	scanf("%i", &wybor);
		
	switch(wybor){
		case 1: 
			wprowadzanie();
			break;
		case 2:
			podajDominante();
			break;
		case 3:
			liczSredniaParzystych();
			break;
		case 4:
			sortujRosnaco();
			break;
		case 5:
			wyswietlCiag();
			break;
		case 9:
			break;
		default:
			printf("Bledny wybor\n");
			break;
	}
}



int main()
{
	//Czyszczenie ekranu - UNIX
	printf("\033[2J\033[H");
	
	//Komunikat informacyjny
	printf("Ciagi\n");
	
	//Pierwsze wprowadzanie liczb do ciagu
	wprowadzanie();
	
	//Petla zasadnicza programu
	while (wybor != 9) {
	
	//Wywolanie menu
	menu();

//Zrobic potwierdzenie wyjscia z programu 
	}
	return 0;
	
}

