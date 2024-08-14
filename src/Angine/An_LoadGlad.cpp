#include <iostream>

#include "../../include/Angine/Angine.hpp"

namespace An
{
  // loads glad's GL Loader into SDL_GL_GetProcAddress. defined in 
  //  An_LoadGlad.cpp
  void LoadGlad()
  {
    if(!gladLoadGLLoader(SDL_GL_GetProcAddress))
    {
      std::cout << "LoadGlad faild: ";
      std::cerr << SDL_GetError() << std::endl;
      Exit(1);
    }
  }

  // prints some info about opengl if glad loaded properly.
  void glInfo()
  {
    std::cout << glGetString(GL_VENDOR) << std::endl;
    std::cout << glGetString(GL_RENDERER) << std::endl;
    std::cout << glGetString(GL_VERSION) << std::endl;
    std::cout << glGetString(GL_SHADING_LANGUAGE_VERSION) << std::endl;
  }
}
