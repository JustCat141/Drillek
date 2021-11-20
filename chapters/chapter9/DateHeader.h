#include "../std_lib_facilities.h"

enum class Month {
    jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

class Date{
public:
    Date(int y, Month m, int d);

private:
    int y;
    Month m;
    int d;
};