//lab 21
//bubblesort
#include <stdio.h>
#include <conio.h>

void bubble(int a[100],int n)
{
    int i,j,temp;
    int k;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
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
    bubble(a,n);
    printf("\n\n\n");
    printf("\n Elements after sort:\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    getch();
}
