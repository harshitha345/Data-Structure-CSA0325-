#include<stdio.h>
int main()
{
	int n,i,a[20];
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter array elements:\n");
    for(i=0;i<n;i++){
	    scanf("%d",&a[i]);
	}
	printf("even numbers in the array are:\n");
	for(i=0;i<n;i++){
		if(a[i]%2==0)
	    printf("%d",a[i]);
		}
		printf("\nodd numbers in the array are:\n");
		for(i=0;i<n;i++){
			if(a[i]%2!=0){
			printf("%d",a[i]);
			}
		}
			return 0;
		}


