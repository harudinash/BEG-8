#include<stdio.h>

int main() {
   int n,k,i,t=0;
   scanf("%d%d",&n,&k);
   t=n;
   for(i=1;i<k;i++)
   {
       n=n*t;
   }
   printf("%d",n);
   return 0;
}
