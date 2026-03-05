#include <vector>
#include<iostream>
#include<cmath>
#include "Matrix.h"
using namespace std;

class GaussianElimination:public Matrix
{
    public:
        GaussianElimination(int sz);
        virtual void pivot(int k)=0;
        void forwardElimination();
        vector<double>backSubstitution();
};

class WithoutPivot:public GaussianElimination
{
    public:
        WithoutPivot(int sz);
        void pivot(int k)override;
};

class PartialPivot:public GaussianElimination
{
    public:
        PartialPivot(int sz);
        void pivot(int k)override;
};

class LUDecomposition:public Matrix
{
    public:
        LUDecomposition(int sz);
        void crout();
        void doolittle();
        void cholesky();
        //void decompose()override{}
};