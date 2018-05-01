
#include <stdio.h>
int main()
{
   int a=0, i=1, n=0, raz=0;
   scanf("%d", &n);
   
   for(i=1; i<=n; i++)
    {
     scanf("%d", &a);
     a=a*(-1);
     raz=raz+a;
    }
    printf("%d\n",raz);
    return 0;
}
    
      
