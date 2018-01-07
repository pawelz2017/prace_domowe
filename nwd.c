#include <stdio.h>
int a,b, i = 0, j, dzielnik = 2, nwd = 1;
int wspolne_czynniki[100] = {0};

void info(){
	printf("Program liczacy najwyzszy wspolny dzielnik dwoch liczb calkowitych\n");
}

void wprowadzanie(){
	printf("Wprowadz pierwsza liczbe: ");
	scanf("%i", &a);
	
	printf("Wprowadz druga liczbe: ");
	scanf("%i", &b);
}

int licz_czynniki(){
	while(1){
		if(a % dzielnik == 0 && b % dzielnik == 0){
			wspolne_czynniki[i] = dzielnik;
			
			a /= dzielnik;
			b /= dzielnik;
			
			if(a == 1 || b == 1){
				//wspolne_czynniki[i] = 1;
				break;
			}
			i++;
		}else if(dzielnik > a || dzielnik > b){
				if(i==0) wspolne_czynniki[i] = 1;
				break;
			}else dzielnik++;
			
	}
	
	//Do korekty
	if(wspolne_czynniki[i] == 0) i--;

return 0;
}

void pokaz_wyniki(){
	printf("Wspolne czynniki: ");
	
	for(j=0;j<=i;j++){
		printf("%i, ", wspolne_czynniki[j]);
		nwd *= wspolne_czynniki[j];
	}
	
	
	//printf("%i, ", a % dzielnik);
	
	printf("\nNWD wynosi: %i\n", nwd); 	
}

int main(){
	
	info();
	wprowadzanie();
	licz_czynniki();
	pokaz_wyniki();
	
	return 0;
}
