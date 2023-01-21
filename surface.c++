#include <iostream>

using namespace std;

// function to calculate surface area and volume

// of a sphere

void sphere(int radius)

{

    // variables to hold double values

    double surfaceArea, sphereVolume;

    surfaceArea = 4 * 3.14 * radius * radius;

    sphereVolume = (surfaceArea * radius ) / 3; 

    cout << "The surface area of the sphere is: " << surfaceArea;

    cout << "\n\nThe volume of the sphere is: " << sphereVolume; 

}

int main()

{

    int radius = 6;

    sphere(radius);

    cout << "\n\n";

    return 0;

}

