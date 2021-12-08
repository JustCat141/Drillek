#include "../std_lib_facilities.h"

void print_array10(ostream& os, int* a)
{
    for (int i = 0; i < 10; i++)
    {
        os << a[i] << ", ";
    }
    cout << endl;
}

void print_array(ostream& os, int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        os << a[i] << ", ";
    }
    cout << endl;
}

void print_vector(ostream& os, vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        os << v[i] << ", ";
    }
    cout << endl;
}

int main()
{

    int* ar1 = new int[10];
    for (int i = 0; i < 10; i++)
    {
        cout << ar1[i] << ", ";
    }
    cout << endl;
    delete[] ar1;


    //  10 elemű tömb + print_array()...
    int* ar2 = new int[10];
    for (int i = 0; i < 10; i++)
    {
        ar2[i] == 100+i;
    }
    
    print_array10(cout, ar2);
    delete[] ar2;


    //  11 elemű tömb
    int* ar3 = new int[11];
    for (int i = 0; i < 11; i++)
    {
        ar3[i] == 100+i;
    }
    
    print_array10(cout, ar3);
    delete[] ar3;


    //  20 elemű tömb
    int* ar4 = new int[20];
    for (int i = 0; i < 20; i++)
    {
        ar4[i] = 100 + i;
    }
    
    delete[] ar4;


    //  Vector  10     11     20
    vector<int> vect1, vect2, vect3;

    for (int i = 0; i < 10; i++)
    {
        vect1.push_back(100+i);
    }
    for (int i = 0; i < 11; i++)
    {
        vect3.push_back(100+i);
    }
    for (int i = 0; i < 20; i++)
    {
        vect3.push_back(100+i);
    }
    print_vector(cout, vect1);
    print_vector(cout, vect2);
    print_vector(cout, vect3);
    return 0;
}