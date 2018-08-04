#include<stdio.h>

void main()
{
    int n,i,k,j,a[20],size;
    printf("enter the size");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("enter the elements a[%d]",i);
    scanf("%d",&a[i]);
    }

        for(i=0,j=1,k=2;k<=n;i++,j++,k++)
        {
            if(a[i]>a[j])
            {
                if(a[i]>a[k])
                    printf("%d",a[i]);
            }
                else
                {
                    if(a[j]<a[k])
                        printf("%d",a[k]);
                    else
                        printf("%d",a[j]);
                }

            }
        }

