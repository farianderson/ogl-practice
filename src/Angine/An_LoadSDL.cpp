#include <iostream>

#include "../../include/Angine/Angine.hpp"

namespace An
{
  // makes sure SDL is loaded properly
  void LoadSDL()
  {
    if(SDL_Init(SDL_INIT_VIDEO)<0)
    {
      std::cerr << SDL_GetError() << std::endl;
      Exit(1);
    }
  }
}
