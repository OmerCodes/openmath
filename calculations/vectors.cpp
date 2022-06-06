// TODO Shorten code with direct return values eg: return x2*y2; instead of x=x2; y=y2; return x*y;
#include "vectors.hpp"

oVector::oVector (float x2, float y2, float z2) 
        :x(x2), y(y2), z(z2)
{

}   

oVector oVector::vAdd (oVector v1, oVector v2) {
    x = v1.x + v2.x;
    y = v1.y + v2.y;
    z = v1.z + v2.z;
    oVector v3 (x, y, z);
    return v3;
}

oVector oVector::vSub (oVector v1, oVector v2) {
    x = v1.x - v2.x;
    y = v1.y - v2.y;
    z = v1.z - v2.z;
    oVector v3 (x, y, z);
    return v3;
}

oVector oVector::vMultScalarVector (float scalar, oVector v1) {
    x = scalar * v1.x;
    y = scalar * v1.y;
    z = scalar * v1.z;
    oVector v3 (x, y, z);
    return v3;
}

float oVector::vDotProduct (oVector v1, oVector v2) {
    x = v1.x * v2.x;
    y = v1.y * v2.y;
    z = v1.z * v2.z;
    return x + y + z;
}    

float vDotProductMag () {


    return 0;
}

oVector oVector::vCrossProduct (oVector v1, oVector v2) {
    x = v1.y * v2.z - v1.z * v2.y;
    y = v1.z * v2.x - v1.x * v2.z;
    z = v1.x * v2.y - v1.y * v2.x;
    oVector v3 (x, y, z);
    return v3;
}

oVector oVector::vCrossProductMag () {
    
}

float oVector::vMagnitude (oVector v1) {
    x = v1.x * v1.x;
    y = v1.y * v1.y;
    z = v1.z * v1.z;
    return sqrt(x + y + z);
}



