#include <iostream>

#include "../../include/Angine/Angine.hpp"

namespace An{
  // initializing the Angine
  void Init()
  {

    LoadSDL();

    glAttribs(4,1,24);

    CreateWindow("Angine",
        0,0,
        540,360,
        SDL_WINDOW_OPENGL);

    CreateContext();

    LoadGlad();

    glInfo();

  }
}
