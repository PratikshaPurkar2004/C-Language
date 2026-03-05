#include <vector>
#include<iostream>
#include<fstream>

using namespace std;

class Matrix{
    protected:
        int n;
        vector<vector<double>>a;

    public:
        Matrix();
        Matrix(int sz);
        Matrix(const Matrix &m);
        ~Matrix();
        void readFromFiles(ifstream &left, ifstream &right);
        void writeSolution(ofstream &out, const vector<double>& x);
        void display();
        Matrix operator+(const Matrix & m);
        Matrix operator-(const Matrix & m);
        Matrix operator*(const Matrix & m);
        int sz()const;
       // vector<vector<double>>getMatrix()const
};