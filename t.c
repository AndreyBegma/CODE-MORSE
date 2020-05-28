#include <stdio.h>
int *coutint(char a[80]);
int *quantity(char a[80]);
int main()
{
	char a[80];
	scanf("%s",a);
	printf("%s\n",a);
	coutint(&a[80]);
	printf("%d\n",*quantity(&a[80]));
	return 0;
}
int *quantity(char *a)
{
	int countchar=0;
	int i=0;
	while(a++)
	{
		i++;
		countchar++;
	}
	return countchar;
}
int *coutint(char *a)
{
	return 0;
}
#include <stdio.h>
 int main()
 {
   char *a;
   scanf("%s",a);
   int col,i=0;
   while (a[i]!='\0')
    {
      col++;
      i++;
    }
   printf("%d\n",col);
   int d=0;
   if(a[0]!='\0')
     {
       int k=0;
       while(a[k]!='\0')
       {
         if (a[k]=='1'){d=d*10+1;}
         if (a[k]=='2'){d=d*10+2;}
         if (a[k]=='3'){d=d*10+3;}
         if (a[k]=='4'){d=d*10+4;}
         if (a[k]=='5'){d=d*10+5;}
         if (a[k]=='6'){d=d*10+6;}
         if (a[k]=='7'){d=d*10+7;}
         if (a[k]=='8'){d=d*10+8;}
         if (a[k]=='9'){d=d*10+9;}
         k++;
       }
     }
     printf("%s","Num=");
     printf("%d\n",d);
 }
