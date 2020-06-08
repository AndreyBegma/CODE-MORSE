#include "header.h"
int error_check(const char *str, int amount)
{
  int error_fl = 0;
  for (int i=0;i<amount;i++)
  {
    if ((str[i] != '.' ) && (str[i]!= '-'))
    {
      printf("%s\n","Fuck");
    }
  }
    return error_fl;
}
