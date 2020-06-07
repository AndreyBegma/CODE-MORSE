#include "my_lib.h"
#include "my_function.h"
int main(int argc, char *argv[])
{
  printf ("%d\n",argc);

  scanf("%s",str);
  int kol = my_strlen(str);
  printf("%d\n",kol);
  for (int i=0;i<kol;i++)
  {
    if (str[i] == '-' && str[i+1] == '.' && str[i+2] == '.' && str[i+3] == '.' && i+3<=kol) {printf("%c",'b');i=i+4;}
    if (str[i] == '-' && str[i+1] == '.' && str[i+2] == '-' && str[i+3] == '.' && i+3<=kol) {printf("%c",'c');i=i+4;}
    if (str[i] == '.' && str[i+1] == '.' && str[i+2] == '-' && str[i+3] == '.' && i+3<=kol) {printf("%c",'f');i=i+4;}
    if (str[i] == '.' && str[i+1] == '.' && str[i+2] == '.' && str[i+3] == '.' && i+3<=kol) {printf("%c",'h');i=i+4;}
    if (str[i] == '.' && str[i+1] == '-' && str[i+2] == '-' && str[i+3] == '-' && i+3<=kol) {printf("%c",'j');i=i+4;}
    if (str[i] == '.' && str[i+1] == '-' && str[i+2] == '.' && str[i+3] == '.' && i+3<=kol) {printf("%c",'l');i=i+4;}
    if (str[i] == '.' && str[i+1] == '-' && str[i+2] == '-' && str[i+3] == '.' && i+3<=kol) {printf("%c",'p');i=i+4;}
    if (str[i] == '-' && str[i+1] == '-' && str[i+2] == '.' && str[i+3] == '-' && i+3<=kol) {printf("%c",'q');i=i+4;}
    if (str[i] == '.' && str[i+1] == '.' && str[i+2] == '.' && str[i+3] == '-' && i+3<=kol) {printf("%c",'v');i=i+4;}
    if (str[i] == '-' && str[i+1] == '.' && str[i+2] == '.' && str[i+3] == '-' && i+3<=kol) {printf("%c",'x');i=i+4;}
    if (str[i] == '-' && str[i+1] == '.' && str[i+2] == '-' && str[i+3] == '-' && i+3<=kol) {printf("%c",'y');i=i+4;}
    if (str[i] == '-' && str[i+1] == '-' && str[i+2] == '.' && str[i+3] == '.' && i+3<=kol) {printf("%c",'z');i=i+4;}
    if (str[i] == '-' && str[i+1] == '.' && str[i+2] == '.' && i+2<=kol) {printf("%c",'d');i=i+3;}
    if (str[i] == '-' && str[i+1] == '.' && str[i+2] == '-' && i+2<=kol) {printf("%c",'k');i=i+3;}
  }
  printf("%s\n",str);
}
