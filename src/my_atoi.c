#include "header.h"
int my_atoi(char b[99],int kol)
{
  int d=0;
  if(b[0]!='\0')
    {
      int k=0;
      for(int i=0;i<kol;i++)
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
