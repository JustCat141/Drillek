#include "../std_lib_facilities.h"

int programIndex = 0;

void index(){
programIndex ++;
cout << "\nProgram " << programIndex << ":\n";
}

int main(){

    try
    {
        //  1
        index();

        cout << "Success!\n";

        //  2
        index();

        cout << "Success!\n";
        
        //  3
        index();
        
        cout << "Success!" << "\n";
        
        //  4
        index();

        cout << "Success!" << '\n';
        
        //  5
        index();

        string res = "7";
        vector<int> v(10);
        v[5] = stoi(res);
        cout << "Success!\n";
        
        //  6
        index();

        vector<int> v1(10); 
        v1[5] = 7; 
        if (v1[5]==7)
            cout << "Success!\n";
        
        //  7
        index();

        if (true) cout << "Success!\n";
        else cout << "Fail!\n";

        //  8
        index();

        bool c = false;
        if (!c) cout << "Success!\n";
        else cout << "Fail!\n";

        //  9
        index();
        
        string s = "ape";
        bool c1 = "fool" > s; 
        if (c1) cout << "Success!\n";
        
        //  10
        index();
        
        string s1 = "ape";
        if (s1 != "fool") cout << "Success!\n";

        //  11
        index();
        
        string s2 = "ape";
        if (s2 !="fool") cout << "Success!\n";

        //  12
        index();
        
        string s3 = "ape";
        if ("fool") cout << "Success!\n";

        //  13
        index();
        
        vector<char> v2(5);
        for (int i=4; i < v2.size(); ++i)
            cout << "Success!\n";

        //  14
        index();
        
        vector<char> v3(5);
        for (int i = 4; i < v3.size(); ++i)
            cout << "Success!\n";
        
        //  15
        index();
        
        string s4 = "Success!\n";
        for (int i=0; i < s4.size(); ++i)
            cout << s4[i];
        
        //  16
        index();
        
        if (true) cout << "Success!\n";
        else cout << "Fail!\n";
        
        //  17
        index();
        
        int x = 2000;
        int c2 = x;
        if (c2 == 2000) cout << "Success!\n";
        
        //  18
        index();
        
        string s5 = "Success!\n";
        for (int i=0; i<8; ++i)
            cout << s5[i];
        cout << endl;
        
        //  19
        index();
        
        vector<int> v4(0);
        for (int i=0; i <= v4.size(); ++i)
        cout << "Success!\n";
        
        //  20
        index();
        
        int i=0;
        int j = 9;
        while (i<10) ++i;
        if (j<i) cout << "Success!\n";

        //  21
        index();
        
        double x1 = 2;
        double d = 5 - (1 / x1);
        if (d==(2*x1+0.5)) cout << "Success!\n";
        
        //  22
        index();
        
        string s6 = "Success!\n";
        for (int i=0; i<10; ++i)
        cout << s6[i];

        //  23
        index();
        
        int i1 = 0;
        while (i1<10) ++i1;
        if (i) cout << "Success!\n";
        
        //  24
        index();
        
        int x2 = 4;
        double d2 = 5/(x2 - 2);
        if (d2=2*x2+0.5) cout << "Success!\n";
        
        //  25
        index();
        
        cout << "Success!\n";

        keep_window_open();
        return 0;
    }
    catch(exception& e)
    {
        cerr << "Error: " << e.what() << '\n';
        return 1;
    }
    catch(...){
        cerr << "Oops, unknown exception!\n";
        keep_window_open();
        return 2;
    }
}
