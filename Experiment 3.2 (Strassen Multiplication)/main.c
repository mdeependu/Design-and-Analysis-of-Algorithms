#include <stdio.h>

int main ()
{
    int a[2][2];
    int b[2][2];
    int i,j;

    printf("Enter the Elements of First Matrix:\n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    Array_A(i,j,a);

    printf("\nEnter the Elements of Second Matrix:\n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    Array_B(i,j,b);

    printf("\nResultant Matrix:\n");
    multiply(a,b,2);
    return 0;
}


void Array_A(int i,int j,int a[2][2])
{
    int m,n;
    printf("Array A:\n");
    for(m=0;m<2;m++)
     {
          for(n=0;n<2;n++)
          {
              printf("%d",a[m][n]);
          }
          printf("\n");
     }
}

void Array_B(int i,int j,int b[2][2])
{
    int m,n;
    printf("Array B:\n");
    for(m=0;m<2;m++)
     {
          for(n=0;n<2;n++)
          {
              printf("%d",b[m][n]);
          }
          printf("\n");
     }
}

void multiply(int a[2][2],int b[2][2],int n)
{
    int c[2][2];
    if (n==2)
    {
        c[0][0]=a[0][0]*b[0][0]+a[0][1]*b[1][0];
        c[0][1]=a[0][0]*b[0][1]+a[0][1]*b[1][1];
        c[1][0]=a[1][0]*b[0][0]+a[1][1]*b[1][0];
        c[1][1]=a[1][0]*b[0][1]+a[1][1]*b[1][1];
        printf("%d %d\n",c[0][0],c[0][1]);
        printf("%d %d\n",c[1][0],c[1][1]);
    }
}
