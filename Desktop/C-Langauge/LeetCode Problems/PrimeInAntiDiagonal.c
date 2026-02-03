#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int isPrime(int n)
{
    if(n<2)
        return 0;
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("enter a mat elements::");
    scanf("%d",&n);
    
    int mat[n][n];
    printf("enter an array elements::");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&mat[i][j]);
    }


    int largest_prime=0;
    for(int i=0;i<n;i++)
    {
        if(isPrime(mat[i][n-i-1]))
        {
            if(largest_prime<mat[i][n-i-1])
                largest_prime=mat[i][n-i-1];
        }
    }
    printf("largest prime is::%d",largest_prime);
    return 0;
}