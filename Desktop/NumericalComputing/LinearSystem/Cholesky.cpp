#include<iostream>
#include<vector>
#include<cmath>
#include "Cholesky.h"
using namespace std;

Cholesky::Cholesky(int sz):LUDecomposition(sz)
{}

void Cholesky::decompose(ofstream &fout)
{
    int n=rows;
    vector<vector<double>>L(n,vector<double>(n,0));
    
    if(isSymetric())
        throw "Matrix is not symmetric";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            double sum=0;
            for(int k=0;k<j;k++)
                sum += L[i][k]*L[j][k];
            if(i==j)
            {
                L[i][j]=sqrt(a[i][i]-sum);
                 if(L[i][j] <= 0)
                    throw "Matrix is not positive definite";
            }
            else    
                L[i][j]=(a[i][j]-sum)/L[j][j];
        }
    }
    fout<<"cholesky L matrix is:"<<endl;
    for(auto &row:L)
    {
        for(auto val:row)
            fout<<val<<" ";
        fout<<endl;
    }
}