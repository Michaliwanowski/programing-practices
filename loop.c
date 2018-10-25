#include <stdio.h>

int main() {

    int a;
    int c;
    int b;
    printf("Program obliczy silnię liczby którą podasz\n");
    printf("Podaj wartosc liczby a: ");
    scanf("%d", &a);
    c=1;
    if (a >=0 && a<=15){
        for (b = 1; b <= a; b++)
    {
        c =c*b;

    }
        printf("silnia wynosi %d", c);
}

else
    {printf("liczba z poza zakresu");
    }
    return 0;
}
