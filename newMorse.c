#include "my_lib.h"
#include "my_function.h"
int main(int argc, char *argv[])
{
  int strlength;
  for (int i=1;i<argc;i++)
  {
      char *str = argv[i];
      strlength = my_strlen(str);
      int error_flag = error_check(str,strlength);
      if (error_flag!=0)
      {
        break;
      }
      //printf("%s\n",str);
      //printf("%s","Strlength=");
      check_morse(str,strlength);
      //printf("%s\n",str);
  }
}
