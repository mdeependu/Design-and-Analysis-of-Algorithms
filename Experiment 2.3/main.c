#include <stdio.h>

void merge_sort(int [], int, int, int);
void div(int [],int, int);

void div(int array[],int p,int q)
{
    int r;

    if(p<q)
    {
        r = (p+q)/2;
        div(array,p,r);
        div(array,r+1,q);
        merge_sort(array,p,r,q);
    }
}

void merge_sort(int array[],int p,int r,int q)
{
    int i, mid, up, low, temp[10];

    low  = p;
    i  =  p;
    mid  =  r+1;
    while ((low <= r) && (mid <= q))
    {
        if (array[low] <=  array[mid])
        {
            temp[i]  =  array[low];
            low++;
        }
        else
        {
            temp[i]  =  array[mid];
            mid++;
        }
        i++;
    }
    if (low>r)
    {
        for (up = mid; up<= q; up++)
        {
            temp[i]  =  array[up];
            i++;
        }
    }
    else
    {
        for (up = low; up<= r; up++)
        {
             temp[i]  =  array[up];
             i++;
        }
    }

    for (up  = p; up <= q; up++)
    {
        array[up]  =  temp[up];
    }
}
int main()
{
    int array[10];
    int i,n;

    printf("\nEnter no. of Elements : ");
    scanf("%d", &n);
    printf("\nEnter the Elements : \n");
    for(i  =  0; i <n; i++)
    {
         scanf("%d", &array[i]);
    }
    div(array,0,n - 1);
    printf("\nArray after Sorting : \n");
    for(i = 0;i<n; i++)
    {
         printf("%d ",array[i]);
    }

   return 0;
}
