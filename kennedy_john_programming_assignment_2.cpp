#include stdio.h
#include <GL/glut.h>

#define X_RESOLUTION 1000
#define Y_RESOLUTION 1000

int main (int argc, char *argv[])
{  
	glutInit (&argc, argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (X_RESOLUTION, Y_RESOLUTION);
	glutInitWindowPosition (0,0);
	glutCreateWindow ("Mouse keyboard click demo");
	glutDisplayFunc (display);
	glutReshapeFunc (reshape);
	glutMouseFunc (mouse);
	glutKeyboardFunc (keyboard);
	glutSpecialFunc (arrow_keys);
	glutMainLoop ();
}
void keyboard (unsigned char key, int x, int y)
{
    switch (key)
    {
        case 
}
