#include "crystal.h"
#include "myVector.h"
#include <iostream>
//hgfd
Crystal::Crystal(QWidget *parent, int type, int numSides, int numVertex) :
    QGLWidget(parent)
{
    this->type = type;
    this->numSides = numSides;
    this->numVertex = numVertex;

    sides = new int*[numSides];
    for(int i=0;i<numSides;i++){
        sides[i] = new int[3];
    }
    vertex = new float*[numVertex];
    for(int i=0;i<numVertex;i++){
        vertex[i] = new float[3];
    }
    tmpVertex = new float*[numVertex];
    for(int i=0;i<numVertex;i++){
        tmpVertex[i] = new float[3];
    }
    xRot = 0;
    yRot = 0;
}
void Crystal::rotateX(){
    MyVector *vec = new MyVector;
    for(int i=0;i<numVertex;i++){
        tmpVertex[i] = vec->getMatrMiltipl(vertex[i],rX);
        if(xRot) tmpVertex[i] = vec->getMatrMiltipl(tmpVertex[i],rY);
             else tmpVertex[i] = vec->getMatrMiltipl(vertex[i],rY);
        }
    delete vec;
}

/*void Crystal::getMatrMiltipl(int k,float rotMatr[][3]){
    float res[3];
    for(int i=0;i<3;i++)
        res[i]=0;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
            res[i]+=vertex[k][j]*rotMatr[j][i];//(*(rotMatr+i*3+j));
        }
    for(int i=0;i<3;i++)
        tmpVertex[k][i]=res[i];
}*/

void Crystal::initializeGL(){
    glClearColor(0.0f,0.0f,0.0f,1.0f);//цвет фона
}

void Crystal::resizeGL(int nWidth,int nHeight){ 
    glViewport(0,0,(GLint)nWidth,(GLint)nHeight);//область просмотра
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();//замена текущей матрицы на единичную
  int mRZ = 0;
  glOrtho (-4-mRZ, 4+mRZ, -4-mRZ, 4+mRZ, -4-mRZ, 4+mRZ);//ортогональная проекция
  //gluOrtho2D(-4,4,-4,4);
 // glMatrixMode( GL_MODELVIEW );
}

void Crystal::setVertex(int i, int j,float value){
    vertex[i][j] = value;
    tmpVertex[i][j] = value;
}
void Crystal::setSides(int i, int j,float value){
    sides[i][j] = value;
}

void Crystal::paintGL(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glTranslated(-0.5,-0.4,-2);    
   // if(numSides==24) glScalef(0.7,0.7,0.7);
    glScalef(1,2,1);
   // glRotatef(yRot,0,1,0);
    //glRotatef(xRot,1,0,0);
   // glScalef(1,1,2);
   // glRotatef(90,0,1,0);
    MyVector *myVector = new MyVector;
        for(int i = 0; i<numSides;i++){
            int j =0;
            float vec1[3];// = new float[3];
            myVector->getVector(tmpVertex[sides[i][j]],tmpVertex[sides[i][j+1]],vec1);
            float vec2[3];// = new float[3];
            myVector->getVector(tmpVertex[sides[i][j+2]],tmpVertex[sides[i][j+1]],vec2);
            float normal[3];// = new float[3];
            myVector->getNormal(vec1,vec2,normal);
            if((*(normal+2))>=0){
                glBegin(GL_POLYGON);
                for(int j =0;j<type;j++){
                        glVertex3f(tmpVertex[sides[i][j]][0], tmpVertex[sides[i][j]][1], tmpVertex[sides[i][j]][2]);
                }
                glEnd();
            }

        }
    }

void Crystal::mouseMoveEvent(QMouseEvent *me){
    yRot = me->x()-rotNowX;
    xRot = me->y()-rotNowY;
    if((rotNowX<0)&&(yRot<0)) yRot = -yRot;
    rY[0][0] = 1;rY[0][1] = 0;rY[0][2] = 0;//-по стрелке вверх1111
    rY[1][0] = 0;rY[1][1] =cos(xRot/20);rY[1][2] = sin(xRot/20);
    rY[2][0] = 0;rY[2][1] = -sin(xRot/20);rY[2][2] = cos(xRot/20);

    rX[0][0] = cos(yRot/20);rX[0][1] = 0;rX[0][2] = -sin(yRot/20);//по горизонтали
    rX[1][0] = 0;rX[1][1] =1;rX[1][2] = 0;//работает11111111
    rX[2][0] = sin(yRot/20);rX[2][1] = 0;rX[2][2] = cos(yRot/20);

    /*rX[0][0] = cos(yRot/20);rX[0][1] = sin(yRot/20);rX[0][2] = 0;//по горизонтали
    rX[1][0] = -sin(yRot/20);rX[1][1] = cos(yRot/20);rX[1][2] = 0;//работает11111111
    rX[2][0] = 0;rX[2][1] = 0;rX[2][2] = 1;*/

    rotateX();
    updateGL();
}

void Crystal::mousePressEvent(QMouseEvent *me){
    rotNowX = me->x();
    rotNowY = me->y();
}
