#include<stdio.h>
int main()
{
 int t;
  scanf("%d",&t);
  while(t--)
  {


 int i,fact=1,number;    

  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("%d\n",fact);

}
return 0;
}