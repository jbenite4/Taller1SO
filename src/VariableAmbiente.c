/* VariableAmbiente.c */
#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[]) {

  char *env; /* Guarda la direcci�n de la variable */

  env = getenv("LPRINTER");

  printf("%s\n", env);
}
