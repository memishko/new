#include <QGLWidget>
#include <GL/glu.h>
#include <QTimer>
#include <QMouseEvent>
#include <QMouseDriverFactory>
#include <math.h>

class Crystal : public QGLWidget
{
    Q_OBJECT
public:
    explicit Crystal(QWidget *parent = 0, int type=0, int numSides=0, int numVertex=0);
    QTimer *timer;
private:
    int numVertex;
    int numSides;
    int type;
    double xRot;
    double yRot;
    int zRot;
    float **vertex;
    int **sides;
    float **tmpVertex;
    double rotNowX;
    double rotNowY;
    float rX[3][3];
    float rY[3][3];

 protected:
 // void getMatrMiltipl(int k, float rotMatr[][3]);
  void initializeGL();
  void resizeGL(int nWidth,int nHeight);
  void paintGL();
  void mouseMoveEvent(QMouseEvent *me); // Метод реагирует на перемещение указателя, но по умолчанию setMouseTracking(false)
  void mousePressEvent(QMouseEvent *me);
  void rotateX();
public:
  void setVertex(int i, int j,float value);
  void setSides(int i, int j,float value);


};
