#include"myVector.h"
#include <QString>
#include <iostream>

void MyVector::getNormal(float v1[], float v2[], float vNormal[]){
    vNormal[0] = (v1[1] * v2[2]) - (v1[2] * v2[1]);
    vNormal[1] = (v1[2] * v2[0]) - (v1[0] * v2[2]);
    vNormal[2] = (v1[0] * v2[1]) - (v1[1] * v2[0]);
}

void MyVector::getVector(float a[], float b[], float res[]){
    res[0] = a[0] - b[0];
    res[1] = a[1] - b[1];
    res[2] = a[2] - b[2];
}
float* MyVector::getMatrMiltipl(float *vertex,float rotMatr[][3]){
    float *res=new float[3];
    for(int i=0;i<3;i++)
        res[i]=0;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
            res[i]+=vertex[j]*rotMatr[j][i];//(*(rotMatr+i*3+j));
        }
   // std::cout<<res[1]<<std::endl;
    return res;
}
