
#include <iostream>
using namespace std;
string MainBodyForm;
int Resolution;
int Gridpoints = 0 ;
int MainMeassurement;
int main()
{   

    cout << "Koerperform (Kugel oder Wuerfel)";
    cin >> MainBodyForm; 
    cout << "Hauptabmessung (Radius oder Kantenlaenge)";
    cin >> MainMeassurement;
    cout << "Aufloesung (1, 2 oder 3)";
    cin >> Resolution;
    

    if (MainBodyForm == Kugel){
        Gridpoints = 2^(5+2*Resolution);
        cout << Gridpoints;
        for(int i =(0 - MainMeassurement); i < (0+MainMeassurement); i++)
        {

        } 
    }
    return 0; 
}