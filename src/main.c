#include <string.h>
#include <stdio.h>

int main(int argc, char **argv) {
  FILE *fp = fopen(argv[1], "r");
  if (fp == NULL) {
      fprintf(stderr, "%s: \033[31mfatal error:\033[37m no input files compilation terminated.", argv[0]);
  }
  printf("compale ...\n");
  return 0;
}
