#include <iostream>
using namespace std;
string MainBodyForm;
int Resolution;
int Gridpoints = 0 ;
double Kantenlaenge=7;
int NumberOfArrayElements = 15;
double x_0,y_0,z_0;
int main()
{       
Gridpoints = 2^(2*Resolution) + 1;
int arr[NumberOfArrayElements][NumberOfArrayElements][NumberOfArrayElements];
    for(int i =0; i <= NumberOfArrayElements; i++){
        for(int j = 0; j <= NumberOfArrayElements; j++){
            for(int k = 0; k <= NumberOfArrayElements; k++){
                arr[i][j][k] = Kantenlaenge/(i+1) + Kantenlaenge/(j+1) + Kantenlaenge/(k+1);
                cout << arr[i][j][k] << " " ;
            }
            cout << endl;
        }
    }
    return 0; 
}