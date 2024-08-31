#include "../../include/Angine/An_Inits.hpp"

namespace An{
  // initializing the Angine
  void Init()
  {

    LoadSDL();

    CreateWindow("Angine",
        0,0,
        540,360,
        SDL_WINDOW_OPENGL);

    CreateContext();

    glAttribs(4,1,24,1,2);

    LoadGlad();

    glInfo();

  }
}
