
#include<stdio.h>
int main()
{
    int a, b, k, n, x;
    scanf("%d", &n);
    scanf("%d", &a);
    k=1; x=1; 
      while(x<=n-1)
      { 
        scanf("%d", &b);
	if(a<=b)
	k++; a=b; x++;
      };
	if(k==n)
	printf("%d\n",0);
	else printf("%d\n",1);
}
