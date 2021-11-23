#include "../std_lib_facilities.h"

class Point{
public:
    int x,y;
};

int main(){
    
    vector<Point> original_points;

    cout << "Adj meg 7 db pontot (Csak az egész számok elfogadottak! :))" << endl;
    
    //  Pontok bekérése
    for (int i = 0; i < 7; i++)
    {
        cout << i+1 <<"= ";

        Point current_point;
        cin >> current_point.x >> current_point.y;

        original_points.push_back(current_point);
    }

    //  Pontok kiírása
    cout << "\nA megadott pontok a vektorban:\n";
    for (int i = 0; i < original_points.size(); i++)
    {
        cout << i+1 << ". elem: " << original_points[i].x << ", " <<
        original_points[i].y << endl;
    }

    //  Pontok mentése a mydata.txt fileba
    ofstream ofs = ofstream("mydata.txt");

    if (!ofs) {error("Hiba történt a file megnyitása során!\n"); }
    
    for (int i = 0; i < original_points.size(); i++)
    {
        ofs << original_points[i].x << " " << original_points[i].y << endl;
    }

    ofs.close();

    //  Pontok beolvasása a mydata.txt fileból majd összehasonlítása
    ifstream ifs = ifstream("mydata.txt");
    if (!ifs) { error("Hiba történt a mydata.txt fájl megnyitása során!\n");}
    
    vector<Point> processed_points;
    int read_x, read_y;   
    while (ifs >> read_x >> read_y)
    {
        Point current_point;
        current_point.x = read_x; current_point.y = read_y;
        processed_points.push_back(current_point);
    }
    ifs.close();
    
    // Összehasonlítás
    cout << "\nPontok megegyezésének elleörzése:\n";
    if (processed_points.size() == original_points.size())
    {
        for (int i = 0; i < processed_points.size(); i++)
        {
            if (processed_points[i].x == original_points[i].x && 
                processed_points[i].y == original_points[i].y)
            {
                cout << i+1 << ". elemek: Ellenőrizve\n";
            }
            else
            {
                cout << i+1 <<". elemek: Hiba!\n";
                error("Valami hiba lépett fel! Két pont nem egyezik!\n");
            }
        }
        
    }
    else {error("Valami hiba lépett fel! A két vektor mérete különbözik!\n");}
    
    cout << "\nMinden elem sikeresen ellenőrizve lett!\n";

    return 0;
}