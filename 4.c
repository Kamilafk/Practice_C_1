#include <stdio.h>

int main() {
  int num;

  printf( "Введите число " );
  scanf( "%d", &num );

  int positive = ( num  >  0 ); //Определение положительности числа

  int power = !( num & ( num - 1 ) ); //Побитовый оператор для определения ялвяется ли число степенью двойки

  int result = positive && power; 

  printf( "%d", result );

  return 0;
}
