#include <vector>
#include <iostream>
#include <memory>

namespace std
{
    vector<int> suspicious()
    {
        vector<int> p;

        for(int i; cin >> i; )
        {
            if(i)
                p.push_back(i);
            else
                throw exception();
        }

        return p;
    }

    int main()
    {
        try {

            auto p = suspicious();

            for(int i = 0; i < p.size(); ++i)
                cout << p.at(i) << ' ';
            cout << endl;

            return 0;

        } 
        catch (exception& e)
        {
            cerr << "Error! " << e.what() << endl;
            return 1;
        }
        catch(...)
        {
            cerr << "Something went wrong!\n";
        }
    }
}