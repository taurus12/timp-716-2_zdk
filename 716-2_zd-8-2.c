#include <stdio.h> 
#include <stdlib.h> 

void siftDown(int arr[], int beg, int alter)
{ 
     int max=0,done=0; 
     while ((beg*2<=alter) && (!done))
     { //пока не последний ряд 
         if (beg*2==alter) //последний ряд 
             max=beg*2; //левый потомок 
        else if (arr[beg*2]>arr[beg*2+1])max=beg*2; //больший потомок из двух 
        else max=beg*2+1; 
        if (arr[beg]<arr[max])
        { //если элемент вершины меньше максимального потомка 
            int temp=arr[beg]; 
            arr[beg]=arr[max]; 
            arr[max]=temp; 
            beg=max; 
        } 
        else done=1; //пирамида сформирована 
     } 
} 

void sort(int arr[], int raz)
{ 
    int temp=0; 
    for(int i=(raz/2)-1; i>=0; i--) 
       siftDown(arr,i,raz); 
    for(int i=raz-1; i>0; i--)
    { 
        temp=arr[0]; 
        arr[0]=arr[i]; 
        arr[i]=temp; 
        siftDown(arr,0,i-1); 
    }
} 

int main()
{ 
    int r; 
    scanf("%d",&r); 
    int arr[r]; 
    for(int i=0;i<r;i++)
    { 
      scanf("%d",&arr[i]); 
    } 
 
     sort(arr,r); 
     for(int i=0;i<r;i++) 
         printf("%d ",arr[i]); 
     printf("\n"); 
return 0; 
}
