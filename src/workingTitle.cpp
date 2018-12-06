/*******************************************************************************
 * Working Title - It's a Work in Progress
 * Mario Wagner, Anna Pfuetzner
 * Dec 2018
 * File: workingTitle.cpp
 ******************************************************************************/

/*local includes***************************************************************/

// cpp runtime
#include <iostream>

// project
#include "windows.h"
#include "GL/glut.h"

/*local defines****************************************************************/

/*static functions*************************************************************/

static void display ()
{

}

/*global functions*************************************************************/

int main (int argc, char **argv)
{
   std::cout << "Hello World!" << std::endl;

   glutInit (&argc, argv);
   glutInitDisplayMode (GLUT_RGB);

   glutInitWindowPosition (200, 100);
   glutInitWindowSize (500, 500);

   glutCreateWindow ("Window Title");

   glutDisplayFunc (display);

   glutMainLoop ();

   return 0;
}

/*EOF**************************************************************************/
