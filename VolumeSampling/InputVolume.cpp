#include <iostream>
using namespace std;
string MainBodyForm;
int Resolution;
int Gridpoints = 0 ;
double Kantenlaenge=7;
double x_0,y_0,z_0;
//vector<double> x_points, y_poinys, z_points = [],[],[];
int x_len = 5;
int y_len = 3;
int z_len = 3;
double d_xyz = 1; //Abstand zwischen den Partikeln
int x_Elements = x_len*(1/d_xyz);
int y_Elements = y_len*(1/d_xyz);
int z_Elements = z_len*(1/d_xyz);
int main()
{ 
double arr[x_Elements][y_Elements][z_Elements] = {0};
    for(int i =0; i < x_Elements; i++){
        for(int j = 0; j < y_Elements; j++){
            for(int k = 0; k < z_Elements; k++){
                Gridpoints += 1;
                arr[i][j][k] += k*d_xyz+j*d_xyz+i*d_xyz;
                cout << arr[i][j][k] << " " ;
            }
            cout << endl;
        }
        cout << endl;
    } 
    cout << sizeof(arr)/ sizeof(arr[0][0][0]);
    return 0; 
}