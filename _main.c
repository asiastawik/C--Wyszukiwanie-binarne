#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

    int D[] = {1, 10, 123, 200, 1000, 2000};
    int n = sizeof( D ) / sizeof( int );//sizeof(D) poda długość (w bajtach) tablicy D, a sizeof(int)
    //poda długość w bajtach każdego elementu (zmienna, stała) typu int.
    //Podzielenie tych wartości powinno dać liczbę elementów tablicy.

    int x;
    printf("Podaj liczbe ktora chcesz wyszukac: ");
    scanf("%d", &x);

    int a, b, c;
    a = 0;
    b = n - 1;

poczatek:
    c = ( a + b ) / 2;
    if ( D[c] == x )
        goto koniec;

    else if ( D[c] > x )
        b = c - 1; //odrzucamy prawą część tablicy wraz ze środkiem, bo już wcześniej upewniliśmy się, że nie ma tam wartości szukanej
    else
        a = c + 1;

    if ( a <= b )
        goto poczatek;

    else printf("Nie znaleziono liczby\n");
            return 1;

koniec:
    printf("Wartosc jest w tablicy na miejscu %d\n", c);
    return 0;
}
