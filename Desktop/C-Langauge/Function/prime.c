#include<stdio.h>
int isPrime(int n);
int main()
{
    int n;
  printf("enter num:");
  scanf("%d",&n);
  isPrime(n);  
  return 0;  
}

int isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            
            printf("Not Prime\n");
            
        }
        printf("is Prime\n");
    }
    
    return n;
}