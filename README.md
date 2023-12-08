# PROIECT SINCRETIC MAP

 
## Problema celor 8 regine

Problema a fost investigata de Carl Friedrich Gauss in 1850 si pana astazi aceasta nu are o solutie analitica ci prin incercari. Problema are 92 de solutii din care 12 sunt distincte (din motiv de simetrie).Ea consta in plasarea a 8 regine pe o tabla de sah 8x8 astfel incat sa nu se atace reciproc.

Scopul proiectului este rezolvarea acestei probleme folosind un algoritm de backtracking in limbajul de programare C.

## Detalii de implementare

Codul sursă (`code.c`) conține funcțiile necesare pentru rezolvarea problemei celor 8 regine, iar în fișierul `Dockerfile` sunt specificate instrucțiunile pentru construirea imaginii Docker.

1. Structura de Date:
   * Folosim o matrice bidimensionala de caractere pentru a reprezenta tabla de sah.
   * Cu functia `verificare` se verifica daca o anumita pozitie de pe tabla este potrivita pentru plasarea unei regine.
2. Algoritm de Backtracking:
   * Se utilizează recursivitatea pentru a explora toate posibilitățile de plasare a reginelor.
   * Functia `rezolva_n_regine` utilizeaza becktracking, incercand toate pozitiile posibile pentru regina curenta in coloana data, respectand conditiile de siguranta.
      
## Platformă Software Utilizată

- **Limbaj de Programare:** C
- **Sistem de Operare:** Windows (pentru dezvoltare), containerizat pentru portabilitate
- **Mediu de Dezvoltare:** Visual Studio Code
- **Containere:** Docker
- **Sistem de Control al Versiunilor:** Git

## Cum să Rulezi Proiectul

1. Asigurați-vă că Docker Desktop este instalat pe sistemul Windows. Puteți descărca și instala Docker Desktop de la [https://www.docker.com/products/docker-desktop](https://www.docker.com/products/docker-desktop).
2. Clonează repository-ul Git:
   Deschideți o fereastră de comandă sau PowerShell și navigați în directorul proiectului
   ```
   git clone https://github.com/ramonamilos/PROIECT-SINCRETIC-MAP.git
   cd PROIECT-SINCRETIC-MAP
   ```
3. Construcție și Rulare Container Docker:
   ```
   docker build -t nume_imaginie .
   docker run -it nume_imaginie
   ```

## Livrabil

Imagina Docker poate fi construită și accesată de pe [Docker Hub](https://hub.docker.com/r/nume_utilizator/nume_repository). Pentru a utiliza această imagine, rulează următoarele comenzi:

```
docker pull nume_utilizator/nume_repository
docker run -it nume_utilizator/nume_repository
```

## Exemplu de rulare
```
Q . . . . . . .
. . . . Q . . .
. . . . . . . Q
. . . . . Q . .
. . Q . . . . .
. . . . . . Q .
. Q . . . . . .
. . . Q . . . .
```

## Concluzii

* Proiectul furnizează soluții valide pentru problema celor 8 regine.
* Algoritmul de backtracking este eficient și poate gestiona diferite configurații ale tablei de șah.
* Folosirea **Docker-ului** faciliteaza rularea codului sursa, fara sa ai un compilator GCC descarcat pe masina ta personala, deoarece Dockerfile are deja inclus un container care face acest lucru pentru tine.

## Autor
Creat de: <Milos Ramona-Paula>

## Bibliografie

1. "Algoritmi și Structuri de Date" - Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, Clifford Stein - Referință pentru algoritmi și backtracking.
2. [GeeksforGeeks - N-Queens Problem](https://www.geeksforgeeks.org/n-queen-problem-backtracking-3/) - Resursă online care explică și oferă soluții pentru problema celor 8 regine.



