#include "../std_lib_facilities.h"

void print_array(ostream& os, int* a, int n, bool print_pointer)
{
    for (int i = 0; i < n; i++)
    {
        os << a[i] << ", ";
    }
    if (print_pointer) cout << "| points to: " << a << " direction";
    cout << endl;
}

int main()
{
    int* p1 = new int(7);

    cout << *p1 << " - points to: " << p1 << " direction\n";

    int* p2 = new int[7] {1,2,4,8,16,32,64};
    print_array(cout,p2,7,true);

    int* p3 = p2;
    p2 = p1;
    p2 = p3;

    print_array(cout,p1,7,true);
    print_array(cout,p2,7,true);

    delete p1;
    delete[] p3;

    int* p1 = new int[10] {1,2,4,8,16,32,64,128,256,512};
    print_array(cout,p1,10,true);
    int* p2 = new int[10];

    for (int i = 0; i < 10; i++)
    {
        p2[i] = p1[i];
    }
    delete[] p1,p2;

    //  Lusta vagyok :/
    
    return 0;
}