//  Created by E.Carolina Almeida on 02/11/2019



#include <stdio.h>

int main(void) {
  int n, i, fact;

  printf("Introduza um inteiro positivo:");
  scanf("%d", &n);
  
  for(i = 1; i<=n; i++) 
    fact = fact*i;

  printf("Factorial %d = %d\n", n, fact);
}
