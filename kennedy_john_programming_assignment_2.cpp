#include stdio.h
#include <GL/glut.h>

#define X_RESOLUTION 1000
#define Y_RESOLUTION 1000

int main (int argc, char *argv[])
{  
	glutInit (&argc, argv);
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH | GLUT_ALPHA);
	glutInitWindowSize (X_RESOLUTION, Y_RESOLUTION);
	glutInitWindowPosition (0,0);
	glutCreateWindow ("Flying camera");
	glutDisplayFunc (display);
	glutReshapeFunc (reshape);
	
	glutKeyboardFunc (keyboard);
	glutSpecialFunc (arrow_keys);

    /* instantiate other objects here
    */

	glutMainLoop ();
}
void arrow_keys (unsigned char key, int x, int y)
{
    switch (key)
    {
        case GLUT_KEY_LEFT:
            break;
        case GLUT_KEY_RIGHT:
            break;
        case GLUT_KEY_UP:
            break; 
        case GLUT_KEY_DOWN:
            break;
        default:
            break;
    }

}
void Init()
{
    glShadeModel (GL_SMOOTH);
    glEnable (GL_DEPTH_TEST);

}
void keyboard (unsigned char key, int x, int y)
{

}

void display()
{

}

void reshape() 
{

}
void 
