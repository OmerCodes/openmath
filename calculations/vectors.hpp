#ifndef VECTORS_HPP
#define VECTORS_HPP

class oVector {
public:
    oVector (float x2, float y2, float z2);
    
    oVector vAdd (oVector v1, oVector v2);

    oVector vSub (oVector v1, oVector v2);

    oVector vMultScalarVector (float scalar, oVector v1);

    float vDotProduct (oVector v1, oVector v2);

    float vDotProductMag ();

    oVector vCrossProduct (oVector v1, oVector v2);

    oVector vCrossProductMag ();

    float vMagnitude (oVector v1);

private:
    float x;
    float y;
    float z;

};



#endif