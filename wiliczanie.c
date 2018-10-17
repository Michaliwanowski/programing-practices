#include <stdbool.h>
#include "stdio.h"

int main() {
    enum dni {
        ni, po = 5, wt, sr, cz, pi, so,
    };

    bool czy_byl_obecny = true;

    enum dni dzien_tygodnia;

    dzien_tygodnia = so;

    printf("%i\n", dzien_tygodnia);
    printf("%i\n", czy_byl_obecny);



};