#include<iostream>
#include<cmath>
#include <fstream>
#include "LinearSystem.h"
using namespace std;

GaussianElimination::GaussianElimination(int sz) : Matrix(sz)
{}

void GaussianElimination::forwardElimination()
{
    for(int k=0;k<n;k++)
    {
        pivot(k);
        if(a[k][k]==0)
            throw "zero pivot";
        for(int i=k+1;i<n;i++)
        {
            double factor=a[i][k]/a[k][k];
            for(int j=k;j<=n;j++)
                a[i][j]-=factor*a[k][j];
        }

    }
}

vector<double> GaussianElimination::backSubstitution()
{
    vector <double>x(n);
    for(int i=n-1;i>=0;i--)
    {
        x[i]=a[i][n];
        for(int j=i+1;j<n;j++)
            x[i]-=a[i][j]*x[j];
        x[i]/=a[i][i];
    }
    return x;
}

WithoutPivot::WithoutPivot(int sz):GaussianElimination(sz)
{}

void WithoutPivot::pivot(int k)
{}

PartialPivot::PartialPivot(int sz):GaussianElimination(sz)
{}

void PartialPivot::pivot(int k)
{
    int maxRow=k;
    for(int i=k+1;i<n;i++)
    {
        if(fabs(a[i][k])>fabs(a[maxRow][k]))
            maxRow=i;
    }
    if(maxRow!=k)
        swap(a[k],a[maxRow]);
}

LUDecomposition::LUDecomposition(int sz):Matrix(sz)
{}

void LUDecomposition::crout()
{
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
    cout<<"\n crout L matrix is:"<<endl;
    for(auto & row:L)
    {
        for(auto val:row)
            cout<<val<<" ";
        cout<<endl;
    }
    cout<<"\n crout U matrix is:"<<endl;
    for(auto &row:U)
    {
        for(auto & val:row)
            cout<<val<<" ";
        cout<<endl;
    }
}

void LUDecomposition::doolittle()
{
    vector<vector<double>>L(n,vector<double>(n,0));
    vector<vector<double>>U(n,vector<double>(n,0));
    for(int i=0;i<n;i++)
        L[i][i]=1;
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<=j;i++)
        {
            double sum=0;
            for(int k=0;k<i;k++)
                sum+=L[i][k]*U[k][j];
            U[i][j]=a[i][j]-sum;
        }
        for(int i=j+1;i<n;i++)
        {
            double sum=0;
            for(int k=0;k<j;k++)
                sum+=L[i][k]*U[k][j];
            L[i][j]=(a[i][j]-sum)/U[j][j];
        }
    }
    cout<<"\n Doolittle L matrix is:"<<endl;
    for(auto &row:L)
    {
        for(auto & val:row)
            cout<<val<<" ";
        cout<<endl;
    }
    cout<<"\n Doolittle U matrix is:"<<endl;
    for(auto &row:U)
    {
        for(auto & val:row)
            cout<<val<<" ";
        cout<<endl;
    }
}

void LUDecomposition::cholesky()
{
    vector<vector<double>>L(n,vector<double>(n,0));
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            double sum=0;
            for(int k=0;k<j;k++)
                sum += L[i][k]*L[j][k];
            if(i==j)
                L[i][j]=sqrt(a[i][i]-sum);
            else    
                L[i][j]=(a[i][j]-sum)/L[j][j];
        }
    }
    cout<<"cholesky L matrix is:"<<endl;
    for(auto &row:L)
    {
        for(auto val:row)
            cout<<val<<" ";
        cout<<endl;
    }
}

