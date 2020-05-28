#include <stdio.h>
#include <stdlib.h>
int my_strlen(char b[99]);
int my_atoi(char c[99]);
int main()
{
  char a[99];
  scanf("%s",a);
  int kol = my_strlen(a);
  int *d = (int *)malloc(sizeof(int) * kol);
  *d = my_atoi(a);
  printf("%d\n",*d);
  free(d);
  exit(0);
}
int my_strlen(char b[99])
{
  int col,i=0;
  while (b[i]!='\0')
   {
     col++;
     i++;
   }
   return col;
}
int my_atoi(char b[99])
{
  int d=0;
  if(b[0]!='\0')
    {
      int k=0;
      while(b[k]!='\0')
      {
        if (b[k]=='1'){d=d*10+1;}
        if (b[k]=='2'){d=d*10+2;}
        if (b[k]=='3'){d=d*10+3;}
        if (b[k]=='4'){d=d*10+4;}
        if (b[k]=='5'){d=d*10+5;}
        if (b[k]=='6'){d=d*10+6;}
        if (b[k]=='7'){d=d*10+7;}
        if (b[k]=='8'){d=d*10+8;}
        if (b[k]=='9'){d=d*10+9;}
        k++;
      }
    }
    return d;
}
