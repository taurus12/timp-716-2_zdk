#include <stdio.h>
#include <stdlib.h>
void sort(int n, int m[], int *sr,int *p)
	{
	int s=n-1,c;
	while(s>=1){
	for(int i=0;i+s<n;++i)
		{ (*sr)++;
		if(m[i]>m[i+s])
		{
		c=m[i];
		m[i]=m[i+s];
		m[i+s]=c;
		(*p)++;
		}
		}
	s--;
		}
	}

int main()
{
	int sr,p;
	double srSr=0,srPr=0;
	for(int ch=0;ch<100;ch++)
	{
//		int n=15;
		sr=0,p=0;
		int m[n];
		for(int i=0;i<n;i++)
		{ m[i]=rand()%(2*n)+1; }
		sort(n,m,&sr,&p);
for(int i=0;i<n;i++){ printf("%d ", m[i]); }//отсортированный массив
printf("\n");
printf("Sravneniy: %d\n",sr);
printf("Perestanovok: %d\n",p);
		srSr+=sr;
		srPr+=p;
	}
//		srSr=srSr/100;
//		srPr=srPr/100;
//		printf("Srednee Sravn: %.0f\n",srSr);
//		printf("Srednee Perest: %.2f\n",srPr);
		return 0 ;
}
