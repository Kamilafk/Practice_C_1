#include <stdio.h>

int main() {
  int num;

  printf( "Введите число " );
  scanf( "%d", &num );

  int positive = ( num  >  0 ); //Определение положительности числа
  
  int num2 = num - 1; 
  
  int bit = num & num2; //Побитовая операция между числом и числом уменьшенным на 1
  
  int power = !bit;  //Перевернутый результат
  
  int result = positive && power; 

  printf( "%d", result );

  return 0;
}
