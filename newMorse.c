#include "my_lib.h"
#include "my_function.h"

int main(int argc, char *argv[])
{
  printf("%s","Argc=");
  printf("%d\n",argc);
  int strlength;
  for (int i=1;i<argc;i++)
  {
      char *str = argv[i];
      strlength = my_strlen(str);
      //printf("%s\n",str);
      //printf("%s","Strlength=");
      //printf("%d\n",strlength);
      check_morse(str,strlength);
      //printf("%s\n",str);
  }
}
