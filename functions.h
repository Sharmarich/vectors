#include <iostream>
#include <limits.h>
#include <math.h>
#include <string>

using namespace std;

class Vector{
    public:
    float vector[3];
    
    Vector(float x, float y, float z){
        
        vector[0] = x;
        vector[1] = y;
        vector[2] = z;
    }
    float find_magnitude(){
        return sqrt(pow(vector[0],2) + pow(vector[1],2) + pow(vector[2],2));
    }

    float distance_from_second_vector(Vector vector2){
        return sqrt(pow(vector2.vector[0] - vector[0], 2)+ pow(vector2.vector[1] - vector[1], 2)+ pow(vector2.vector[2] - vector[2], 2));

    }
    
    float dot_product(Vector vector3){
        return vector3.vector[0]*vector[0] + vector3.vector[1]*vector[1] + vector3.vector[2]*vector[2];
    }
    Vector cross_product(Vector vector4){
         float x3 = vector[1]*vector4.vector[2] - vector4.vector[1]*vector[2];
         float y3 = vector[2]*vector4.vector[0] - vector4.vector[2]*vector[0];
         float z3 = vector[0]*vector4.vector[1] - vector4.vector[1]*vector[0];
         
         return Vector(x3, y3, z3);
        
    }
};
