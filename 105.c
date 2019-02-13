#include<stdio.h>

int main() {
   int a,b,c[100],k=0,i;
   scanf("%d%d",&a,&b);
   c[k]=a;
   k++;
   c[k]=b;
   k++;
   for(i=0;i<k;i++)
   {
   printf("%d",c[i]);
   }
   return 0;
}
