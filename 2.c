#include <stdio.h>

int main() {
    int number;

    printf( "Введите целое число: " );
    scanf( "%d", &number );

    int parity = number % 2;

    switch (parity) {
        case 0:
            printf( "Число четное" );
            break;
        case 1:
            printf( "Число нечетное" );
            break;
    }

    return 0;
}
