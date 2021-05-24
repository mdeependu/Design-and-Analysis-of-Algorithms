#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int max(int a, int b) {
    return (a > b)? a : b;
}
int max(int a,int b,int c){
    return max(max(a, b), c);
}


int MAXCROSSSUM(int arr[],int start,int mid,int end){


    double L_max=-INFINITY;
    int sumL=0;
    for (int i=mid;i>=start;i--){
        sumL=sumL+arr[i];
        if (sumL>L_max){
            L_max=sumL;
        }
    }

    double R_max=-INFINITY;
    int sumR=0;
    for (int j=mid;j<=end;j++){
        sumR=sumR+arr[j];
        if (sumR>R_max){
            R_max=sumR;
        }

    }
    return max(L_max+R_max,L_max,R_max);

}


int maxsum(int arr[],int start,int end){
    if (start==end){
        return arr[start];
    }
    int mid=(start+end)/2;



    return max(maxsum(arr,start,mid),
        maxsum(arr, mid+1, end),
        MAXCROSSSUM(arr,start,mid,end));
}



int main(){
    int arr[30],n,i;
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("Enter array elements:");

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans=maxsum(arr,0,n-1);
    printf("Ans is : %d",ans);
    return 0;
}
