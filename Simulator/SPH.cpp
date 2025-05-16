
#include <iostream>
using namespace std;

float position;
float geschwindigkeit;
float masse;
float dichte;
float WendlandKernelWert;
float SmoothingHeight = 3.0;
//float Pos_NeighborParticle;
//float Pos_Particle;

float WendlandKernel(float Pos_Particle, float Pos_NeighborParticle)
{
    if (Pos_NeighborParticle-Pos_Particle > 2*SmoothingHeight)
    {
        WendlandKernelWert =0;
    }
    else
    {
        WendlandKernelWert = (21/(16*3.141)); //(1/SmoothingHeight^SmoothingHeight)*(1-(Pos_NeighborParticle-Pos_Particle)/2*SmoothingHeight)^4.0*((2*(Pos_NeighborParticle-Pos_Particle)/SmoothingHeight)+1);
        cout << WendlandKernelWert;
    }

    return WendlandKernelWert;
}

float BeschleunigungDruckgradient()
{
    return 0.0;
}

float BeschleunigungViskositaet()
{
    return 0.0;
}

float BeschleunigungOberflaechenspannung()
{
    return 0.0;
}

float BeschleunigungKoerperkraefte()
{
    return 0.0;
}

float Bewegungsgleichung(float Pos_Particle, float Druckgradient, float Viskositaet, float Oberflaechenspannung, float Koerperkraefte)
{
    float BeschleunigungGesamt = Druckgradient+ Viskositaet + Oberflaechenspannung + Koerperkraefte;
    
    return 0.0;
}
 
int main()
{
    WendlandKernel(2,1);
    return 0; 
}

