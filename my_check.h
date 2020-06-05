void check_morse(const char *str, int kol)
{
  printf("%d\n",kol);
  for (int i=0;i<=kol;i++)
  {
    if (str[i] == 32 && str[i+1] == 32 && str[i+2] == 32 && str[i+3] == 32 && str[i+4] == 32 && str[i+5] == 32){printf("%c",32);i=i+6;}
    if (str[i] == '.' && str[i+1] == '.' && str[i+2] == '.' && str[i+3] == '.' && str[i+4] == '.' && i+3<=kol) {printf("%c",'.');i=i+6;}
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
    if (str[i] == '-' && str[i+1] == '-' && str[i+2] == '.' && i+2<=kol) {printf("%c",'g');i=i+3;}
    if (str[i] == '-' && str[i+1] == '.' && str[i+2] == '-' && i+2<=kol) {printf("%c",'k');i=i+3;}
    if (str[i] == '-' && str[i+1] == '-' && str[i+2] == '-' && i+2<=kol) {printf("%c",'o');i=i+3;}
    if (str[i] == '.' && str[i+1] == '-' && str[i+2] == '.' && i+2<=kol) {printf("%c",'r');i=i+3;}
    if (str[i] == '.' && str[i+1] == '.' && str[i+2] == '.' && i+2<=kol) {printf("%c",'s');i=i+3;}
    if (str[i] == '.' && str[i+1] == '.' && str[i+2] == '-' && i+2<=kol) {printf("%c",'u');i=i+3;}
    if (str[i] == '.' && str[i+1] == '-' && str[i+2] == '-' && i+2<=kol) {printf("%c",'w');i=i+3;}
    if (str[i] == '.' && str[i+1] == '-' && i+2<=kol) {printf("%c",'a');i=i+2;}
    if (str[i] == '.' && str[i+1] == '.' && i+2<=kol) {printf("%c",'i');i=i+2;}
    if (str[i] == '-' && str[i+1] == '-' && i+2<=kol) {printf("%c",'m');i=i+2;}
    if (str[i] == '-' && str[i+1] == '.' && i+2<=kol) {printf("%c",'n');i=i+2;}
    if (str[i] == '.' && i+1<=kol) {printf("%c",'e');i=i+1;}
    if (str[i] == '-' && i+1<=kol) {printf("%c",'t');i=i+1;}
  }
}
