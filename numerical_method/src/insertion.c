//lab 22
//insertion sort
#include <stdio.h>
#include <conio.h>

void insertion(int a[100],int n)
{
    int i,j,temp;
    int k;
   for(i=1;i<n;i++)
   {
        temp = a[i];
        for(j=i-1;j>=0 && a[j]>temp;j--)
        {
            a[j+1] = a[j];
        }
        a[j+1] = temp;
    

        printf("\n After %d pass\t",i+1);
        for(k=0;k<n;k++)
        {
            printf("%d\t",a[k]);
        }
    }
    }

int main()
{
    int a[100],n,i;
    printf("Enter no of elements\n");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements before sort:\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n\n\n");
    insertion(a,n);
    printf("\n\n\n");
    printf("\n Elements after sort:\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    getch();
}
