# Zadanie 1.1. (0–5)

Napisz algorytm (w postaci listy kroków, w pseudokodzie lub w wybranym języku programowania), który dla danego ciągu liczb zapisanych przez dzieci znajdzie pierwszą liczbę zapisaną przez Jasia.

Zakładamy, że każde z dzieci zapisało co najmniej jedną liczbę.

Przy ocenie będzie brana pod uwagę złożoność czasowa Twojego algorytmu. Maksymalną liczbę punktów uzyskasz za algorytm o złożoności lepszej niż liniowa.

> **Uwaga:** W zapisie algorytmu możesz wykorzystać tylko operacje arytmetyczne (dodawanie, odejmowanie, mnożenie, dzielenie, dzielenie całkowite, reszta z dzielenia), instrukcje porównania, instrukcje sterujące i przypisania do zmiennych lub samodzielnie napisane funkcje, wykorzystujące wyżej wymienione operacje.

## Specyfikacja

### Dane

- `n` – liczba całkowita większa od 1
- `A[1..n]` – tablica zawierająca ciąg `n` liczb zapisanych przez dzieci  
  (najpierw wszystkie liczby nieparzyste, a potem wszystkie liczby parzyste)

### Wynik

- `w` – pierwsza od lewej parzysta liczba w tablicy `A`

## Przykład

### Dane

```text
n = 10
A[1..n] = {5, 99, 3, 7, 111, 13, 4, 24, 4, 8}

---

# Zadanie 4. Liczby

W pliku `liczby.txt` zapisano 500 liczb całkowitych dodatnich po jednej w każdym wierszu.  
Każda liczba jest z zakresu od 1 do 100 000.

Napisz program(-y) dający(-e) odpowiedzi do poniższych zadań. Zapisz uzyskane odpowiedzi w pliku `wyniki4.txt`, poprzedzając każdą z nich numerem odpowiedniego zadania.

> Uwaga: Plik `przyklad.txt` zawiera przykładowe dane spełniające warunki zadania.  
> Odpowiedzi dla danych z tego pliku są podane pod treściami zadań.

---

## Zadanie 4.1. (0–3)

Podaj, ile z podanych liczb jest potęgami liczby 3, czyli liczbami postaci:

`1 = 3^0`, `3 = 3^1`, `9 = 3^2` itd.

Dla pliku `przyklad.txt` odpowiedź wynosi **2**.

---

## Zadanie 4.2. (0–4)

Silnią liczby naturalnej `k` większej od 0 nazywamy wartość iloczynu:

`1 · 2 · ... · k`

i oznaczamy przez `k!`.

Przyjmujemy, że `0! = 1`.

Zatem mamy:

- `0! = 1`
- `1! = 1`
- `2! = 1 · 2 = 2`
- `3! = 1 · 2 · 3 = 6`
- `4! = 1 · 2 · 3 · 4 = 24`
- itd.

Dowolną liczbę naturalną możemy rozbić na cyfry, a następnie policzyć sumę silni jej cyfr.

Na przykład dla liczby `343` mamy:

`3! + 4! + 3! = 6 + 24 + 6 = 36`

Podaj, w kolejności ich występowania w pliku `liczby.txt`, wszystkie liczby, które są równe sumie silni swoich cyfr.

W pliku `przyklad.txt` znajduje się jedna taka liczba:

`145`

ponieważ:

`1! + 4! + 5! = 1 + 24 + 120 = 145`

---

## Zadanie 4.3. (0–5)

W pliku `liczby.txt` znajdź najdłuższy ciąg liczb występujących kolejno po sobie taki, że największy wspólny dzielnik ich wszystkich jest większy od 1.

Innymi słowy: istnieje taka liczba całkowita większa od 1, która jest dzielnikiem każdej z tych liczb.

Jako odpowiedź podaj:

- pierwszą liczbę w takim ciągu,
- długość ciągu,
- największą liczbę całkowitą, która jest dzielnikiem każdej liczby w tym ciągu.

W pliku z danymi jest tylko jeden taki ciąg o największej długości.

> Uwaga: Możesz skorzystać z zależności:
>
> `NWD(a, b, c) = NWD(NWD(a, b), c)`

### Przykład 1

Dla liczb:

`3, 7, 4, 6, 10, 2, 5`

odpowiedzią jest:

- pierwsza liczba ciągu: **4**
- długość ciągu: **4**
- największy wspólny dzielnik: **2**

### Przykład 2

Dla liczb:

`5, 70, 28, 42, 98, 1`

odpowiedzią jest:

- pierwsza liczba ciągu: **70**
- długość ciągu: **4**
- największy wspólny dzielnik: **14**

Odpowiedź dla pliku `przyklad.txt`:

- pierwsza liczba ciągu: **90**
- długość: **5**
- największy wspólny dzielnik: **10**