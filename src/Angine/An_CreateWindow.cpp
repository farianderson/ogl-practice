#include <iostream>

#include "../../include/Angine/Angine.hpp"

namespace An
{
  //creates Angine's window
  void CreateWindow(const char* title, int x, int y, int w, int h,
      Uint32 SDL_WindowFlags)
  {
    Window = SDL_CreateWindow(title,x,y,w,h,SDL_WindowFlags);
    if(Window==nullptr)
    {
      std::cerr << SDL_GetError() << std::endl;
      Exit(1);
    }
  }
}
