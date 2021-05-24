/*#include <stdio.h>
int main()
{
  int a[10],temp,i,n;

  printf("Number of Elements :\n");
  scanf("%d",&n);

  printf("Enter the Elements :\n");

  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

  printf("Enter the element to search\n");
  scanf("%d", &temp);
  for (i = 0; i < n; i++)
  {
    if (a[i] == temp)
    {
      printf("%d is present at location %d.\n",temp, i+1);
      break;
    }
  }
  if (i == n)
    printf("%d is not present in the array.\n",temp);

  return 0;
}
*/

#include<stdio.h>
#include<string.h>

void match(char*pattern, char*text)
{
    int p = strlen(pattern);
    int t = strlen(text);
    int i;
    for (i=0; i<=t-p; i++)
    {
        int j;
        for (j=0; j<p; j++)
        {
            if (text[i+j] != pattern[j])
            {
                break;
            }
        }
        if (j==p)
            printf("Pattern found at index %d\n",i);

    }
}

int main()
{
    char text[] = "deependu";
    char pattern[] = "en";
    match(pattern, text);
    return 0;
}
