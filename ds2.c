#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10],i,n,element;
	printf("enter array size:"); 
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter elements to search:");
	scanf("%d",&element);
	for(i=0;i<n;i++){
		if(arr[i]==element){
			printf("%d found at position %d",element,i+1);
		}
		else {
	        printf("element not found");
		}
		
    }    
}
		
	
	
