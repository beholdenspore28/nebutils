// A simple program to translate hexadecimal numbers to binary or decimal.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {

  if (argc != 2) {
    fprintf(stderr, "Usage: %s <hexadecimal number>\n", argv[0]);
    exit(1);
  }

  const unsigned long decimal_value = strtol(argv[1], NULL, 16);
  printf("Binary: 0b%lb\n", decimal_value);
  printf("Decimal: %ld\n", decimal_value);

  return 0;
}
