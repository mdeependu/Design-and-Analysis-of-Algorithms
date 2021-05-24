#include<stdio.h>

int partition(int array[], int low, int up);
void quicksort(int array[], int low, int up);

int main()
{
	int array[10];
	int n;
	int i;
	printf("Enter no of Elements : ");
	scanf("%d",&n);
	printf("Elements : \n");

	for(i=0;i<n;i++)
		scanf("%d",&array[i]);

	quicksort(array,0,n-1);

	printf("\nSorted array is : ");
	for(i=0;i<n;i++)
		printf("%d ",array[i]);

	return 0;
}

int partition(int array[], int low, int up)
{
    int swap = 0;
    int start;
    int end;
    int pivot;
    start = low;
    end = up;
    pivot = array[end];
    while(end>start)
        {
            while(array[end]>=pivot){
                end--;
        }
            while(array[start]<pivot){
                start++;
        }
        if(end>start){
            swap = array[start];
            array[start] = array[end];
            array[end] = swap;
        }
    }
    swap = array[start];
    array[start] = array[up];
    array[up] = swap;

    return start;
}

void quicksort(int array[], int low, int up)
{

    if(low<up)
     {
        int q = partition(array,low,up);
        quicksort(array,low,q-1);
        quicksort(array,q+1,up);
    }
}


