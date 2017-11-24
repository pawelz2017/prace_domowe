# Praca domowa
---

## Przejście do pulpitu
cd Pulpit/

## Utworzenie katalogu
mkdir first_repo  
cd first_repo/

## Instalacja git
sudo apt-get update  
sudo apt-get install git

### Sprawdzenie wersji git
git --version

## Inicjalizacja repozytorium GIT w bieżącym katalogu
git init

### Wyśliwtlenie zawartości aktualnego katalogu
ls

## Utworzenie pliku
touch test.txt

## Edycja pliku
nano test.txt

## dodanie plików (lub ich zmian) do repozytorium git (. - wszystkich)
git add .

## Wyświetlenie listy zmienionych plików
git status

## Konfiguracja git
git config --global user.email "niechce@spamu.loc"  
git config --global user.name "pawelz2017"


## Dodaje do commita wraz z komentarzem
git commit -m "tworzenie nowego pliku"


## Sprawdzenie zmian
git log

## Edycja pliku
nano test.txt

## dodanie plików (lub ich zmian) do repozytorium git (. - wszystkich)
git add .

## Dodaje do commita wraz z komentarzem
git commit -m "pierwsza zmiana"
## Sprawdzenie zmian
git log

## Edycja pliku
nano test.txt

## dodanie plików (lub ich zmian) do repozytorium git (. - wszystkich)
git add .

## Dodaje do commita wraz z komentarzem
git commit -m "druga zmiana"


## Dodanie do git zdalnego repozytorium
git remote add origin https://github.com/pawelz2017/test.git

## Wysłanie zmienionych plików do zdalnego repozytorium
git push -u origin master

### Kopiowanie danych z github
git clone

### Ściągnięcie zmian z serwera do posiadanego już repo w folderze
git pull

### dodajemy ignorowane pliki, rozszerzenia
echo "*.o     #ignoruj wszystkie skompilowane pliki" >> .gitignore

---
___KONIEC___
