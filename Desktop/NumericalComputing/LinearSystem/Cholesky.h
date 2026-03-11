#ifndef CHOLESKY_H
#define CHOLESKY_H


#include "LUDecomposition.h"

class Cholesky:public LUDecomposition
{
    public:
        Cholesky(int sz);
        void decompose(ofstream &fout);
};

#endif