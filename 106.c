#include<stdio.h>

int main() {
   int N,n,k=0,h=0,d[100],i;
   int a[100],c[100];
   scanf("%d%d",&N,&n);
   for(i=0;i<N;i++)
   {
      
      
      
       scanf("%d",&a[i]);
       c[k]=a[i];
      k++; 
   }
   for(i=0;i<k;i++)
   {
       if(c[i]%2!=0)
       {
           d[h]=c[i];
           h++;
       }
   }
       for(i=n-1;i<n;i++)
       {
       printf("%d",d[i]);
       }
   return 0;
}
   
