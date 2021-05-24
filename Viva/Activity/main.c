#include<stdio.h>

void max_act(int start_time[],int finish_time[],int n);

int main()
{
    int start_time[6];
    int i;
    printf("Start Time:\n");
    for (i=0;i<6;i++)
    {
        scanf("%d",&start_time[i]);
    }
    int finish_time[6];
    int j;
    printf("Finish Time:\n");
    for (j=0;j<6;j++)
    {
        scanf("%d",&finish_time[j]);
    }
    int n = 6;
    max_act(start_time,finish_time,n);
    return 0;
}


void max_act(int start_time[],int finish_time[],int n)
{
    int i,j;

    printf("Activities :\n");

    i=0;
    printf("%d ",i);
    for (j=1;j<n;j++)
        {
            if (start_time[j]>=finish_time[i])
                {
                    printf("%d ",j);
                    i=j;
                }
        }
}
