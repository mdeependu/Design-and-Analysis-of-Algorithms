#include<stdio.h>


int patching(int arr[],int lb,int ub){
    int swap=0;
    int start,end,pivot;
    start=lb;
    end=ub;
    pivot=arr[lb];
    while(start<end){
        while(arr[start]<=pivot){
            start++;
        }
        while(arr[end]>pivot){
            end--;
        }
        if(start<end){
            swap=arr[start];
            arr[start]=arr[end];
            arr[end]=swap;
        }
    }
    swap=arr[lb];
    arr[lb]=arr[end];
    arr[end]=swap;
    
    return end;
}    

    



void quicksort(int arr[],int lb,int ub){
    
    //printf("%d %d",lb,ub);
  
    
    if(lb<ub){
        int lock=patching(arr,lb,ub);
        quicksort(arr,lb,lock-1);
        quicksort(arr,lock+1,ub);
    }
}



int main()
{
	int arr[30],n,i;
	printf("Enter no of elements:");
	scanf("%d",&n);
	printf("Enter array elements:");
	
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	quicksort(arr,0,n-1);
	
	printf("\nSorted array is :");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
		
	return 0;
}