#include <stdio.h>


void info() {
    printf("Program liczacy najwyzszy wspolny dzielnik dwoch liczb calkowitych\n");
}

//Rekurencyjnie
int NWD_rekurencyjnie(int a, int b){
   if(a!=b)
     return NWD_rekurencyjnie(a>b?a-b:a,b>a?b-a:b);
   return a;
}

//Iteracyjnie
int NWD_iteracyjnie(int a, int b){
    while(a!=b)
       if(a>b)
           a-=b; //lub a = a - b;
       else
           b-=a; //lub b = b-a
    return a; // lub b - obie zmienne przechowują wynik NWD(a,b)
}

int main() {

	int a, b;
	
    info();
   
    
    
    printf("Podaj pierwsza liczbe: ");
    scanf("%i", &a);
    
    printf("Podaj druga liczbe: ");
    scanf("%i", &b);
    
    
    //Rekurencyjnie
    printf("Rekurencyjnie\n");
    printf("NWD liczb %i, %i wynosi: %i\n", a, b, NWD_rekurencyjnie(a,b)); 
    
    //Iteracyjnie
    printf("Iteracyjnie\n");
    printf("NWD liczb %i, %i wynosi: %i\n", a, b, NWD_iteracyjnie(a,b)); 
    
     
    
    return 0;
}
