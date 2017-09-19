
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

#define X_RESOLUTION 1000
#define Y_RESOLUTION 1000

void line(float red, float green, float blue)
{
    printf("line called \n");
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(red,green,blue);
    glBegin(GL_LINES);
        glVertex2i(180,15);
        glVertex2i(10,145);
    glEnd();
    glFlush();


}
void arrow_keys (int key, int x, int y)
{
    switch (key)
    {
        case GLUT_KEY_LEFT:
            line(0.0,0.0,1.0);
            break;
        case GLUT_KEY_RIGHT:
            line(1.0,0.0,0.0);
            break;
        case GLUT_KEY_UP:
            line(0.0,1.0,1.0);
            break; 
        case GLUT_KEY_DOWN:
            line(1.0,1.0,1.0);
            break;
        default:
            break;
    }
    printf("arrow key = %c, x = %d, y = %d\n",key,x,y);

}
void init(void)
{
    printf("init called\n");
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0,200.0,0.0,150.0);

}

void keyboard (unsigned char key, int x, int y)
{
    line(0.0,1.0,0.0);
    printf("keyboard key = %c, x = %d, y = %d\n",key,x,y);
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);//line(1.0,0.0,0.0);
    glEnd();
    glFlush();
    printf("display called\n");
}


void reshape(int width, int height)
{
    return;
    printf("reshape called \n");
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(118/255,185/255,0.0);
    glBegin(GL_LINES);
        glVertex2i(180,15);
        glVertex2i(10,145);
    glEnd();
    glFlush();
}

int main (int argc, char *argv[])
{  
	glutInit (&argc, argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (X_RESOLUTION, Y_RESOLUTION);
	glutInitWindowPosition (0,0);
	glutCreateWindow ("Flying camera");

    init();	
    glutDisplayFunc (display);
	glutReshapeFunc (reshape);
	
	glutKeyboardFunc (keyboard);
	glutSpecialFunc (arrow_keys);

    /* instantiate other objects here
    */

	glutMainLoop ();
}

