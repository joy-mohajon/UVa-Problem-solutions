#include<stdio.h>

int insertionSort(int arr[], int n,int k)  
{  

    int i, key, j;  

    for (i = 1; i < n; i++) 

    {  

        key = arr[i];  

        j = i - 1;  

  
        while (j >= 0 && arr[j] > key) 

        {  

            arr[j + 1] = arr[j];  

            j = j - 1; k++; 

        }  

        arr[j + 1] = key;  

    }  
    return k;
}  

int main()
{
  int n,i;
  while(scanf("%d",&n)!=EOF){
    int ar[n+10],k=0;
    for(i=0;i<n;i++){
       scanf("%d",&ar[i]);
    }
   printf("Minimum exchange operations : %d\n",insertionSort(ar,n,k)) ;
  }
  return 0;
}