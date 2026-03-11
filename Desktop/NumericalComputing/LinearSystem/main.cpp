#include<iostream>
#include<fstream>
#include<vector>

#include "Matrix.h"
#include "GaussianElimination.h"
#include "Crout.h"
#include "Doolittle.h"
#include "Cholesky.h"

using namespace std;

int main()
{
    ifstream leftFile("49/lf.txt");
    ifstream rightFile("49/rt.txt");
    ofstream fout("output.txt");

    if(!leftFile || !rightFile)
    {
        fout<<"Error opening input files\n";
        return 1;
    }

    int r,c;

    /* ---------- Read Matrix A ---------- */

    leftFile >> r >> c;

    Matrix A(r,c);
    A.readFromFile(leftFile);

    fout<<"Matrix A\n";
    fout<<A<<endl;

    /* ---------- Transpose ---------- */

    fout<<"Transpose of A\n";
    Matrix T = A.transpose();
    fout<<T<<endl;

    /* ---------- Determinant and Inverse ---------- */

    if(A.isSquare())
    {
        fout<<"Determinant = "<<A.determinant()<<endl;

        try
        {
            Matrix inv = A.inverse();

            fout<<"\nInverse Matrix\n";
            fout<<inv;
        }
        catch(const char* msg)
        {
            fout<<msg<<endl;
        }
    }
    else
    {
        fout<<"Matrix is not square\n";
    }

    fout<<"\nTranspose Matrix\n";
    Matrix t = A.transpose();
    fout<<t;

    /* ---------- Matrix Operations ---------- */

    fout<<"\nMatrix Addition (A + A)\n";
    fout<<A + A << endl;

    fout<<"\nMatrix Subtraction (A - A)\n";
    fout<<A - A << endl;

    fout<<"\nMatrix Multiplication (A * A)\n";

    if(A.isSquare())
        fout<<A * A << endl;

    /* ---------- Gaussian Elimination ---------- */

    fout<<"\nGaussian Elimination (Partial Pivot)\n";

    leftFile.clear();
    rightFile.clear();

    leftFile.seekg(0);
    rightFile.seekg(0);

    leftFile >> r >> c;
    rightFile >> r;

    partialPivot ge(r);

    /* read matrix A */

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            leftFile >> ge(i,j);

    /* read RHS vector */

    for(int i=0;i<r;i++)
        rightFile >> ge(i,c);

    try
    {
        ge.forwardElimination();

        vector<double> x = ge.backSubstitution();

        fout<<"Solution Vector\n";

        for(int i=0;i<r;i++)
            fout<<"x"<<i+1<<" = "<<x[i]<<endl;
    }
    catch(const char* msg)
    {
        fout<<msg<<endl;
    }

    /* ---------- Crout ---------- */

    fout<<"\nCrout Method\n";

    leftFile.clear();
    leftFile.seekg(0);
    leftFile >> r >> c;

    Crout cr(r);
    cr.readFromFile(leftFile);
    cr.decompose(fout);

    /* ---------- Doolittle ---------- */

    fout<<"\nDoolittle Method\n";

    leftFile.clear();
    leftFile.seekg(0);
    leftFile >> r >> c;

    Doolittle dl(r);
    dl.readFromFile(leftFile);
    dl.decompose(fout);

    /* ---------- Cholesky ---------- */

    fout<<"\nCholesky Method\n";

    leftFile.clear();
    leftFile.seekg(0);
    leftFile >> r >> c;

    Cholesky ch(r);
    ch.readFromFile(leftFile);

    try
    {
        ch.decompose(fout);
    }
    catch(const char* msg)
    {
        fout<<msg<<endl;
    }

    leftFile.close();
    rightFile.close();
    fout.close();

    return 0;
}