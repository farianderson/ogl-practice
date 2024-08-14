#ifndef Angine
#define Angine

#include <SDL2/SDL.h>
#include "../../include/glad/glad.h"

namespace An
{
  // defined in An_Globals.cpp
  extern bool IsPlaying;
  extern SDL_Window* Window;
  extern SDL_GLContext Context;


  // initializing the Angine. defined in An_Init.cpp
  void Init();

  // makes sure SDL is loaded properly. defined in An_LoadSDL.cpp
  void LoadSDL();

  // sets opengl attributes. defined in An_glAttribs.cpp
  void glAttribs(int major, int minor, int depth_size);

  // creates An::Window, the Angine's window. defined in An_CreateWindow.cpp
  void CreateWindow(const char* title, int x, int y, int w, int h,
      Uint32 SDL_WindowFlags);

  // loads glad's GL Loader into SDL_GL_GetProcAddress. defined in 
  //  An_LoadGlad.cpp
  void LoadGlad();

  // creates An::Context based on An::Window. defined in An_CreateContext.cpp
  void CreateContext();

  // prints some info about opengl if glad is loaded properly. defined in
  //  An_LoadGlad.cpp
  void glInfo();

  // Angine's main loop. defined in An_Loop.cpp
  void Loop();


  // clean ups before exiting the Angine, defined in An_CleanUps.cpp
  void CleanUps();
  // destroys the An::Context. defined in An_CleanUps.cpp
  void DeleteContext();
  // destroys the An::Window. defined in An_CleanUps.cpp
  void DestroyWindow();


  // exit program returning 'status'
  void Exit(int status);

}

#endif
