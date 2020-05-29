#include "my_lib.h"
#include "my_function.h"
int main()
{
  char a[99];
  scanf("%s",a);
  int kol = my_strlen(a);
  int *d = (int *)malloc(sizeof(int) * kol);
  *d = my_atoi(a,kol);
  printf("%d\n",*d);
  free(d);
  exit(0);
}
