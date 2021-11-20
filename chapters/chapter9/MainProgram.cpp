#include "Chrono.h"
#include "../std_lib_facilities.h"

using namespace Chrono;

int main()
{
    Date today = Date(1978,Month::jun,25);
    Date tomorrow;
    tomorrow.add_day(today,1);

    return 0;
}