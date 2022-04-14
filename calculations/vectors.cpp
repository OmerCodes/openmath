class Vector {
public:
    Vector (float x2, float y2, float z2) {
        x = x2;
        y = y2;   
        z = z2;
         
    }   
    
    Vector vAdd (Vector v1, Vector v2) {
        x = v1.x + v2.x;
        y = v1.y + v2.y;
        z = v1.z + v2.z;
        Vector v3 (x, y, z);
        return v3;
    }

    Vector vSub (Vector v1, Vector v2) {
        x = v1.x - v2.x;
        y = v1.y - v2.y;
        z = v1.z - v2.z;
        Vector v3 (x, y, z);
    }

    

private:
    float x;
    float y;
    float z;

};
