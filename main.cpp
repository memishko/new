#include "QApplication"
#include "crystal.h"
#include <QPushButton>
//dfghjk
void initCrystal(Crystal *crystal, Crystal *crystal2);

int main(int argc, char *argv[]){
       QApplication app(argc, argv);
       Crystal *crystal1 = new Crystal(0,4,6,8);
      // Crystal *crystal1 = new Crystal(0,3,24,14);
       Crystal *crystal2 = new Crystal(0,3,24,14);
       initCrystal(crystal1, crystal2);
       crystal2->show();
       //crystal1->show();
       return app.exec();
}

void initCrystal(Crystal *crystal, Crystal *crystal2){
    float vertex1[8][3];
    int sides1[6][4];
    vertex1[0][0] = 0.1f;//первый начало
    vertex1[0][1] =1.2f;
    vertex1[0][2] = 0.0f;
    vertex1[1][0] = 0.6f;
    vertex1[1][1] =2.0f;
    vertex1[1][2] =0.4f;
    vertex1[2][0] =1.2f;
    vertex1[2][1] =1.2f;
    vertex1[2][2] =0.17f;
    vertex1[3][0] = 1.05f;
    vertex1[3][1] =0.9f;
    vertex1[3][2] =0.0f;
    vertex1[4][0] = 0.6f;
    vertex1[4][1] =0.0f;
    vertex1[4][2] =0.4f;
    vertex1[5][0] =0.7f;
    vertex1[5][1] =0.9f;
    vertex1[5][2] =1.04f;
    vertex1[6][0] =0.5f;
    vertex1[6][1] =1.2f;
    vertex1[6][2] =1.04f;
    vertex1[7][0] =0.0f;
    vertex1[7][1] =0.9f;
    vertex1[7][2] =0.17f;

    sides1[0][0] = 3;
    sides1[0][1] =2;
    sides1[0][2] =1;
    sides1[0][3] =0;
    sides1[1][0] =0;
    sides1[1][1] =7;
    sides1[1][2] =4;
    sides1[1][3] =3;
    sides1[2][0] =3;
    sides1[2][1] =4;
    sides1[2][2] =5;
    sides1[2][3] =2;
    sides1[3][0] =2;
    sides1[3][1] =5;
    sides1[3][2] =6;
    sides1[3][3] =1;
    sides1[4][0] =7;
    sides1[4][1] =6;
    sides1[4][2] =5;
    sides1[4][3] =4;
    sides1[5][0] =7;
    sides1[5][1] =0;
    sides1[5][2] =1;
    sides1[5][3] =6;//конец првого
    for(int i=0;i<6;i++)
        for(int j=0;j<4;j++)
            crystal->setSides(i,j,sides1[i][j]);
    for(int i=0;i<8;i++)
        for(int j=0;j<3;j++)
            crystal->setVertex(i,j,vertex1[i][j]);
  /*  float vertex1[8][3];//куб
    int sides1[6][4];
    vertex1[0][0] = 0.0;
    vertex1[0][1] = 0.0;
    vertex1[0][2] = 1.0;
    vertex1[1][0] = 0.0;
    vertex1[1][1] = 1.0;
    vertex1[1][2] = 1.0;
    vertex1[2][0] = 1.0;
    vertex1[2][1] = 1.0;
    vertex1[2][2] = 1.0;
    vertex1[3][0] = 1.0;
    vertex1[3][1] = 0.0;
    vertex1[3][2] = 1.0;
    vertex1[4][0] = 0.0;
    vertex1[4][1] = 0.0;
    vertex1[4][2] = 0.0;
    vertex1[5][0] = 1.0;
    vertex1[5][1] = 0.0;
    vertex1[5][2] = 0.0;
    vertex1[6][0] = 1.0;
    vertex1[6][1] = 1.0;
    vertex1[6][2] = 0.0;
    vertex1[7][0] = 0.0;
    vertex1[7][1] = 1.0;
    vertex1[7][2] = 0.0;

    sides1[0][0] = 0;
    sides1[0][1] =1;
    sides1[0][2] =2;
    sides1[0][3] =3;
    sides1[1][0] = 3;
    sides1[1][1] =2;
    sides1[1][2] =6;
    sides1[1][3] =5;
    sides1[2][0] = 5;
    sides1[2][1] =6;
    sides1[2][2] =7;
    sides1[2][3] =4;
    sides1[3][0] = 4;
    sides1[3][1] =7;
    sides1[3][2] =1;
    sides1[3][3] =0;
    sides1[4][0] = 1;
    sides1[4][1] =7;
    sides1[4][2] =6;
    sides1[4][3] =2;
    sides1[5][0] = 0;
    sides1[5][1] =3;
    sides1[5][2] =5;
    sides1[5][3] =4;

    for(int i=0;i<6;i++)
        for(int j=0;j<4;j++)
            crystal->setSides(i,j,sides1[i][j]);
    for(int i=0;i<8;i++)
        for(int j=0;j<3;j++)
            crystal->setVertex(i,j,vertex1[i][j]);*/

    float vertex[14][3];
        int sides[24][3];
        vertex[0][0] = 0.0;
        vertex[0][1] = 0.0;
        vertex[0][2] = 1.0;
        vertex[1][0] = 0.0;
        vertex[1][1] = 1.0;
        vertex[1][2] = 1.0;
        vertex[2][0] = 1.0;
        vertex[2][1] = 1.0;
        vertex[2][2] = 1.0;
        vertex[3][0] = 1.0;
        vertex[3][1] = 0.0;
        vertex[3][2] = 1.0;
        vertex[4][0] = 0.0;
        vertex[4][1] = 0.0;
        vertex[4][2] = 0.0;
        vertex[5][0] = 1.0;
        vertex[5][1] = 0.0;
        vertex[5][2] = 0.0;
        vertex[6][0] = 1.0;
        vertex[6][1] = 1.0;
        vertex[6][2] = 0.0;
        vertex[7][0] = 0.0;
        vertex[7][1] = 1.0;
        vertex[7][2] = 0.0;
        vertex[8][0] = 0.5;
        vertex[8][1] = 0.5;
        vertex[8][2] = -0.25;
        vertex[9][0] = 0.5;
        vertex[9][1] = 0.5;
        vertex[9][2] = 1.25;
        vertex[10][0] = 0.5;
        vertex[10][1] = 1.25;
        vertex[10][2] = 0.5;
        vertex[11][0] = 1.25;
        vertex[11][1] = 0.5;
        vertex[11][2] = 0.5;
        vertex[12][0] = -0.25;
        vertex[12][1] = 0.5;
        vertex[12][2] = 0.5;
        vertex[13][0] = 0.5;
        vertex[13][1] = -0.25;
        vertex[13][2] = 0.5;

        sides[0][0] = 1;
        sides[0][1] =7;
        sides[0][2] =10;
        sides[1][0] = 10;
        sides[1][1] =7;
        sides[1][2] =6;
        sides[2][0] = 10;
        sides[2][1] =6;
        sides[2][2] =2;
        sides[3][0] = 10;
        sides[3][1] =2;
        sides[3][2] =1;
        sides[4][0] = 9;
        sides[4][1] =1;
        sides[4][2] =2;
        sides[5][0] = 9;
        sides[5][1] =2;
        sides[5][2] =3;
        sides[6][0] = 9;
        sides[6][1] =3;
        sides[6][2] =0;
        sides[7][0] = 9;
        sides[7][1] =0;
        sides[7][2] =1;
        sides[8][0] = 11;
        sides[8][1] =2;
        sides[8][2] =6;
        sides[9][0] = 11;
        sides[9][1] =6;
        sides[9][2] =5;
        sides[10][0] = 11;
        sides[10][1] =5;
        sides[10][2] =3;
        sides[11][0] = 11;
        sides[11][1] =3;
        sides[11][2] =2;
        sides[12][0] = 12;
        sides[12][1] =7;
        sides[12][2] =1;
        sides[13][0] = 12;
        sides[13][1] =4;
        sides[13][2] =7;
        sides[14][0] = 12;
        sides[14][1] =0;
        sides[14][2] =4;
        sides[15][0] = 12;
        sides[15][1] =1;
        sides[15][2] =0;
        sides[16][0] = 8;
        sides[16][1] =6;
        sides[16][2] =7;
        sides[17][0] = 8;
        sides[17][1] =5;
        sides[17][2] =6;
        sides[18][0] = 8;
        sides[18][1] =4;
        sides[18][2] =5;
        sides[19][0] = 8;
        sides[19][1] =7;
        sides[19][2] =4;
        sides[20][0] = 13;
        sides[20][1] =5;
        sides[20][2] =4;
        sides[21][0] = 13;
        sides[21][1] =3;
        sides[21][2] =5;
        sides[22][0] = 13;
        sides[22][1] =0;
        sides[22][2] =3;
        sides[23][0] = 13;
        sides[23][1] =4;
        sides[23][2] =0;

        for(int i=0;i<24;i++)
            for(int j=0;j<3;j++)
                crystal2->setSides(i,j,sides[i][j]);
        for(int i=0;i<14;i++)
            for(int j=0;j<3;j++)
                crystal2->setVertex(i,j,vertex[i][j]);

   /* float vertex[14][3];
    int sides[24][4];
    vertex[0][0] = 0.2;
    vertex[0][1] = 2.4;
    vertex[0][2] = 0.2;
    vertex[1][0] = 0.7;
    vertex[1][1] = 1.4;
    vertex[1][2] = 0.0;
    vertex[2][0] = 1.2;
    vertex[2][1] = 2.4;
    vertex[2][2] = 0.2;
    vertex[3][0] = 1.4;
    vertex[3][1] = 1.4;
    vertex[3][2] = 0.7;
    vertex[4][0] = 1.2;
    vertex[4][1] = 2.4;
    vertex[4][2] = 1.2;
    vertex[5][0] = 0.7;
    vertex[5][1] = 1.4;
    vertex[5][2] = 1.4;
    vertex[6][0] = 0.2;
    vertex[6][1] = 2.4;
    vertex[6][2] = 1.2;
    vertex[7][0] = 0.0;
    vertex[7][1] = 1.4;
    vertex[7][2] = 0.7;
    vertex[8][0] = 0.7;
    vertex[8][1] = 2.8;
    vertex[8][2] = 0.7;
    vertex[9][0] = 0.7;
    vertex[9][1] = 0.0;
    vertex[9][2] = 0.7;
    vertex[10][0] = 0.2;
    vertex[10][1] = 0.4;
    vertex[10][2] = 0.2;
    vertex[11][0] = 1.2;
    vertex[11][1] = 0.4;
    vertex[11][2] = 0.2;
    vertex[12][0] = 1.2;
    vertex[12][1] = 0.4;
    vertex[12][2] = 1.2;
    vertex[13][0] = 0.2;
    vertex[13][1] = 0.4;
    vertex[13][2] = 1.2;

    sides[0][0] = 8;
    sides[0][1] = 0;
    sides[0][2] = 2;
    sides[1][0] = 8;
    sides[1][1] = 2;
    sides[1][2] = 4;
    sides[2][0] = 8;
    sides[2][1] = 4;
    sides[2][2] = 6;
    sides[3][0] = 8;
    sides[3][1] = 6;
    sides[3][2] = 0;
    sides[4][0] = 9;
    sides[4][1] = 11;
    sides[4][2] = 10;
    sides[5][0] = 9;
    sides[5][1] = 12;
    sides[5][2] = 11;
    sides[6][0] = 9;
    sides[6][1] = 13;
    sides[6][2] = 12;
    sides[7][0] = 9;
    sides[7][1] = 10;
    sides[7][2] = 13;
    sides[8][0] = 1;
    sides[8][1] = 2;
    sides[8][2] = 0;
    sides[9][0] = 1;
    sides[9][1] = 0;
    sides[9][2] = 10;
    sides[10][0] = 1;
    sides[10][1] = 10;
    sides[10][2] = 11;
    sides[11][0] = 1;
    sides[11][1] = 11;
    sides[11][2] = 2;
    sides[12][0] = 3;
    sides[12][1] = 4;
    sides[12][2] = 2;
    sides[13][0] = 11;
    sides[13][1] = 3;
    sides[13][2] = 2;
    sides[14][0] = 3;
    sides[14][1] = 11;
    sides[14][2] = 12;
    sides[15][0] = 3;
    sides[15][1] = 12;
    sides[15][2] = 4;
    sides[16][0] = 5;
    sides[16][1] = 6;
    sides[16][2] = 4;
    sides[17][0] = 5;
    sides[17][1] = 4;
    sides[17][2] = 12;
    sides[18][0] = 5;
    sides[18][1] = 12;
    sides[18][2] = 13;
    sides[19][0] = 5;
    sides[19][1] = 13;
    sides[19][2] = 6;
    sides[20][0] = 7;
    sides[20][1] = 0;
    sides[20][2] = 6;
    sides[21][0] = 7;
    sides[21][1] = 6;
    sides[21][2] = 13;
    sides[22][0] = 7;
    sides[22][1] = 13;
    sides[22][2] = 10;
    sides[23][0] = 7;
    sides[23][1] = 10;
    sides[23][2] = 0;
    for(int i=0;i<24;i++)
        for(int j=0;j<3;j++)
            crystal2->setSides(i,j,sides[i][j]);
    for(int i=0;i<14;i++)
        for(int j=0;j<3;j++)
            crystal2->setVertex(i,j,vertex[i][j]);*/
}
