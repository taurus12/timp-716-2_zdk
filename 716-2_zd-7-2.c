#include <stdio.h> 
#include <stdlib.h> 

void ShellSort(int r,int mass[])
{ 
    int i,j,step,ptr; 
    for(step=r/2;step>0;step/=2)
    { 
        for(i=step;i<r;i++) 
        { 
           ptr=mass[i]; 
           for(j=i;j>=step;j-=step)
           { 
               if(ptr<mass[j-step])mass[j]=mass[j-step]; 
               else break;
           } 
       mass[j]=ptr; 
        } 
    } 
} 

int main()
{ 
    int r; 
    scanf("%d",&r); 
    int arr[r]; 
    for(int i=0;i<r;i++)
    {scanf("%d",&arr[i]);} 
       ShellSort(r,arr); 

       for(int i=0;i<r;i++){printf("%d ",arr[i]);} 
       printf("\n"); 
return 0; 
}
