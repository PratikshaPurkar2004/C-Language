#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j;
	printf("enter size of array::");
	scanf("%d",&n );
	
	int *a = (int *)malloc(sizeof (int)*n);
	int *ans = (int *)malloc(sizeof(int)*2*n);
	
	printf("enter a array elements::");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n;i++)
	{	
		ans[i]=a[i];
		ans[i+n]=a[i];
	}
	for(i=0;i<2*n;i++)
		printf("%d\t",ans[i]);
	free(a);
	free(ans);
	return 0;
}
				