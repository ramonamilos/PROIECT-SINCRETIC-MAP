# PROIECT SINCRETIC MAP

 
## Problema celor 8 regine

Problema a fost investigata de Carl Friedrich Gauss in 1850 si pana astazi aceasta nu are o solutie analitica ci prin incercari. Problema are 92 de solutii din care 12 sunt distincte (din motiv de simetrie).Ea consta in plasarea a 8 regine pe o tabla de sah 8x8 astfel incat sa nu se atace reciproc.

Scopul proiectului este rezolvarea acestei probleme folosind un algoritm de backtracking in limbajul de programare C.

## Detalii de implementare

1. Structura de Date:
   * Folosim o matrice bidimensionala de caractere pentru a reprezenta tabla de sah.
   * Cu functia 'verificare' se verifica daca o anumita pozitie de pe tabla este potrivita pentru plasarea unei regine.
2. Algoritm de Backtracking:
   * Se utilizează recursivitatea pentru a explora toate posibilitățile de plasare a reginelor.
   * Functia 'rezolva_n_regine' utilizeaza becktracking, incercand toate pozitiile posibile pentru regina curenta in coloana data, respectand conditiile de siguranta.
      