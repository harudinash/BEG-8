#include<stdio.h>
int main()
{
 char a[100];
 scanf("%[^\n]",&a);
 if(printf("%s",a))
 return 0;
}
