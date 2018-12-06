/*******************************************************************************
 * Working Title - It's a Work in Progress
 * Mario Wagner, Anna Pfuetzner
 * Dec 2018
 * File: engine.h
 ******************************************************************************/

#ifndef WT_ENGINE
#define WT_ENGINE

/*local includes***************************************************************/

// project
#include "GL/glut.h"

/*class************************************************************************/

class Engine
{
   public:
      static int SCREEN_WIDTH;
      static int SCREEN_HEIGHT;

      Engine ();
      ~Engine ();

      bool initScreen (char* winTitle);

   private:
};

#endif // WT_ENGINE

/*EOF**************************************************************************/
