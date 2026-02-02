#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int isPrime(int n)
{
    if(n<2)
        return 0;
    for(int i=2;i<sqrt(2);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n,m;
    printf("enter a size of array::");
    scanf("%d",&n);
    int *nums=(int *)malloc(sizeof(int)*n);

    printf("enter an array elements::");
    for(int i=0;i<n;i++)
        scanf("%d",&nums[i]);


    int largest_prime=0;
    for(int i=0;i<n;i++)
    {
        if(isPrime(nums[i]))
        {
            if(largest_prime<nums[i])
                largest_prime=nums[i];
        }
    }
    printf("%d",largest_prime);
    free (nums);
    return 0;
}