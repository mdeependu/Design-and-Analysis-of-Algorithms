#include<stdio.h>
int main()
{
   printf("Enter the number of items in a Knapsack:");
   int n,MAXW,i;
   scanf("%d",&n);
   int cost[10],item[10];
   for(i=0;i<n;i++){
      printf("Enter value and weight for item %d : ",i+1);
      scanf("%d",&item[i]);
      scanf("%d",&cost[i]);
    }
   prinf("Enter the capacity of knapsack");
   scanf("%d",&MAXW);
   knapSack(MAXW,item,cost,n);
   return 0;
}
