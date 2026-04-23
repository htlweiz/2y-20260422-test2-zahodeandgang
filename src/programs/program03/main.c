/// \file
/// \author
/// \date

#include <inttypes.h>
#include <stdio.h>
#include <math.h>

// TODO: your code goes here
double Celsius2Fahrenheit (double temp_celsius) {
  double temp_fahrenheit;
  temp_fahrenheit = (temp_celsius * (1.8)) + 32;
  return temp_fahrenheit;
}

int main(void) {
  double temp_celsius = 0;

  printf("Temperatur in Grad Celsius: ");
  scanf("%lf", &temp_celsius);

  printf("Temperatur in Grad Fahrenheit: %.1f\n", Celsius2Fahrenheit(temp_celsius));

  return 0;
}
