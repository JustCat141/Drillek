#include "std_lib_facilities.h"

vector<string> accepted_units = {"cm", "m", "in", "ft"};
constexpr double cm_to_m = 0.01;
constexpr double in_to_m = 0.0254;
constexpr double ft_to_m = 0.3048;

bool isAcceptableUnit(string unit){
    for (int i = 0; i < accepted_units.size(); i++)
    {
        if(unit == accepted_units[i])
        {
            return true;
        }
    }
    return false;
}

double convert_into_meter(double number, string unit){
    
    double number_in_meter;

    if (unit == "cm")
        number_in_meter = number * cm_to_m;
    else if (unit == "in")
        number_in_meter = number * in_to_m;
    else if (unit == "ft")
        number_in_meter = number * ft_to_m;
    else
        number_in_meter = number;

    return number_in_meter;
}

int main(){

    double number;
    string unit;

    double smallest = 0, largest = 0;
    double sum = 0;

    vector<double> allNumber;

    while (cin >> number >> unit)
    {
        if (!isAcceptableUnit(unit))
        {
            cout << "Invalid unit type!\n";
        }
        else
        {
            number = convert_into_meter(number, unit);

            if (smallest == 0 && largest == 0)
                smallest = largest = number;

            if (number < smallest) {
                cout << "the smallest so far\n";
                smallest = number;
            }
            if (number > largest){
                cout << "the largest so far\n";
                largest = number;
            }

            allNumber.push_back(number);
            sum += number;
        }
    }
    
    cout << "Elements of the \e[1mallNumber\e[0m vector:\n";
    sort(allNumber);
    for(double n : allNumber)
        cout << " - " << n <<"m\n";

    cout << "\nthe smallest number was: " << smallest << "m\n" <<
            "the largest number was " << largest << "m\n" <<
            "there was/were " << allNumber.size() << " numbers entered\n" << 
            "the sum of the numbers is: " << double(sum) << "m\n";
    
    return 0;
}