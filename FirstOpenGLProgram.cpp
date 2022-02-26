#include <iostream>
using namespace std;
#include <GL/glut.h>
void myInit()
{
    glClearColor(1.0, 1.0, 1.0, 0); // set background color
    glColor3f(1.0, 0.0, 0.0);       // change object color
    glPointSize(15.0);              // set the width of the object
    gluOrtho2D(0, 640, 0, 480);     // set coordinate system
}
void MyDisplay()
{
    // called when OpenGL needs to update the display

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // clear the window
    glBegin(GL_POINTS);
    glVertex2d(100, 200);
    glEnd();
    glFlush(); // force to update
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // creates an OpenGL window for rendering and interaction
    glutInitWindowPosition(0, 0);                // positions the top left corner of the initial window at (x, y)
    glutInitWindowSize(640, 480);                // output window size
    glutCreateWindow("Sample");                  // name of the output window sizeof
    myInit();                                    // call to my function
    glutDisplayFunc(MyDisplay);                  // function to be invoked when OpenGL needs to redisplay (or display for the first time) the contents of the window
    glutMainLoop();

}