#include<iostream>
#include"functions.h"
using namespace std;
int main()
{   
    
    Vector vector1(1,0,0);
    Vector vector2(0,0,1);
    Vector vector3(3, 4, 5);
    
    float m = vector3.find_magnitude();
    
    float d = vector3.distance_from_second_vector(vector3);
    
    float dP = vector1.dot_product(vector3);
    
    float nm = vector1.cross_product(vector2).find_magnitude();
    
    
    
    cout<<"Magnitude: "<<nm<<endl;

    cout<<"Distance: "<<d<<endl;
    
    cout<<"Dot Product: "<<dP<<endl;

    return 0;
}