/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 9 E

Lab 9 E: Pointers
*/

#include <iostream>
#include <cmath>
using namespace std;

class Coord3D {
public:
    double x;
    double y;
    double z;
};

double length(Coord3D *p) 
{
    double op; // declaring the variable OP (Orinin to Point)
    op = sqrt(pow(p -> x, 2.0) + pow(p -> y, 2.0) + pow(p -> z, 2.0)); // √(x^2 + y^2 + z^2) to get the length
    return op;                                                         // from the origin to P
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{
    double op_a;
    double op_b;
    double* ans;
    op_a = sqrt(pow(p1 -> x, 2.0) + pow(p1 -> y, 2.0) + pow(p1 -> z, 2.0));
    op_b = sqrt(pow(p2 -> x, 2.0) + pow(p2 -> y, 2.0) + pow(p2 -> z, 2.0));

    if (op_a > op_b) {
        return p1;
    }
    else {
        return p2;
    }
}

void move(Coord3D *ppos, Coord3D *pvel, double dt)
{
    Coord3D position = *ppos;
    Coord3D velocity = *pvel;

    ppos -> x = ppos -> x + (pvel -> x * dt);
    ppos -> y = ppos -> y + (pvel -> y * dt);
    ppos -> z = ppos -> z + (pvel -> z * dt);
}

Coord3D* createCoord3D(double x, double y, double z)
{
    Coord3D* location = new Coord3D;
    location -> x = x;
    location -> y = y;
    location -> z = z;

    return location;
}

void deleteCoord3D(Coord3D *p)
{
    delete p;
}

int main() {
    double x, y, z;
    cout << "Enter position: ";
    cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x,y,z);
    
    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x,y,z);

    move(ppos, pvel, 10.0);

    cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
}