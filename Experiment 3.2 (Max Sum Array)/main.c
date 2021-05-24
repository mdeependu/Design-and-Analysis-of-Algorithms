#include <stdio.h>

int max_sum(int a[50],int n)
{
    int p;
    int q;
    int r;
    int sum;
    int max_sum = 0;
    for(p=0; p<n; p++)
        {
            for(q=p; q<n; q++)
            {
                sum = 0;
                for(r=p ; r<q; r++)
                    {
                        sum = sum + a[r];
                    }
                if(sum>max_sum)
                    {
                        max_sum = sum;
                    }
            }
        }
   return max_sum;
}

int main()
{
    int i;
    int a[50];
    int element;
    printf("How many elements you want to insert in the array?\n");
    scanf("%d",&element);
    printf("Enter the elements:\n");
    for(i=0;i<element;i++)
        {
            scanf("%d", &a[i]);
        }
    printf("Maximum Sub-Array Sum is : %d \n", max_sum(a, element));
    return 0;
}
