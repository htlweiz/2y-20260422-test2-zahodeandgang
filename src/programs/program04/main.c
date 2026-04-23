/// \file
/// \author
/// \date

#include <inttypes.h>
#include <stdio.h>
#include <math.h>

// TODO: your code goes here
double compute_hypotenuse (double leg_a, double leg_b) {
  double hyp = 0;
  hyp = (leg_a * leg_a) + (leg_b * leg_b);
  return hyp;
}

int main(void) {
  double leg_a = 0, leg_b = 0;

  printf("Länge der Kathete a: ");
  scanf("%lf", &leg_a);
  printf("Länge der Kathete b: ");
  scanf("%lf", &leg_b);

  printf("Länge der Hypothenuse %.2f\n", compute_hypotenuse(leg_a, leg_b));

  return 0;
}
