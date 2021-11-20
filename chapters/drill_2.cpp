#include "../std_lib_facilities.h"

void swap_v(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_r(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_cr(const int& a, const int& b)
{
    int temp;
    temp = a;
    // a = b;       Konstans változónak nem változhat az értéke
    // b = temp;
}

void v_type_swap()
{
    int x = 7;
    int y = 9;
    swap_v(x, y);
    swap_v(7, 9);
    const int cx = 7;
    const int cy = 9;
    swap_v(cx, cy);
    swap_v(7.7, 9.9);
    double dx = 7.7;
    double dy = 9.9;
    swap_v(dx, dy);
    swap_v(7.7, 9.9);
}

void r_type_swap()
{
    int x = 7;
    int y = 9;
    swap_r(x, y);
    // swap_r(7, 9);
    const int cx = 7;
    const int cy = 9;
    // swap_r(cx, cy);
    // swap_r(7.7, 9.9);    Konstans változónak nem változhat az értéke
    double dx = 7.7;
    double dy = 9.9;
    // swap_r(dx, dy);
    // swap_r(7.7, 9.9);    A függvény inteket vár
}

void cl_type_swap()
{
    int x = 7;
    int y = 9;
    // swap_cl(x, y);
    // swap_cl(7, 9);
    const int cx = 7;
    const int cy = 9;
    // swap_cl(cx, cy);
    // swap_r(7.7, 9.9);
    double dx = 7.7;
    double dy = 9.9;
    // swap_cl(dx, dy);
    // swap_cl(7.7, 9.9);
}

int main()
{
    try{
        r_type_swap();
        v_type_swap();
        cl_type_swap();

        cout << "Succes!\n";

        return 0;
    }
    catch(exception& e)
    {
        cout << "Error: " << e.what() << endl;
        return 1;
    }
    catch(...){
        cout << "Something went wrong!" << endl;
        return 2;
    }
}