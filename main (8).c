#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

    int D[] = {1, 10, 123, 200, 1000, 2000};
    int n = sizeof( D ) / sizeof( int );//sizeof(D) poda d�ugo�� (w bajtach) tablicy D, a sizeof(int)
    //poda d�ugo�� w bajtach ka�dego elementu (zmienna, sta�a) typu int.
    //Podzielenie tych warto�ci powinno da� liczb� element�w tablicy.

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
        b = c - 1; //odrzucamy praw� cz�� tablicy wraz ze �rodkiem, bo ju� wcze�niej upewnili�my si�, �e nie ma tam warto�ci szukanej
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
