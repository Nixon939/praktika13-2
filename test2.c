#include <stdio.h>
int main() {
FILE *fOut;
int a = 444;
fOut = fopen ("output.txt", "w");
  printf("Test v13.02: OK\n");
  fprintf(fOut, "%d\n", a);
  printf ("File created");
  fclose(fOut);      
 return 0;
}
