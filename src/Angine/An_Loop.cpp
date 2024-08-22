#include<chrono>

#include "../../include/Angine/Angine.hpp"

namespace An{
  void Loop()
  {
    SDL_GL_SetSwapInterval(0);

    auto start=std::chrono::steady_clock::now();
    int frames = 0;

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

      PipeLine();

      fpsCalc(frames,start);

      SDL_GL_SwapWindow(Window);
    } 
  }
}
