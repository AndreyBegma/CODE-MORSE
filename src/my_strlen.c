
int my_strlen(const char *b)
{
  int col=0;
  int i=0;
  while (b[i]!='\0')
   {
     col++;
     i++;
   }
   return col;
}
