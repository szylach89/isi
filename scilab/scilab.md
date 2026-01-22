# Pomoc do scilaba (operacje, komendy i wszystko co znajde co wyda mi się przydatne)

### Podstawowe operacje:
- A + B
- A - B
- A * B
- A / B
- 2 ^ 2 lub 2 ** 2
- sqrt(2)
- modulo(x, d)

### Wbudowane zmienne:
- %pi
- %e
- %i
- %eps
- %inf
- %nan
- %T

Średnik (;):
: Średnik pomija wyświetlanie wyniku polecenia

### Inne polecenia:
- help - wyświetla dokumentacje
- apropos *text* - wyswietla strony dokumentacji zawierających *text*
- what - wyświetla dostępne funkcje
- clear - czyści przestrzeń roboczą, usuwa wszystkie zmienne
- clc - czyści okno poleceć
- clf czyści okno graficzne
- resethistory - czyści historię poleceń

## Macierze i wektory

Wektor
: a=[1,2,3]

Transpozycja
: a'
: a.' <- "*zwykłe*" transponowanie (cokolwiek to znaczy)

Macierze
: a=[1,2,3;4,5,6]
: elementy w wierszu odzielasz przecinkiem lub spacją. Nowy wiersz zaczynasz pisząc średnik (;)

Mnożenie macierzy
: a * b
: Jest spore prawdopodobieństwo że będzie trzeba transponować jedną z macierzy np. a*b'

Inne mnożenie macierzy
: a .* b
: mnożenie "Element przez odpowiadający mu element", tzn. pierwszy element z a * pierwszy element z b itd.
: Istnieje również `a ./ b` co jest odpowiednikiem dla dzielenia.

[1,2,3].*[3,2,1]

Wynik powyższego działania: 3, 4, 3

Wektory o elementach równomiernie rozmieszczonych:
: `linspace(0, 1, 11)`
: 0:0.1:1 <- od:krok:do

Odwracanie macierzy:
: inv(a)
: a^(-1)

Wyznacznik macierzy:
: det(a)

### Macierze specjalne:
- eye()
- diag()
- zeros()
- ones()
- tril()
- triu()

### Operatory relacji:
- ~=
- ==
- <
- \>
- <=
- \>=

`rand(x,y)`
: Tworzy losową macierz o wymiarach x na y

### Funkcje matematyczne:
- sqrt()
- nthroot(,m) <- Pierwisatek m-tego stopnia
- log()
- log10()
- log2()
- exp()
- abs()
- int()
- floor()
- ceil()
- round()
- sin()
- cos()
- tan()
- cotg()

## Wielomiany

#### Zdefiniowanie wielomanu zmiennej *z* o współczynnikach 1, 2, 3:
- `w = poly([1,2,3], 'z', 'coeff')`

#### Pochodna wielomanu:
- derivat(w)

#### Wartość wielomianu w punkcie *x*:
- horner(w, x)

#### Pierwiastki wielomanu:
- roots(x)

## Instrukcje warunkowe

### If

```scilab
if wyrazenie_logiczne, instrukcja, end;
```

Przykład: `if a>b, a=a+5, end`

```
if a>b then
  a=a+b
else
  a=a-b
end
```

### If else:

```
if wyrazenie_logiczne_1 then
  ciag_instrukcji_1
elseif wyrazenie_logiczne_2 then
  ciag_instrukcji_2
else
  ciag_instrukcji_3
end
```

### Instrukcja wyboru (select)

```
select identyfikator
  case iden1
    ciag_instrukcji_1
  case idne2
    ciag_instrukcji_2
  else
    ciag_instrukcji_3
end
```

## Pętle

### For

```
for index=pocz:krok:koniec do
  ciag_instrukcji_1
end
```

Ewententualnie `index=pocz:koniec` z krokiem 1.

### While

```
while wyrazenie_logiczne do
  ciag_instrukcji
end
```

Ta pętla może być przerwana poleceniem `break`.

## Wykresy

### Funkcje:
- plot()
- bar()
- fplot2d()
- plot2d()
- fplot3d()
- subplot()
- figure()
- histplot()
- legend()
- title()
- xlabel()
- ylabel()
- xgrid
- clf

## SciNotes

Całość z tych funkcji i operacji można wykonać albo bezpośrednio w scilab CLI lub użyć SciNotes. Wtedy taką sekwencje można zapisać do pliku i uruchomić.

### Uruchamianie

Albo używasz `exec` albo używasz przycisku na pasku w SciNotes

### Wyświetlanie
Żeby coś się w konsoli pojawiło (np. wynik działania) używasz disp()
