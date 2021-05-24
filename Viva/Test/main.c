#include<stdio.h>
int main()
{
    int process,i,j,c=1,swap;
    printf("Enter number of processes: ");
    scanf("%d",&process);

    int start[process];
    int finish[process];
    int index[process];

    printf("Enter start times:\n");
    for(i=0;i<process;i++)
    {
        scanf("%d",&start[i]);
    }

    printf("Enter finish times:\n");
    for(i=0;i<process;i++)
    {
        scanf("%d",&finish[i]);
    }

    for(i=0;i<process;i++)
    {
        index[i]=c++;
    }

    for(i=0;i<process-1;i++)
    {
        for(j=0;j<process-1;j++)
        {
            if(finish[j]>finish[j+1])
            {
                swap=finish[j];
                finish[j]=finish[j+1];
                finish[j+1]=swap;

                swap=start[j];
                start[j]=start[j+1];
                start[j+1]=swap;

                swap=index[j];
                index[j]=index[j+1];
                index[j+1]=swap;
            }
        }
    }

    printf("\n");
    printf("Activities: ");
    for(i=0;i<process;i++)
    {
        printf("%d ",index[i]);
    }
    printf("\n");

    return 0;
}
