# Tablice i Wyszukiwanie Binarne

## Opis zadania

Celem tego zadania jest zaimplementowanie algorytmu **wyszukiwania binarnego** w tablicy, w której liczby są ułożone w **kolejności malejącej**. Algorytm ma za zadanie sprawdzić, czy zadana liczba znajduje się w tablicy. Jeśli tak, algorytm powinien zwrócić indeks (numer pozycji) tej liczby.

### Wyszukiwanie binarne

Wyszukiwanie binarne to algorytm, który efektywnie przeszukuje posortowaną tablicę, dzieląc ją na pół w każdym kroku. Dzięki temu ma złożoność czasową \( O(\log n) \), co czyni go bardzo szybkim, zwłaszcza w porównaniu z wyszukiwaniem liniowym.

## Zasady działania algorytmu

1. **Inicjalizacja**: Algorytm zaczyna od wskazania pierwszego elementu tablicy jako `left` i ostatniego elementu jako `right`.
2. **Podział tablicy**:
   - W każdym kroku obliczamy indeks **środkowego elementu** jako:
     \[
     \text{mid} = \frac{\text{left} + \text{right}}{2}
     \]
   - Następnie porównujemy wartość szukanej liczby `x` z wartością środkowego elementu `arr[mid]`.
3. **Dalsze wyszukiwanie**:
   - Jeśli `arr[mid] == x`, znaleźliśmy liczbę i zwracamy indeks `mid`.
   - Jeśli `arr[mid] > x`, kontynuujemy wyszukiwanie w **prawej** części tablicy (ponieważ tablica jest posortowana malejąco).
   - Jeśli `arr[mid] < x`, kontynuujemy wyszukiwanie w **lewej** części tablicy.
4. **Koniec wyszukiwania**:
   - Proces powtarza się, aż przedział `left` i `right` się zbiegnie (czyli tablica zostanie podzielona do pojedynczego elementu).
   - Jeśli liczba nie zostanie znaleziona, algorytm zwraca wartość `-1`, co oznacza brak liczby w tablicy.

### Kroki algorytmu:

1. Wejściowe wartości:
   - Tablica `arr` posortowana malejąco.
   - Szukana liczba `x`.
2. Ustawienia początkowe: `left = 0`, `right = len(arr) - 1`.
3. Dopóki `left <= right`:
   - Oblicz indeks środkowego elementu: `mid = (left + right) // 2`.
   - Porównaj `arr[mid]` z `x`:
     - Jeśli `arr[mid] == x`, zwróć indeks `mid`.
     - Jeśli `arr[mid] > x`, przeszukuj prawą połówkę (`left = mid + 1`).
     - Jeśli `arr[mid] < x`, przeszukuj lewą połówkę (`right = mid - 1`).
4. Jeśli liczba `x` nie zostanie znaleziona, zwróć `-1`.
