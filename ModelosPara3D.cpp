#include<GL/glut.h>
#include <stdio.h>
float t (float x){
	float cl= x/255;
	return cl;
}	

void init(void){
	glClearColor(t(103), t(200), t(232),0);
	glMatrixMode(GL_MODELVIEW);
	gluLookAt(0,0,10,0,0,0,0,10,0);
	glMatrixMode(GL_PROJECTION);
	gluPerspective(120,1,1,20);
}	
void rana(){
	glPushMatrix();	
	glColor3f(t(200),t(80),t(213));
	glScalef(.1,.1,.1);	
	glutSolidCube(8);	
	glTranslated(0,0,15);	
	glutSolidCube(8);		
	glTranslated(15,0,0);	
	glutSolidCube(8);		
	glTranslated(0,0,-15);	
	glutSolidCube(8);	
	glScalef(10,10,10);	
	
	double x = 0;
	double y = 1.5;
	double z = .85;
	
	glTranslated(x,y,z);
	glScalef(.33,.75,.75);	
	glColor3f(t(200),t(80),t(213));
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);
	x=-2.85;
	glTranslated(x,y,z);
	glColor3f(t(251),t(206),t(17));
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);
	
	x=-5.7;
	glTranslated(x,y,z);
	glColor3f(t(200),t(80),t(213));	
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);	
	glPopMatrix();
	
	glPushMatrix();	
	y=0.54;
	x=0.5;
	z=.75;
	glTranslated(x,y,z);
	glScalef(.75,.2,.75);	
	glColor3f(t(200),t(80),t(213));
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);
	glPopMatrix();
	
	glPushMatrix();	
	y=1.5;
	x=0.5;
	z=1.9;
	glTranslated(x,y,z);
	glScalef(.75,.75,.2);		
	glColor3f(t(251),t(206),t(17));
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);
	glPopMatrix();
	
	//Trompa--------------------------------------------------------------------
	glPushMatrix();	
	glColor3f(t(239),t(121),t(241));
	y=.5;
	x=.5;
	z=2.3;
	glTranslated(x,y,z);
	glScalef(.75,.15,.3);	
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);		
	y=5;
	x=.5;
	z=2.3;
	glTranslated(x,y,z);	
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);		
	glPopMatrix();
	
	glPushMatrix();	
	glColor3f(t(239),t(121),t(241));
	y=.99;
	x=.5;
	z=2.3;
	glTranslated(x,y,z);
	glScalef(.75,.15,.15);	
	glutSolidCube(3);	
	glColor3f(t(200),t(80),t(213));
	glTranslated(-x,-y,-z);	
	y=7.5;
	x=.5;
	z=2.3;
	glTranslated(x,y,z);
	glScalef(1.2,3,1);	
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);	
	glPopMatrix();
	
	glPushMatrix();	
	glColor3f(t(104),t(36),t(121));
	y=.99;
	x=.5;
	z=2.5;
	glTranslated(x,y,z);
	glScalef(.50,.1,.15);	
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);		
	glPopMatrix();
	//Trompa-----------------------------------------------------------
	//nariz-------------------------------------------------------------
	glPushMatrix();	
	glColor3f(t(223),t(75),t(234));
	y=1.6;
	x=.2;
	z=2.8;
	glTranslated(x,y,z);	
	glutSolidCube(.25);	
	glTranslated(-x,-y,-z);		
	y=1.6;
	x=.6;
	z=2.8;
	glTranslated(x,y,z);	
	glutSolidCube(.25);	
	glTranslated(-x,-y,-z);		
	glPopMatrix();
	//Nariz-----------------------------------------------------------
	//Ojos-------------------------------------------------------------
	glPushMatrix();
	glColor3f(1,1,1);
	x=0;
	y=3;
	z=2;
	glTranslated(x,y,z);	
	glScalef(1,1,.5);
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);			
	x=1.25;
	y=3;
	z=2;
	glTranslated(x,y,z);		
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);		
	glPopMatrix();
	//Ojos------------------------------------------------------------
	//Pupilas
	glPushMatrix();
	glColor3f(t(104),t(36),t(121));
	x=0;
	y=3;
	z=2.1;
	glTranslated(x,y,z);	
	glScalef(.33,.33,.33);
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);			
	x=3.33;
	y=3;
	z=2.1;
	glTranslated(x,y,z);		
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);			
	glPopMatrix();
	//Pupilas-----------------------------------------------------------
	//Parpados
	glPushMatrix();
	glColor3f(t(200),t(80),t(213));
	x=0;
	y=3;
	z=1.565;
	glTranslated(x,y,z);	
	glScalef(1,1,.5);
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);			
	x=1.25;
	y=3;
	z=1.565;
	glTranslated(x,y,z);		
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);	
	glPopMatrix();
	//Parpados----------------------------------------------------------
	

}	

void laquesefumaeldiego(){
	double x, y, z;
	glPushMatrix();
	glColor3f(t(97),t(88),t(88));	
	glScalef(3,5,5);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	x=1;
	y=1;
	z=0;
	glTranslated(x,y,z);
	glColor3f(t(97),t(88),t(88));
	glScalef(3,5,4);
	glutSolidCube(1);
	glTranslated(-x,-y,-z);
	glPopMatrix();
	
	glPushMatrix();
	x=1;
	y=1;
	z=0;
	glTranslated(x,y,z);
	glColor3f(t(97),t(88),t(88));	
	glScalef(5,3,4);
	glutSolidCube(1);
	glTranslated(-x,-y,-z);
	glPopMatrix();
}
void arbolUno(){
	double x, y, z;
	glPushMatrix();
	glColor3f(t(151),t(89),t(76));
	glScalef(2,3,3);
	glutSolidCube(1);
	glPopMatrix();	
	
	glPushMatrix();
	glColor3f(t(151),t(89),t(76));
	x=1.5;
	y=.5;
	z=0;
	glTranslated(x,y,z);
	glScalef(1,2,3);
	glutSolidCube(1);	
	glTranslated(x,y,z);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(143),t(65),t(61));
	x=1.5;
	y=-1;
	z=0;
	glTranslated(x,y,z);
	glScalef(1,1,3);
	glutSolidCube(1);	
	glTranslated(x,y,z);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(191),t(226),t(35));
	x=.5;
	y=0;
	z=2;
	glTranslated(x,y,z);
	glScalef(5,5,1);
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);
	
	glColor3f(t(215),t(249),t(40));
	x=.5;
	y=0;
	z=3.5;	
	glTranslated(x,y,z);	
	glScalef(1,1,2);
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);
	
	glColor3f(t(191),t(226),t(35));
	x=.5;
	y=0;
	z=4.2;
	glTranslated(x,y,z);
	glScalef(1,1,.5);
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);
	
	glColor3f(t(215),t(249),t(40));
	x=.5;
	y=0;
	z=5.75;	
	glTranslated(x,y,z);	
	glScalef(1,1,2);
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);
	
	glColor3f(t(191),t(226),t(35));
	x=.5;
	y=0;
	z=6.5;
	glTranslated(x,y,z);
	glScalef(1,1,.5);
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);
	
	glPopMatrix();

}
void arbolDos(){
	double x, y, z;
	glPushMatrix();
	glColor3f(t(138),t(68),t(56));
	glScalef(4,4,1);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(138),t(68),t(56));	
	x=1.5;
	y=1.5;
	z=2.5;
	glTranslated(x,y,z);
	glScalef(1,1,4);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(151),t(89),t(74));		
	x=-.5;
	y=0;
	z=2.5;
	glTranslated(x,y,z);
	glScalef(3,4,4);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(151),t(89),t(74));			
	x=1.5;
	y=-.5;
	z=2.5;
	glTranslated(x,y,z);
	glScalef(1,3,4);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(193),t(226),t(35));			
	x=0;
	y=0;
	z=5;
	glTranslated(x,y,z);
	glScalef(6,6,1);
	glutSolidCube(1);
	
	glColor3f(t(215),t(249),t(40));			
	x=0;
	y=0;
	z=1.5;
	glTranslated(x,y,z);	
	glScalef(1,1,2);
	glutSolidCube(1);
	
	glColor3f(t(193),t(226),t(35));			
	x=0;
	y=0;
	z=1;
	glTranslated(x,y,z);	
	glutSolidCube(1);
	
	glColor3f(t(215),t(249),t(40));			
	x=0;
	y=0;
	z=1.5;
	glTranslated(x,y,z);	
	glScalef(1,1,2);
	glutSolidCube(1);
	
	glPopMatrix();
}
	
void arbolTres(){
	double x, y, z;
	glPushMatrix();
	glColor3f(t(138),t(68),t(56));
	glScalef(2,2,5);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	x=0;
	y=0;
	z=3;	
	glColor3f(t(157),t(171),t(34));
	glScalef(4,4,1);
	glTranslated(x,y,z);
	glutSolidCube(1);
	x=0;
	y=0;
	z=2;
	glTranslated(x,y,z);
	glutSolidCube(1);	
	x=0;
	y=0;
	z=2;
	glTranslated(x,y,z);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	x=0;
	y=0;
	z=2;	
	glColor3f(t(215),t(249),t(38));
	glScalef(4,4,1);
	glTranslated(x,y,z);
	glutSolidCube(1);
	x=0;
	y=0;
	z=2;
	glTranslated(x,y,z);
	glutSolidCube(1);	
	x=0;
	y=0;
	z=2;
	glTranslated(x,y,z);
	glutSolidCube(1);
	glPopMatrix();
	
	
}
	

void ranaVerde(){
	glPushMatrix();	
	glColor3f(t(66),t(178),t(33));	
	glScalef(.1,.1,.1);	
	glutSolidCube(8);	
	glTranslated(0,0,15);	
	glutSolidCube(8);		
	glTranslated(15,0,0);	
	glutSolidCube(8);		
	glTranslated(0,0,-15);	
	glutSolidCube(8);	
	glScalef(10,10,10);	
	
	double x = 0;
	double y = 1.5;
	double z = .85;
	
	glTranslated(x,y,z);
	glScalef(.33,.75,.75);	
	glColor3f(t(66),t(178),t(33));
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);
	x=-2.85;
	glTranslated(x,y,z);	
	glColor3f(t(57),t(150),t(28));
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);
	
	x=-5.7;
	glTranslated(x,y,z);
	glColor3f(t(66),t(178),t(33));
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);	
	glPopMatrix();
	
	glPushMatrix();	
	y=0.54;
	x=0.5;
	z=.75;
	glTranslated(x,y,z);
	glScalef(.75,.2,.75);	
	glColor3f(t(66),t(178),t(33));
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);
	glPopMatrix();
	
	glPushMatrix();	
	y=1.5;
	x=0.5;
	z=1.9;
	glTranslated(x,y,z);
	glScalef(.75,.75,.2);		
	glColor3f(t(251),t(206),t(17));
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);
	glPopMatrix();
	
	//Trompa--------------------------------------------------------------------
	glPushMatrix();	
	glColor3f(t(132),t(196),t(54));
	y=.5;
	x=.5;
	z=2.3;
	glTranslated(x,y,z);
	glScalef(.75,.15,.3);	
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);		
	y=5;
	x=.5;
	z=2.3;
	glTranslated(x,y,z);	
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);		
	glPopMatrix();
	
	glPushMatrix();		
	glColor3f(t(132),t(196),t(54));
	y=.99;
	x=.5;
	z=2.3;
	glTranslated(x,y,z);
	glScalef(.75,.15,.15);	
	glutSolidCube(3);	
	glColor3f(t(66),t(178),t(33));
	glTranslated(-x,-y,-z);	
	y=7.5;
	x=.5;
	z=2.3;
	glTranslated(x,y,z);
	glScalef(1.2,3,1);	
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);	
	glPopMatrix();
	
	glPushMatrix();		
	glColor3f(t(9),t(55),t(19));
	y=.99;
	x=.5;
	z=2.5;
	glTranslated(x,y,z);
	glScalef(.50,.1,.15);	
	glutSolidCube(3);	
	glTranslated(-x,-y,-z);		
	glPopMatrix();
	//Trompa-----------------------------------------------------------
	//nariz-------------------------------------------------------------
	glPushMatrix();	
	glColor3f(t(57),t(150),t(28));
	y=1.6;
	x=.2;
	z=2.8;
	glTranslated(x,y,z);	
	glutSolidCube(.25);	
	glTranslated(-x,-y,-z);		
	y=1.6;
	x=.6;
	z=2.8;
	glTranslated(x,y,z);	
	glutSolidCube(.25);	
	glTranslated(-x,-y,-z);		
	glPopMatrix();
	//Nariz-----------------------------------------------------------
	//Ojos-------------------------------------------------------------
	glPushMatrix();
	glColor3f(1,1,1);
	x=0;
	y=3;
	z=2;
	glTranslated(x,y,z);	
	glScalef(1,1,.5);
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);			
	x=1.25;
	y=3;
	z=2;
	glTranslated(x,y,z);		
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);		
	glPopMatrix();
	//Ojos------------------------------------------------------------
	//Pupilas
	glPushMatrix();
	glColor3f(t(9),t(55),t(19));
	x=0;
	y=3;
	z=2.1;
	glTranslated(x,y,z);	
	glScalef(.33,.33,.33);
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);			
	x=3.33;
	y=3;
	z=2.1;
	glTranslated(x,y,z);		
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);			
	glPopMatrix();
	//Pupilas-----------------------------------------------------------
	//Parpados
	glPushMatrix();
	glColor3f(t(66),t(178),t(33));
	x=0;
	y=3;
	z=1.565;
	glTranslated(x,y,z);	
	glScalef(1,1,.5);
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);			
	x=1.25;
	y=3;
	z=1.565;
	glTranslated(x,y,z);		
	glutSolidCube(1);	
	glTranslated(-x,-y,-z);	
	glPopMatrix();
	//Parpados----------------------------------------------------------
	
}
void paisaje(){
	glPushMatrix();
	glRotated(90,0,0,1);
	glTranslated(-4,15,0);
	glScalef(.3,.3,.3);
	laquesefumaeldiego();	
	glPopMatrix();
	
	glPushMatrix();
	glRotated(90,0,0,1);
	glTranslated(-4,11,0);
	glScalef(.3,.3,.3);
	laquesefumaeldiego();	
	glPopMatrix();
	
	glPushMatrix();
	glRotated(90,0,0,1);
	glTranslated(-4,7,0);
	glScalef(.3,.3,.3);
	laquesefumaeldiego();	
	glPopMatrix();
	
	glPushMatrix();
	glRotated(90,0,0,1);
	glTranslated(-4,3,0);
	glScalef(.3,.3,.3);
	laquesefumaeldiego();	
	glPopMatrix();
	
	glPushMatrix();
	glRotated(90,0,0,1);
	glTranslated(-4,-1,0);
	glScalef(.3,.3,.3);
	laquesefumaeldiego();	
	glPopMatrix();
	
	glPushMatrix();
	glRotated(90,0,0,1);
	glTranslated(-4,-4,0);
	glScalef(.3,.3,.3);
	laquesefumaeldiego();	
	glPopMatrix();
	
	glPushMatrix();
	glRotated(90,0,0,1);
	glTranslated(-4,-7,0);
	glScalef(.3,.3,.3);
	laquesefumaeldiego();	
	glPopMatrix();
	
	glPushMatrix();
	glRotated(90,0,0,1);
	glTranslated(-4,-7,0);
	glScalef(.3,.3,.3);
	laquesefumaeldiego();	
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(131),t(243),t(255));
	glTranslated(0,-7,0);
	glScalef(10,1,1);
	glutSolidCube(4);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(181),t(236),t(93));
	glTranslated(0,-7,5);
	glScalef(10,1,1);
	glutSolidCube(4);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(181),t(236),t(93));
	glTranslated(0,-4,-62);
	glScalef(15,2,30);
	glutSolidCube(4);
	glPopMatrix();
	
	
	
}
void dibujaRanas(){
	glPushMatrix();
	double e =.60;
	glScalef(e,e,e);
	glTranslated(-23.5,-4.5,0);
	glRotated(85,0,1,0);	
	rana();	
	glPopMatrix();
	
	glPushMatrix();
	e =.60;
	glScalef(e,e,e);
	glTranslated(-14.25,-4.5,2);
	glRotated(85,0,1,0);	
	rana();	
	glPopMatrix();
	
	glPushMatrix();
	e =.60;
	glScalef(e,e,e);
	glTranslated(-8.25,-4.5,2);
	glRotated(85,0,1,0);	
	rana();	
	glPopMatrix();
	
	glPushMatrix();
	e =.60;
	glScalef(e,e,e);
	glTranslated(4.75,-4.5,2);
	glRotated(275,0,1,0);	
	ranaVerde();	
	glPopMatrix();
	
	glPushMatrix();
	e =.55;
	glScalef(e,e,e);
	glTranslated(9.50,-4.5,3);
	glRotated(-85,0,1,0);	
	ranaVerde();	
	glPopMatrix();
	
	glPushMatrix();
	e =.55;
	glScalef(e,e,e);
	glTranslated(14.50,-4.5,3);
	glRotated(-105,0,1,0);	
	ranaVerde();	
	glPopMatrix();
}
	
void gallina(){
	glPushMatrix();
	glColor3f(1,1,1);
	glScalef(5,3,3);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();	
	glTranslated(-1.5,-.5,0);
	glScalef(2.5,4,3);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(0,0,0);
	glTranslated(1.5,.5,0);
	glScalef(.5,.5,3.05);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1,1,1);
	glTranslated(-1,0,2);
	glScalef(1.5,2.5,.75);
	glutSolidCube(1);
	glTranslated(0,0,-5);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(255),t(93),t(148));
	glTranslated(2.75,0,0);
	glScalef(.75,1.5,.75);
	glutSolidCube(1);	
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(255),t(93),t(148));
	glTranslated(.25,1.75,0);	
	glScalef(.75,.75,.75);
	glutSolidCube(1);	
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(255),t(128),t(103));
	glTranslated(1,2,0);	
	glScalef(1,1.5,1);
	glutSolidCube(1);	
	glPopMatrix();
	//Pata
	
	glPushMatrix();
	glTranslated(-9,-2,1);
	glPushMatrix();
	glColor3f(t(255),t(128),t(103));
	glTranslated(5,2,0);	
	glScalef(3,.75,.75);
	glutSolidCube(1);	
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(255),t(128),t(103));
	glTranslated(3.75,2,0);	
	glScalef(.5,1.5,1.5);
	glutSolidCube(1);	
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(255),t(128),t(103));
	glTranslated(3.75,2.5,.5);	
	glScalef(.5,2,.5);
	glutSolidCube(1);		
	glTranslated(0,0,-2);		
	glutSolidCube(1);	
	glPopMatrix();
	
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(-9,-2,-1.20);
	glPushMatrix();
	glColor3f(t(255),t(128),t(103));
	glTranslated(5,2,0);	
	glScalef(3,.75,.75);
	glutSolidCube(1);	
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(255),t(128),t(103));
	glTranslated(3.75,2,0);	
	glScalef(.5,1.5,1.5);
	glutSolidCube(1);	
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(255),t(128),t(103));
	glTranslated(3.75,2.5,.5);	
	glScalef(.5,2,.5);
	glutSolidCube(1);		
	glTranslated(0,0,-2);		
	glutSolidCube(1);	
	glPopMatrix();
	
	glPopMatrix();
	
	
	
}
void pollo(){
	glPushMatrix();
	glColor3f(t(255),t(242),t(97));
	glScalef(5,3,3);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();	
	glTranslated(-1.5,-.5,0);
	glScalef(2.5,4,3);
	glutSolidCube(1);
	glPopMatrix();
	//ojo
	glPushMatrix();
	glColor3f(t(111),t(63),t(71));
	glTranslated(1.5,.5,0);
	glScalef(.5,.5,3.05);
	glutSolidCube(1);
	glPopMatrix();
	
	//Alas
	glPushMatrix();
	glColor3f(t(255),t(242),t(97));
	glTranslated(1.5,.5,0);
	glScalef(.5,.5,3.05);
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(255),t(242),t(97));
	glTranslated(-1,0,2);
	glScalef(1.5,2.5,.75);
	glutSolidCube(1);
	glTranslated(0,0,-5);
	glutSolidCube(1);
	glPopMatrix();
	//pico	
	glPushMatrix();
	glColor3f(t(255),t(128),t(103));
	glTranslated(1,2,0);	
	glScalef(1,1.5,2);
	glutSolidCube(1);	
	glPopMatrix();
	
	//Pata
	
	glPushMatrix();
	glTranslated(-9,-2,1);
	glPushMatrix();
	glColor3f(t(255),t(128),t(103));
	glTranslated(5,2,0);	
	glScalef(3,.75,.75);
	glutSolidCube(1);	
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(255),t(128),t(103));
	glTranslated(3.75,2,0);	
	glScalef(.5,1.5,1.5);
	glutSolidCube(1);	
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(255),t(128),t(103));
	glTranslated(3.75,2.5,.5);	
	glScalef(.5,2,.5);
	glutSolidCube(1);		
	glTranslated(0,0,-2);		
	glutSolidCube(1);	
	glPopMatrix();
	
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(-9,-2,-1.20);
	glPushMatrix();
	glColor3f(t(255),t(128),t(103));
	glTranslated(5,2,0);	
	glScalef(3,.75,.75);
	glutSolidCube(1);	
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(255),t(128),t(103));
	glTranslated(3.75,2,0);	
	glScalef(.5,1.5,1.5);
	glutSolidCube(1);	
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(t(255),t(128),t(103));
	glTranslated(3.75,2.5,.5);	
	glScalef(.5,2,.5);
	glutSolidCube(1);		
	glTranslated(0,0,-2);		
	glutSolidCube(1);	
	glPopMatrix();
	
	glPopMatrix();
	
}
void aguila(){
	//Cuerpo
	glPushMatrix();
	glColor3f(t(101),t(50),t(70));
	glScalef(5,2,2);
	glutSolidCube(1);
	glPopMatrix();
	//Alas
	glPushMatrix();
	glPushMatrix();	
	glTranslated(0,1,1.1);
	glScalef(2,1,.25);
	glutSolidCube(1);
	glPopMatrix();	
	glPushMatrix();
	glColor3f(t(101),t(50),t(70));
	glTranslated(0,1.25,3.25);
	glScalef(2,.5,4.5);
	glutSolidCube(1);
	glPopMatrix();
	glPopMatrix();
	
	
	glPushMatrix();
	glRotated(180,0,1,0);
	glPushMatrix();	
	glTranslated(0,1,1.1);
	glScalef(2,1,.25);
	glutSolidCube(1);
	glPopMatrix();	
	glPushMatrix();
	glColor3f(t(101),t(50),t(70));
	glTranslated(0,1.25,3.25);
	glScalef(2,.5,4.5);
	glutSolidCube(1);
	glPopMatrix();
	glPopMatrix();
	//cabeza
	glPushMatrix();
	glColor3f(1,1,1);
	glTranslated(-3.5,0,0);
	glScalef(2,2,2);
	glutSolidCube(1);
	glPopMatrix();
	//ojo
	glPushMatrix();
	glColor3f(0,0,0);
	glTranslated(-4,0.65,0);
	glScalef(.35,.35,2.1);
	glutSolidCube(1);
	glPopMatrix();
	
	//patas
	glPushMatrix();
	glTranslated(2.15,-4,-.5);
	glScalef(.5,.5,.5);
	glRotated(90,0,0,1);
	glPushMatrix();
	glColor3f(t(252),t(212),t(96));	
	glTranslated(5,2,0);	
	glScalef(3,.75,.75);
	glutSolidCube(1);	
	glPopMatrix();	
	glPushMatrix();	
	glTranslated(3.75,2,0);	
	glScalef(.5,1.5,1.5);
	glutSolidCube(1);	
	glPopMatrix();	
	glPushMatrix();	
	glTranslated(3.75,2.5,.5);	
	glScalef(.5,2,.5);
	glutSolidCube(1);		
	glTranslated(0,0,-2);		
	glutSolidCube(1);	
	glPopMatrix();	
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(2.15,-4,.5);
	glScalef(.5,.5,.5);
	glRotated(90,0,0,1);
	glPushMatrix();
	glColor3f(t(252),t(212),t(96));	
	glTranslated(5,2,0);	
	glScalef(3,.75,.75);
	glutSolidCube(1);	
	glPopMatrix();	
	glPushMatrix();	
	glTranslated(3.75,2,0);	
	glScalef(.5,1.5,1.5);
	glutSolidCube(1);	
	glPopMatrix();	
	glPushMatrix();	
	glTranslated(3.75,2.5,.5);	
	glScalef(.5,2,.5);
	glutSolidCube(1);		
	glTranslated(0,0,-2);		
	glutSolidCube(1);	
	glPopMatrix();	
	glPopMatrix();
	//Pico
	glPushMatrix();
	glTranslated(-4.7,0,0);
	glRotated(45,0,0,1);
	glScalef(0.75,0.75,.75);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(-4.9,-.5,0);
	glRotated(90,0,0,1);
	glScalef(1,.75,.75);
	glutSolidCube(1);
	glPopMatrix();
	
}
void pato(){
	//Cabeza
	glPushMatrix();
	glColor3f(t(67),t(151),t(111));
	glScalef(5,5,5);
	glutSolidCube(1);
	glPopMatrix();
	//Cuello
	glPushMatrix();
	glColor3f(1,1,1);
	glTranslated(0,-3,0);
	glScalef(5,1,5);
	glutSolidCube(1);
	glPopMatrix();
	//Ojod	
	glPushMatrix();	
	glPushMatrix();
	glColor3f(1,1,1);
	glTranslated(2.5,.5,.5);
	glScalef(.5,2,2);
	glutSolidCube(1);
	glPopMatrix();	
	glPushMatrix();
	glColor3f(t(99),t(56),t(66));
	glTranslated(2.6,.5,.5);
	glScalef(.5,.75,.75);
	glutSolidCube(1);
	glPopMatrix();
	glPopMatrix();	
	glPushMatrix();	
	glPushMatrix();
	glColor3f(1,1,1);
	glTranslated(-2.5,.5,.5);
	glScalef(.5,2,2);
	glutSolidCube(1);
	glPopMatrix();	
	glPushMatrix();
	glColor3f(t(99),t(56),t(66));
	glTranslated(-2.6,.5,.5);
	glScalef(.5,.75,.75);
	glutSolidCube(1);
	glPopMatrix();
	glPopMatrix();
	//Pico
	glPushMatrix();
	glColor3f(t(249),t(230),t(93));
	glTranslated(0,0,3);
	glScalef(2,1,2);
	glutSolidCube(1);
	glPopMatrix();
	//Cuerpo
	glPushMatrix();
	glColor3f(t(99),t(56),t(65));
	glTranslated(0,-5,0);
	glScalef(5,3,5);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glColor3f(t(99),t(56),t(65));
	glTranslated(0,-5,-3);
	glScalef(3,3,2);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glColor3f(t(122),t(87),t(92));
	glTranslated(0,-7,0);
	glScalef(5,1,5);
	glutSolidCube(1);
	glPopMatrix();
	//Alas
	glPushMatrix();
	glPushMatrix();
	glColor3f(t(99),t(56),t(65));	
	glScalef(1,2.5,4);
	glTranslated(3,-2,0);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glColor3f(t(99),t(56),t(65));	
	glScalef(1,2.5,4);
	glTranslated(-3,-2,0);
	glutSolidCube(1);
	glPopMatrix();
	glPopMatrix();
	
	//Patas
	glPushMatrix();
	glTranslated(2,0,0);
	glColor3f(t(217),t(90),t(61));
	glPushMatrix();	
	glTranslated(0,-9,0);	
	glScalef(2,.2,2);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();	
	glTranslated(0,-8,0);
	glScalef(.5,2,1);	
	glutSolidCube(1);
	glPopMatrix();	
	glPopMatrix();
	glPushMatrix();
	glTranslated(-2,0,0);
	glColor3f(t(217),t(90),t(61));
	glPushMatrix();	
	glTranslated(0,-9,0);	
	glScalef(2,.2,2);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();	
	glTranslated(0,-8,0);
	glScalef(.5,2,1);	
	glutSolidCube(1);
	glPopMatrix();
	
	glPopMatrix();
	
	
	
}
void mariposa(){
	glPushMatrix();
	glColor3f(t(146),t(84),t(84));
	glScalef(.5,.5,2);
	glutSolidCube(1);
	glPopMatrix();
	//Alas
	glPushMatrix();
	
	glPushMatrix();
	glColor3f(t(253),t(130),t(46));
	glRotated(90,0,1,0);
	glTranslated(0,1.25,-.5);
	glScalef(2,2,.5);
	glutSolidCube(1);
	glPopMatrix();	
	glPushMatrix();	
	glRotated(90,0,1,0);
	glTranslated(1.5,.75,-.5);
	glScalef(1,1,.5);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glColor3f(t(254),t(178),t(70));
	glRotated(90,0,1,0);
	glTranslated(0,1,-.5);
	glScalef(1,1.5,.6);
	glutSolidCube(1);
	glPopMatrix();		
	glPushMatrix();
	glColor3f(t(254),t(178),t(70));
	glRotated(90,0,1,0);
	glTranslated(.5,.5,-.5);
	glScalef(2,.6,.6);
	glutSolidCube(1);
	glPopMatrix();	
	glPushMatrix();
	glColor3f(t(253),t(130),t(46));
	glRotated(90,0,1,0);
	glTranslated(0,1.25,.5);
	glScalef(2,2,.5);
	glutSolidCube(1);
	glPopMatrix();	
	glPushMatrix();	
	glRotated(90,0,1,0);
	glTranslated(1.5,.75,.5);
	glScalef(1,1,.5);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glColor3f(t(254),t(178),t(70));
	glRotated(90,0,1,0);
	glTranslated(0,1,.5);
	glScalef(1,1.5,.6);
	glutSolidCube(1);
	glPopMatrix();		
	glPushMatrix();
	glColor3f(t(254),t(178),t(70));
	glRotated(90,0,1,0);
	glTranslated(.5,.5,.5);
	glScalef(2,.6,.6);
	glutSolidCube(1);
	glPopMatrix();	
}
void paloma(){
	glPushMatrix();
	glColor3f(t(120),t(122),t(123));
	glScalef(2,2.5,2.5);
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslated(2.5,0,0);
	glColor3f(t(174),t(174),t(176));
	glScalef(3,2.5,2.5);
	glutSolidCube(1);
	glPopMatrix();
	//Ojod	
	glPushMatrix();	
	glRotated(90,0,1,0);
	glScalef(.5,.5,.5);
	glTranslated(0,-1,-.75);
	glPushMatrix();		
	glPushMatrix();
	glColor3f(1,1,1);
	glTranslated(2.5,.5,.5);
	glScalef(.5,2,2);
	glutSolidCube(1);
	glPopMatrix();	
	glPushMatrix();
	glColor3f(t(59),t(59),t(59));
	glTranslated(2.6,.5,.5);
	glScalef(.5,.75,.75);
	glutSolidCube(1);
	glPopMatrix();
	glPopMatrix();	
	glPushMatrix();	
	glPushMatrix();
	glColor3f(1,1,1);
	glTranslated(-2.5,.5,.5);
	glScalef(.5,2,2);
	glutSolidCube(1);
	glPopMatrix();	
	glPushMatrix();
	glColor3f(t(59),t(59),t(59));
	glTranslated(-2.6,.5,.5);
	glScalef(.5,.75,.75);
	glutSolidCube(1);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	//pico
	glPushMatrix();
	glColor3f(t(171),t(173),t(174));
	glTranslated(-.5,-1.5,0);
	glScalef(.25,.25,1);
	glutSolidCube(1);
	glPopMatrix();	
	glPushMatrix();
	glColor3f(t(62),t(64),t(66));
	glTranslated(-.1,-1.5,0);
	glScalef(.75,2,.75);
	glutSolidCube(1);
	glPopMatrix();
	//Alas
	glPushMatrix();
	glColor3f(t(120),t(122),t(123));
	glTranslated(2.75,0,2);
	glScalef(1.75,1.5,1);
	glutSolidCube(1);
	glPopMatrix();	
	glPushMatrix();
	glColor3f(t(120),t(122),t(123));
	glTranslated(2.75,0,-1.75);
	glScalef(1.75,1.5,1);
	glutSolidCube(1);
	glPopMatrix();
	
	//Patas
	glPushMatrix();
	glColor3f(t(215),t(91),t(63));
	glTranslated(4.25,0,-.5);
	glScalef(2,.35,.35);	
	glutSolidCube(1);
	glPopMatrix();	
	glPushMatrix();
	glColor3f(t(215),t(91),t(63));
	glTranslated(5.25,-0.5,-.5);
	glScalef(.25,1.5,.25);	
	glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glColor3f(t(215),t(91),t(63));
	glTranslated(5.25,-0.25,-.75);
	glScalef(.25,1,.25);	
	glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix();			
		glTranslated(0,0,1.25);
		glPushMatrix();
			glColor3f(t(215),t(91),t(63));
			glTranslated(4.25,0,-.5);
			glScalef(2,.35,.35);	
			glutSolidCube(1);
		glPopMatrix();	
		glPushMatrix();
			glColor3f(t(215),t(91),t(63));
			glTranslated(5.25,-0.5,-.5);
			glScalef(.25,1.5,.25);	
			glutSolidCube(1);
		glPopMatrix();
		glPushMatrix();
			glColor3f(t(215),t(91),t(63));
			glTranslated(5.25,-0.25,-.75);
			glScalef(.25,1,.25);	
			glutSolidCube(1);
		glPopMatrix();
	glPopMatrix();

}
	

void rotador(){
	glEnable(GL_DEPTH_TEST);
	glClear(GL_DEPTH_BUFFER_BIT);
	glClear(GL_COLOR_BUFFER_BIT);	
	//glScalef(.5,.5,.5);
	/*
	for(int i=0;i<=360;i++)	{glEnable(GL_DEPTH_TEST);glClear(GL_DEPTH_BUFFER_BIT);glClear(GL_COLOR_BUFFER_BIT);							
	int v = 200;
	glRotated(i/v,0,i/v,1);	glTranslated(2,0,0);
	
		rana();			

	glTranslated(-2,0,0); glRotated(-i/v,0,-i/v,1);
	glFlush(); Sleep(10); glDisable(GL_DEPTH_TEST);		
	}			
	for(int i=0;i<=360;i++)	{glEnable(GL_DEPTH_TEST);glClear(GL_DEPTH_BUFFER_BIT);glClear(GL_COLOR_BUFFER_BIT);							
	int v = 200;
	glRotated(i/v,0,i/v,1);	glTranslated(2,0,0);	
	
	laquesefumaeldiego();		
	
	glTranslated(-2,0,0); glRotated(-i/v,0,-i/v,1);
	glFlush(); Sleep(10); glDisable(GL_DEPTH_TEST);		
	}
	
	for(int i=0;i<=360;i++)	{glEnable(GL_DEPTH_TEST);glClear(GL_DEPTH_BUFFER_BIT);glClear(GL_COLOR_BUFFER_BIT);							
	int v = 200;
	glRotated(i/v,0,i/v,1);	glTranslated(2,0,0);
	
	
	arbolUno();
	//arbolDos();
	//arbolTres();
	//ranaVerde();
	//paisaje();
	//dibujaRanas();
	
	glTranslated(-2,0,0); glRotated(-i/v,0,-i/v,1);
	glFlush(); Sleep(10); glDisable(GL_DEPTH_TEST);		
	}
	
	for(int i=0;i<=360;i++)	{glEnable(GL_DEPTH_TEST);glClear(GL_DEPTH_BUFFER_BIT);glClear(GL_COLOR_BUFFER_BIT);							
	int v = 200;
	glRotated(i/v,0,i/v,1);	glTranslated(2,0,0);
	
	arbolDos();
	//arbolTres();
	//ranaVerde();
	//paisaje();
	//dibujaRanas();
	
	glTranslated(-2,0,0); glRotated(-i/v,0,-i/v,1);
	glFlush(); Sleep(10); glDisable(GL_DEPTH_TEST);		
	}
	
	for(int i=0;i<=360;i++)	{glEnable(GL_DEPTH_TEST);glClear(GL_DEPTH_BUFFER_BIT);glClear(GL_COLOR_BUFFER_BIT);							
	int v = 200;
	glRotated(i/v,0,i/v,1);	glTranslated(2,0,0);
	
	arbolTres();
	//ranaVerde();
	//paisaje();
	//dibujaRanas();
	
	glTranslated(-2,0,0); glRotated(-i/v,0,-i/v,1);
	glFlush(); Sleep(10); glDisable(GL_DEPTH_TEST);		
	}
	
	for(int i=0;i<=360;i++)	{glEnable(GL_DEPTH_TEST);glClear(GL_DEPTH_BUFFER_BIT);glClear(GL_COLOR_BUFFER_BIT);							
	int v = 200;
	glRotated(i/v,0,i/v,1);	glTranslated(2,0,0);
	
	ranaVerde();
	//paisaje();
	//dibujaRanas();
	
	glTranslated(-2,0,0); glRotated(-i/v,0,-i/v,1);
	glFlush(); Sleep(10); glDisable(GL_DEPTH_TEST);		
	}
	*/
	for(int i=0;i<=360;i++)	{glEnable(GL_DEPTH_TEST);glClear(GL_DEPTH_BUFFER_BIT);glClear(GL_COLOR_BUFFER_BIT);							
	int v = 200;
	glRotated(i/v,i/v,i/v,1);	
	
	paloma();
	
	glRotated(-i/v,-i/v,-i/v,1);
	glFlush(); Sleep(10); glDisable(GL_DEPTH_TEST);		
	}	
	
	glFlush();		
	glDisable(GL_DEPTH_TEST);
	
}
	
void iluminacion(void){
	
	glMatrixMode(GL_MODELVIEW);
	glutInitDisplayMode(GLUT_DEPTH);
	
	//Area de dibujado
	rotador();
	
}	
	int main(int argc, char** argv){	
		glutInitWindowSize(800,800);	
		glutInit(&argc, argv);
		glutCreateWindow("Programa basico en 3D");
		init();
		glutDisplayFunc(iluminacion);		
		glutMainLoop();				
		return 0;
	}

		
