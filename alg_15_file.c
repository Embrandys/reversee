#include <stdio.h>
#include <stdlib.h>

int i;
int a[50000];
int pom;
int n;
int n1;

int main()
{
    FILE *tablica;
    tablica = fopen("C:/Users/Emilia/Desktop/me/geoinformatyka/rok 1/podstawy infy/Ciag.txt", "r");               // otwiera plik z ciagiem liczb

    if (tablica == NULL){
        printf("Blad przy wczytywaniu pliku\n");
        exit (0);                                       // w przypadku bledu
    }

    i=0;
    while (fscanf(tablica, "%d,", &a[i]) != EOF){
      i++;
      n=i;                                              // wpisuje wszystkie liczby do tablicy i zapisuje ilosc liczb pod "n"
    }

    for (i = 0; i < n; i++){
        printf("%d" , i);
        printf(" wyraz ciagu: %d \n", a[i]);            // wypisuje wszystekie liczby
    }

    fclose(tablica);

     i=0;
     n1=n;
     n=n-1;
    while(i<n+1){
        pom=a[i];
        a[i]=a[n];
        a[n]=pom;
        n=n-1;
        i=i+1;                                          // odwraca miejscami liczby w ciagu
    }

    i=0;
    printf("Po odwroceniu: \n");
    while(i<n1){
        printf("%d" , i);
        printf(" wyraz ciagu: %d \n", a[i]);
        i++;                                            // wypisuje odwrocone liczby
    }

    return 0;
}
