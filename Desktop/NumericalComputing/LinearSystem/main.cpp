#include<iostream>
#include<fstream>
#include "LinearSystem.h"
using namespace std;

int main()
{
    ifstream leftFile("49/lf.txt");
    ifstream rightFile("49/rt.txt");
    ofstream outputFile("49/output.txt");

    if(!leftFile || !rightFile)
    {
        cout<<"Error opening file\n";
        return 1;
    }

    int n;
    leftFile >> n;

    int choice;

    cout<<"1. Without Pivot\n";
    cout<<"2. Partial Pivot\n";
    cout<<"3. LU - Crout\n";
    cout<<"4. LU - Doolittle\n";
    cout<<"5. LU - Cholesky\n";
    cout<<"Enter choice: ";
    cin>>choice;

    try
    {
        // Matrix A(n);
        // Matrix B(n);
        // A.readFromFiles(leftFile,rightFile);
        // B.readFromFiles(leftFile,rightFile);
        // Matrix add = A + B;
        // Matrix sub = A - B;

        // cout<<"Addition Result:\n";
        // add.display();

        // cout<<"Subtraction Result:\n";
        // sub.display();
        
        if(choice==1 || choice==2)
        {
            GaussianElimination* GE;

            if(choice==1)
                GE = new WithoutPivot(n);
            else
                 GE = new PartialPivot(n);

            GE->readFromFiles(leftFile,rightFile);
            GE->forwardElimination();
            vector<double> solution =  GE->backSubstitution();
            GE->writeSolution(outputFile,solution);

            delete  GE;
        }
        else
        {
            LUDecomposition LU(n);
            LU.readFromFiles(leftFile,rightFile);

            if(choice==3)
                LU.crout();
            else if(choice==4)
                LU.doolittle();
            else if(choice==5)
                LU.cholesky();
        }

        cout<<"Operation completed. Check output.txt\n";
    }
    catch(const char* msg)
    {
        outputFile<<"Error: "<<msg<<endl;
        cout<<"Error occurred\n";
    }

    leftFile.close();
    rightFile.close();
    outputFile.close();

    return 0;
}