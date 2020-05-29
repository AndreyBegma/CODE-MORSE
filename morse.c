#include "my_lib.h"
#include "my_function.h"
int main()
{
  char str[99];
  scanf("%s",str);
  int kol = my_strlen(str);
  printf("%d\n",kol);
  for (int i=0;i<kol;i++)
  {
    if (str[i]=='.' && str[i+1]=='-' && i+1<=kol)
    {
      printf("%s","a");
      i=i+2;
    }
    if (str[i]=='-' && str[i+1]=='.' && str[i+2]=='.' && str[i+3]=='.' && i+3<=kol)
     {
       printf("%s","b");
       i=i+4;
     }
    if (str[i]=='-' && str[i+1]=='.' && str[i+2]=='-' && str[i+3]=='.' && i+3<=kol)
     {
       printf("%s","c");
       i=i+4;
     }
  }
}
