#include<stdio.h>

void max_act(int start_time[], int finish_time[], int n)
{
    int i, j;

    printf("Activities Selected are:\n");

    i = 0;
    printf("%d ", i);

    for (j=1; j<n; j++)
        {
            if (start_time[j]>=finish_time[i])
                {
                    printf ("%d ",j);
                    i=j;
                }
        }
}

int main()
{
    int start_time[] = {2, 5, 3, 1, 4, 9};
    int finish_time[] = {0, 4, 6, 7, 9, 8};
    int n = sizeof(start_time)/sizeof(start_time[0]);
    max_act(start_time, finish_time, n);
    return 0;
}

