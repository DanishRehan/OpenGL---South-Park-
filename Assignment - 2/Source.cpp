#include <GL/freeglut.h>

#define INIT_VIEW_X 0.0		//I have defined initial camera position and
#define INIT_VIEW_Y 0.0		// viewing window values here so that I don't get lost in the code
#define INIT_VIEW_Z -4.5
#define VIEW_LEFT -2.0
#define VIEW_RIGHT 2.0
#define VIEW_BOTTOM -2.0
#define VIEW_TOP 2.0
#define VIEW_NEAR 1.0
#define VIEW_FAR 200.0
GLfloat AmbientLight[] = { 0.3,0.3,0.3,1.0 };                  //Initialization values for lighting
GLfloat DiffuseLight[] = { 0.8,0.8,0.8,1.0 };
GLfloat SpecularLight[] = { 1.0,1.0,1.0,1.0 };
GLfloat SpecRef[] = { 0.7,0.7,0.7,1.0 };
GLfloat LightPos[] = { -50.0,50.0,100.0,1.0 };
GLint Shine = 128;

void eyeright()
{
	//function for the right eye
	glPushMatrix();
	glTranslatef(.17, 1.1, .75);     //Specify the coordinates for the right eye
	glRotatef(-45, 0, 0, 1);
	glScalef(.9, .7, .7);            //Specify the size of the right eye
	glColor3f(1.0, 1.0, 1.0);       //Specify the color of the eye
	gluSphere(gluNewQuadric(), .3, 100, 100);
	glPopMatrix();
}

void eyeleft()
{
	glPushMatrix();
	glTranslatef(-.17, 1.1, .75);     //Specify the position for the left eye
	glRotatef(45, 0, 0, 1);
	glScalef(.9, .7, .7);
	glColor3f(1.0, 1.0, 1.0);
	gluSphere(gluNewQuadric(), .3, 100, 100);
	glPopMatrix();
}

void legleft()
{
	glPushMatrix();
	glTranslatef(.3, -.5, 0);     //Specify the position for the left leg
	glRotatef(-90.0, 1, 0, 0);
	glScalef(.8, .8, .8);
	gluCylinder(gluNewQuadric(), .5, .5, .5, 30, 6);
	glPopMatrix();
}

void legright()
{
	glPushMatrix();
	glTranslatef(-.3, -.5, 0);     //Specify the position for the right leg
	glRotatef(-90.0, 1, 0, 0);
	glScalef(.8, .8, .8);
	gluCylinder(gluNewQuadric(), .5, .5, .5, 30, 6);
	glPopMatrix();
}

void armleft()
{
	glPushMatrix();
	glTranslatef(-.82, 0, .1);     //Specify the position for the left arm
	glRotatef(90, 0, 1, 0);
	glRotatef(-50, 1, 0, 0);
	gluCylinder(gluNewQuadric(), .15, .15, .48, 30, 6);
	glPopMatrix();
}

void armright()
{
	glPushMatrix();
	glTranslatef(.82, 0, .1);      //Specify the position for the right arm
	glRotatef(90, 0, 1, 0);
	glRotatef(-130, 1, 0, 0);
	gluCylinder(gluNewQuadric(), .15, .15, .48, 30, 6);
	glPopMatrix();
}

void handleft()
{
	glPushMatrix();
	glTranslatef(.82, 0, .1);     //Specify the position for the left hand
	glScalef(.4, .3, .3);
	gluSphere(gluNewQuadric(), .4, 100, 100);
	glPopMatrix();
}

void handright()
{
	glPushMatrix();
	glTranslatef(-.82, 0, .1);    //Specify the position for the right hand
	glScalef(.4, .3, .3);
	gluSphere(gluNewQuadric(), .4, 100, 100);
	glPopMatrix();
}

void mouth()
{
	glPushMatrix();
	glTranslatef(0, .78, .74);
	glScalef(.4, .4, .1);
	glColor3f(0.0, 0.0, 0.0);
	gluSphere(gluNewQuadric(), .4, 100, 100);
	glPopMatrix();
}

void teeth()
{
	glPushMatrix();
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(-.08, .72, .76);
	glTranslatef(.055, 0, .005);
	glutSolidCube(.035);
	glTranslatef(.055, 0, 0);
	glutSolidCube(.035);
	glPopMatrix();
}

void eyebrowleft()
{
	glPushMatrix();
	glTranslatef(-.3, 1.5, .97);;
	glRotatef(90, 0, 1, 0);
	glRotatef(45, 1, 0, 0);
	glColor3f(0.0, 0.0, 0.0);
	gluCylinder(gluNewQuadric(), .05, .01, .3, 4, 6);
	glPopMatrix();
}

void eyebrowright()
{
	glPushMatrix();
	glTranslatef(.3, 1.5, .97);
	glRotatef(270, 0, 1, 0);
	glRotatef(45, 1, 0, 0);
	gluCylinder(gluNewQuadric(), .05, .01, .3, 4, 6);
	glPopMatrix();
}

void neckring()
{
	glPushMatrix();
	glTranslatef(0, .5, 0);
	glScalef(.59, .59, .59);
	glRotatef(90.0, 1, 0, 0);
	glutSolidTorus(.1, 1.0, 20, 20);
	glPopMatrix();
}

void head()
{
	glPushMatrix();
	glTranslatef(0, 1.2, 0);
	glScalef(.9, .9, .9);
	glColor3f(1.0, 0.8, 0.6);
	gluSphere(gluNewQuadric(), 1, 100, 100);
	glPopMatrix();
}

void hatmain()
{
	glPushMatrix();
	glTranslatef(0, 1.3, 0);
	glScalef(.98, .98, .98);
	gluSphere(gluNewQuadric(), .9, 100, 100);
	glPopMatrix();
}

void maintopball()
{
	glPushMatrix();
	glTranslatef(0, 2.2, 0);
	glScalef(.9, .9, .9);
	gluSphere(gluNewQuadric(), .18, 100, 100);
	glPopMatrix();
}

void hatring()
{
	glPushMatrix();
	glTranslatef(0, 1.4, 0);
	glScalef(.84, .84, .84);
	glRotatef(90.0, 1, 0, 0);
	glutSolidTorus(.1, 1.0, 20, 20);
	glPopMatrix();
}

void footleft()
{
	glPushMatrix();
	glTranslatef(-.3, -.5, 0);
	glScalef(1.5, .3, 1.5);
	glColor3f(0.0, 0.0, 0.0);
	gluSphere(gluNewQuadric(), .3, 100, 100);
	glPopMatrix();
}

void footright()
{
	glPushMatrix();
	glTranslatef(.3, -.5, 0);
	glScalef(1.5, .3, 1.5);
	glColor3f(0.0, 0.0, 0.0);
	gluSphere(gluNewQuadric(), .3, 100, 100);
	glPopMatrix();
}

void coatline()
{
	glPushMatrix();
	glTranslatef(0, .12, .67);
	glRotatef(-17.0, 1, 0, 0);
	glScalef(.05, .7, .1);
	glutSolidCube(1);
	glPopMatrix();
}

void bellyCoatbottom()
{
	glPushMatrix();
	glTranslatef(0, -.2, 0);
	glScalef(1, .7, 1);
	glRotatef(90.0, 1, 0, 0);
	gluDisk(gluNewQuadric(), 0, .8, 30, 30);
	glPopMatrix();
}

void BellyCoat()
{
	glPushMatrix();
	glTranslatef(0, .5, 0);
	glScalef(1, .7, 1);
	glRotatef(90.0, 1, 0, 0);
	gluCylinder(gluNewQuadric(), .6, .8, 1, 100, 100);
	glPopMatrix();
}

void pupilleft()
{
	glPushMatrix();
	glTranslatef(-.17, 1.1, .88);
	glScalef(.9, .9, .9);
	gluSphere(gluNewQuadric(), .1, 100, 100);
	glPopMatrix();
}

void pupilright()
{
	glPushMatrix();
	glTranslatef(.17, 1.1, .88);
	glScalef(.9, .9, .9);
	gluSphere(gluNewQuadric(), .1, 100, 100);
	glPopMatrix();
}

void topbutton()
{
	glPushMatrix();
	glTranslatef(-.1, .4, .85);
	glScalef(1.9, 1.9, 1.9);
	gluSphere(gluNewQuadric(), .04, 100, 100);
	glPopMatrix();
}
void middlebutton()
{
	glPushMatrix();
	glTranslatef(-.1, .15, .98);
	glScalef(1.9, 1.9, 1.9);
	gluSphere(gluNewQuadric(), .04, 100, 100);
	glPopMatrix();
}
void bottombutton()
{
	glPushMatrix();
	glTranslatef(-.1, -.1, .92);
	glScalef(1.9, 1.9, 1.9);
	glColor3f(0.0, 0.0, 0.0);
	gluSphere(gluNewQuadric(), .04, 100, 100);
	glPopMatrix();
}

void Display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3ub(50, 50, 150);
	glPushMatrix();		//Save viewing matrix state

						//*******************Sten***********************
	glPushMatrix();
	glTranslatef(-3, 0, -6);
	//glTranslatef(-3, -2, -6);
	//glRotatef(55, 0, 1, 0);

	eyeright();
	eyeleft();
	glColor3f(0.0, 0.0, 1.0);
	legleft();
	legright();
	hatmain();
	glColor3ub(160, 82, 45);
	armleft();
	armright();
	mouth();
	teeth();
	eyebrowleft();
	eyebrowright();
	head();
	glColor3f(1.0, 0.0, 0.0);
	maintopball();
	hatring();
	neckring();
	handleft();
	handright();
	glColor3f(0.0, 0.0, 0.0);
	footleft();
	footright();
	coatline();
	pupilleft();
	pupilright();
	glColor3ub(160, 82, 45);
	BellyCoat();
	bellyCoatbottom();
	glPopMatrix();

	//*******************Kayle***********************
	glPushMatrix();
	glTranslatef(-1, 0, -6);
	//glTranslatef(-1, 0, -6);
	//glRotatef(35, 0, 1, 0);
	eyeright();
	eyeleft();
	eyebrowleft();
	eyebrowright();
	glColor3f(0.0, 1.0, 0.0);
	neckring();
	glColor3ub(50, 40, 60);
	legright();
	legleft();
	glColor3ub(255, 90, 0);
	armleft();
	armright();
	BellyCoat();
	bellyCoatbottom();
	glColor3ub(0, 185, 0);
	handleft();
	handright();
	mouth();
	teeth();
	glColor3ub(255, 222, 173);
	head();
	glColor3f(0.0, 0.0, 0.0);
	footleft();
	footright();
	topbutton();
	middlebutton();
	bottombutton();
	pupilleft();
	pupilright();
	glPopMatrix();

	//*******************Kenny***********************
	glPushMatrix();
	glTranslatef(4, 0, -6);
	//glTranslatef(-1, -3, -6);
	//glRotatef(-140, 0, 1, 0);
	eyeleft();
	eyeright();
	glColor3f(0.0, 0.0, 0.0);
	pupilleft();
	pupilright();
	glColor3ub(255, 127, 0);
	legleft();
	legright();
	armleft();
	armright();
	BellyCoat();
	mouth();
	teeth();
	eyebrowleft();
	eyebrowright();
	glColor3ub(139, 69, 0);
	handright();
	handleft();
	head();
	glColor3f(0.3, 0.2, 0.1);
	hatmain();
	footleft();
	footright();
	coatline();
	neckring();
	glColor3f(1.0, 0.7, 0.0);
	hatring();
	maintopball();
	glPopMatrix();

	//*******************Stan****************************
	glPushMatrix();
	glTranslatef(1.5, 0, -6);
	//glTranslatef(1.3, -0.8, -6);
	//glRotatef(-130, 0, 1, 0);
	eyeright();
	eyeleft();
	glColor3f(0.0, 0.0, 0.0);
	pupilleft();
	pupilright();
	glColor3f(0.5, 0.2, 0.4);
	legright();
	legleft();
	glPushMatrix();                                    //****Arm left****
	glTranslatef(-.9, .2, .1);
	glRotatef(90, 0, 1, 0);
	glRotatef(-45, 1, 0, 0);
	glColor3f(1.0, 0.0, 0.0);
	glutSolidCone(.3, .55, 30, 30);
	glPopMatrix();

	glPushMatrix();                                   //****Arm right****
	glTranslatef(.9, .2, .1);
	glRotatef(90, 0, 1, 0);
	glRotatef(-135, 1, 0, 0);
	glColor3f(1.0, 0.0, 0.0);
	glutSolidCone(.3, .55, 30, 30);
	glPopMatrix();
	glPushMatrix();                                    //****Hand left****
	glTranslatef(.9, .22, .1);
	glScalef(.5, .3, .4);
	glColor3f(1.0, 1.0, 0.0);
	gluSphere(gluNewQuadric(), .6, 100, 100);
	glPopMatrix();
	glPushMatrix();                                    //****Hand right****
	glTranslatef(-.9, .22, .1);
	glScalef(.5, .3, .4);
	glColor3f(1.0, 1.0, 0.0);
	gluSphere(gluNewQuadric(), .6, 100, 100);
	glPopMatrix();
	glPushMatrix();                                    //****Mouth****
	glTranslatef(0, .78, .8);
	glScalef(.4, .4, .1);
	glColor3f(0.0, 0.0, 0.0);
	gluSphere(gluNewQuadric(), .4, 100, 100);
	glPopMatrix();
	glPushMatrix();                                    //****Teeth****
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(-.08, .72, .817);
	glutSolidCube(.035);
	glTranslatef(.055, 0, .005);
	glutSolidCube(.035);
	glTranslatef(.055, 0, 0);
	glutSolidCube(.035);
	glTranslatef(.055, 0, -.005);
	glutSolidCube(.035);
	glPopMatrix();
	glPushMatrix();                                    //****Head****
	glTranslatef(0, 1, 0);
	glScalef(.9, .7, .9);
	glColor3ub(255, 222, 173);
	gluSphere(gluNewQuadric(), 1, 100, 100);
	glPopMatrix();
	glPushMatrix();                                    //****Hat main****
	glTranslatef(0, 1, 0);
	glScalef(.9, .9, .9);
	glColor3ub(30, 144, 255);
	gluSphere(gluNewQuadric(), .9, 100, 100);
	glPopMatrix();
	glColor3f(1.0, 1.0, 0.0);
	hatring();
	footleft();
	footright();
	topbutton();
	middlebutton();
	bottombutton();
	glPushMatrix();                                    //****BellyCoat****
	glTranslatef(0, .1, 0);
	glScalef(1, .6, 1);
	glColor3f(1.0, 0.0, 0.0);
	gluSphere(gluNewQuadric(), 1, 100, 100);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();                                     //****Restore matrix state****
	glutSwapBuffers();                             //****Flush drawing commands****
}

void SetupRend()
{
	glClearColor(0.25, 0.95, 0.51, 1.0);
	glEnable(GL_DEPTH_TEST);		//Enable depth testing
	glEnable(GLUT_MULTISAMPLE);
	glEnable(GL_LIGHTING);		//Enable lighting
	glLightfv(GL_LIGHT0, GL_AMBIENT, AmbientLight);		//Set up and enable light zero
	glLightfv(GL_LIGHT0, GL_DIFFUSE, DiffuseLight);
	glLightfv(GL_LIGHT0, GL_SPECULAR, SpecularLight);
	glEnable(GL_LIGHT0);
	glEnable(GL_COLOR_MATERIAL);		//Enable color tracking
	glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);		//Set material to follow
	glMaterialfv(GL_FRONT, GL_SPECULAR, SpecRef);		//Set specular reflectivity and shine
	glMateriali(GL_FRONT, GL_SHININESS, Shine);
}

void myReshape(int w, int h)
{
	GLfloat Ratio;
	glViewport(0, 0, w, h);
	Ratio = 1.0*w / h;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(50.0, Ratio, VIEW_NEAR, VIEW_FAR);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(INIT_VIEW_X, INIT_VIEW_Y, INIT_VIEW_Z);
	glLightfv(GL_LIGHT0, GL_POSITION, LightPos);
}

void main(int argc, char ** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH | GLUT_MULTISAMPLE);
	glutInitWindowSize(1366, 768);
	glutCreateWindow("Assignment - 2");
	glutReshapeFunc(myReshape);
	glutDisplayFunc(Display);
	glutIdleFunc(Display);
	SetupRend();
	glEnable(GL_NORMALIZE);
	glutMainLoop();
}