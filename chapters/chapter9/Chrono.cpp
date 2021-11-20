// Chrono.cpp
#include "Chrono.h"
#include "../std_lib_facilities.h"
namespace Chrono {
// member function definitions:
Date::Date(int yy, Month mm, int dd):
y{yy}, m{mm}, d{dd}
{
    if (!is_date(yy,mm,dd)) throw Invalid{};
}

const Date& default_date()
{
    static Date dd {2001,Month::jan,1}; // start of 21st century
    return dd;
}

Date::Date():
    y{default_date().year()},
    m{default_date().month()},
    d{default_date().day()}
{}

void Date:: add_day(Date& d, int n)
{
    if(is_date(d.y, d.m, d.d)){
        d.d+=n;
        switch(d.m){
        case Month::feb:
            if(d.d > 28){
                d.m++;
                d.d -= 28;

            }
            break;
        case Month::jan: case Month::mar: case Month::may: case Month::jul: case Month::aug: case Month::oct: case Month::dec:
            if (d.d > 31){
                d.m++;
                d.d-=31;
                if(d.m>12){
                    d.y++;
                    d.m -= 12;

                }
            }
            break;
        case Month::apr: case Month::jun: case Month::sep: case Month::nov:
        if(d.d  > 30){
            d.m++;
            d.d -= 30;
      }
        break;
    }   
    else
    {
        throw Invalid{};
    }
}
void Date::add_month(Date& d, int n)
{
// . . .
}
void Date::add_year(Date& d, int n)
{
    if (d.m==Month::feb && d.d==29 && !leapyear(d.y+n)) { // beware of leap years!
        d.m = Month::mar; // use March 1 instead of February 29
        m = 1;
        }
    y+=n;
}
// helper functions:
bool is_date(int y, Month m, int d)
{
    // assume that y is valid
    if (d<=0) return false; // d must be positive
    if (m<Month::jan || Month::dec<m) return false;
    int days_in_month = 31; // most months have 31 days

    switch (m) {
        case Month::feb: // the length of February varies
            days_in_month = (leapyear(y))?29:28;
            break;
        case Month::apr: case Month::jun: case Month::sep: case Month::nov:
            days_in_month = 30; // the rest have 30 days
            break;
    }

    if (days_in_month<d) return false;
    return true;
}
bool leapyear(int y)
{
// see exercise 10
}
bool operator==(const Date& a, const Date& b)
{
    return a.year()==b.year()
    && a.month()==b.month()
    && a.day()==b.day();
}

bool operator!=(const Date& a, const Date& b)
{
    return !(a==b);
}

enum class Day {
    sunday, monday, tuesday, wednesday, thursday, friday, saturday
};

ostream& operator<<(ostream& os, Day d)
{
    switch (d) {
    case Day::sunday:
        os << "Sunday";
        break;
    case Day::monday:
        os << "Monday";
        break;
    case Day::tuesday:
        os << "Tuesday";
        break;
    case Day::wednesday:
        os << "Wednesday";
        break;
    case Day::thursday:
        os << "Thursday";
        break;
    case Day::friday:
        os << "Friday";
        break;
    case Day::saturday:
        os << "Saturday";
        break;
    }
    return os;
}

istream& operator>>(istream& is, Date& dd)
{
    int y, m, d;
    char ch1, ch2, ch3, ch4;
    is >> ch1 >> y >> ch2 >> m >> ch3 >> d >> ch4;
    if (!is) return is;
    if (ch1!= '(' || ch2!=',' || ch3!=',' || ch4!=')') { // oops: format error
    is.clear(ios_base::failbit); // set the fail bit
    return is;
}
dd = Date(y, Month(m),d); // update dd
return is;
}

Day day_of_week(const Date& d)
{
// . . .
}
Date next_Sunday(const Date& d)
{
// ...
}
Date next_weekday(const Date& d)
{
// . . .
}
} // Chrono