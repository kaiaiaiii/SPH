#include "SPH.h"
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
 
int SPH()
{
    WendlandKernel(2,1);
    return 0; 
}

