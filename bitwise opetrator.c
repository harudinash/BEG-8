int i,j,t,p,q1,q2,q3;
  if(n>=k)
  {
      p=n;
  }
  else
     
     {
         p=k;
     } 
q1=0;
q2=0;
q3=0;

  for(i=p;i>0;i--)
  {
      for(j=i-1;j>0;j--)
      {
          t=i&j;
       //   printf("%d %d\n",i,j);
    if(t<k){      
        if(q1<t)
        {
          q1=t;  
        }
        
        
    }
         
      }
     // printf("\n");
  }
  t=0;
  for(i=p;i>0;i--)
  {
      for(j=i-1;j>0;j--)
      {
           t=i|j;
        
        if(t<k)
    {      
        if(q2<t)
        {
          q2=t;  
        }
      }
      }
      
  }
  t=0;
  //printf("\n");
  for(i=p;i>0;i--)
  {
      for(j=i-1;j>0;j--)
      {    
          t=i^j;
      
         if(t<k)
      {      
        if(q3<t)
        {
          q3=t;  
        }
          
      }
     }
      
      
  }
  
  printf("%d\n%d\n%d",q1,q2,q3);
