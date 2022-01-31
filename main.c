#include <stdio.h>

int main() {
    char slowo[25];
    int liczba1, liczba2;
    int suma;

    printf("Narzedzia programistyczne program\n");
    printf("Podaj slowo jakie chcesz wyswietlic:");
    scanf("%s", &slowo);
    printf("Slowo to: %s", slowo);

    printf("\nPodaj dwie liczby, ktore chcesz dodac:");
    scanf("%d %d", &liczba1, &liczba2);
    suma = liczba1 + liczba2;
    printf("%d + %d = %d", liczba1, liczba2, suma);

    printf("\nNarzedzia programistyczne");
    return 0;

}