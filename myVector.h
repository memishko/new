#ifndef MYVECTOR_H
#define MYVECTOR_H

class MyVector{
public:
    void getNormal(float v1[], float v2[],float vNormal[]);
    void getVector(float a[],float b[], float res[]);
    float *getMatrMiltipl(float *vertex,float rotMatr[][3]);//float rotMatr[][3]);
};

#endif // MYVECTOR_H
