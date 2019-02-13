#include<stdio.h>

int main() {
  char a[100];
  int i,l=0;
  scanf("%[^\n]",&a);
  for(i=0;a[i]!='\0';i++)
  {
      a[0]=a[0]-32;
      break;
  }
  for(i=1;a[i]!='\0';i++)
  {
      if(a[i]==' ')
      {
         a[i+1]=a[i+1]-32;
      }
  }
      printf("%s",a);
  return 0;
}
  
