#include<stdio.h>

int main(){
    int array[100];
    int n;
    int i;
    int first,last,ele;
	printf("Enter no of elements:\n");
	scanf("%d",&n);
	printf("Enter elements:\n");
	i=0;
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
    printf("enter the element you want to search:\n");
    ele=0;
    scanf("%d",&ele);
    first=0;
    last=n;
    insertion_sort(array,8);
    printf("\nSorted array is :\n");
	for(i=0;i<n;i++)
		printf("\n%d ",array[i]);
    int result=binary_search(array,ele,first,last);
    printf("\nposition of element: %d",result);

}

int binary_search(int array[],int ele,int first,int last){
    int mid=(first+last)/2;
    if (array[mid]==ele){
        return mid+1;
    }
    else if(array[mid]>ele){
        return binary_search(array,ele,first,mid);
    }
    else {
        return binary_search(array,ele,mid+1,last);
    }
return 0;
}

void insertion_sort(int array[],int n){

    int ele,first,up;
    for (first= 1;first<n;first++){
        ele = array[first];
        up=first-1;
        while(up>=0 && array[up]>ele){
            array[up+1]=array[up];
            up=up-1;
        }
        array[up+1]=ele;
    }
}
