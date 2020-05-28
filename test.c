#include <stdio.h>
int my_strlen(char *a);
int *my_atoi(char *a);
int main()
 {
   char *a;
   scanf("%s",a);
   int kol=my_strlen(a);
   printf("%d\n",kol);
   printf("%s","Num=");
   int num=*my_atoi(a);
   printf("%d\n",num);
 }
 int *my_atoi(char *a)
 {

   return 0;
 }
 int my_strlen(char *a)
 {
   int col,i=0;
   while (a[i]!='\0')
    {
      col++;
      i++;
    }
   return col;
 }
