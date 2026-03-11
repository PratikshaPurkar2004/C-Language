#include<iostream>
#include<vector>
#include "Crout.h"

Crout ::Crout(int sz):LUDecomposition(sz)
{   }

void Crout::decompose(ofstream &fout)
{
    int n=rows;
    vector<vector<double>>L(n,vector<double>(n,0));
    vector<vector<double>>U(n,vector<double>(n,0));
    for(int i=0;i<n;i++)
        U[i][i]=1;
    for(int j=0;j<n;j++)
    {
        for(int i=j;i<n;i++)
        {
            double sum=0;
            for(int k=0;k<j;k++)
                sum+=L[i][k]*U[k][j];
            L[i][j]=a[i][j]-sum;
        }
        for(int i=j+1;i<n;i++)
        {
            double sum=0;
            for(int k=0;k<j;k++)
                sum+=L[j][k]*U[k][i];
            U[j][i]=(a[j][i]-sum)/L[j][j];
        }
    }
    fout<<"\n crout L matrix is:"<<endl;
    for(auto & row:L)
    {
        for(auto val:row)
            fout<<val<<" ";
        fout<<endl;
    }
    fout<<"\n crout U matrix is:"<<endl;
    for(auto &row:U)
    {
        for(auto & val:row)
            fout<<val<<" ";
        fout<<endl;
    }
}
