#include<iostream>

#include "../../include/Angine/Angine.hpp"

namespace An{
  void Loop()
  {

    SDL_Event event;
    while(IsPlaying)
    {
      while(SDL_PollEvent(&event))
      {
        if (event.type == SDL_QUIT)
        {
          IsPlaying = false;
        }
      }

      SDL_GL_SwapWindow(Window);
    } 
  }
}
