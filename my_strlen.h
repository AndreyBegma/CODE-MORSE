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
