#include<iostream>
#include<cmath>
#include <fstream>
#include "Matrix.h"
using namespace std;

Matrix::Matrix()
{
    n=0;
}

Matrix::Matrix(int sz)
{
    n=sz;
    a.resize(n,vector<double>(n+1));
}

Matrix::Matrix(const Matrix &m)
{
    n=m.n;
    a=m.a;
}

Matrix::~Matrix()
{}

int Matrix::sz() const
{
    return n;
}

void Matrix::readFromFiles(ifstream &left,ifstream &right)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            left >> a[i][j];
        right >> a[i][n];
    }
}

void Matrix::writeSolution(ofstream &out,const vector<double>&x)
{
    cout<<"solution\n";
    for (int i=0;i<n;i++)
        cout<<"x"<<i+1<<"="<<x[i]<<endl;
}

void Matrix::display(){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

Matrix Matrix::operator+(const Matrix& m)
{
    if(n!=m.n)
         throw "Matrix size mismatch";

    Matrix sum(n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            sum.a[i][j] = a[i][j] + m.a[i][j];
    }
    return sum;
}

 Matrix Matrix::operator-(const Matrix& m)
{
    if(n!=m.n)
        throw "Matrix size mismatch";

    Matrix sub(n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            sub.a[i][j] = a[i][j] - m.a[i][j];
    }
    return sub;
}

