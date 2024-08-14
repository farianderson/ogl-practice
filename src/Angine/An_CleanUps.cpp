#include <iostream>

#include "../../include/Angine/Angine.hpp"

namespace An{
  // clean ups before exiting the Angine
  void CleanUps()
  {

    std::cout << "cleaning up the memory..." << std::endl;

    DeleteContext();

    DestroyWindow();

    SDL_Quit();
  }

  // destroys the An::Context
  void DeleteContext()
  {
    if(Context)
    {
      SDL_GL_DeleteContext(Context);
      Context = nullptr;
    }
  }

  // destroys the An::Window
  void DestroyWindow()
  {
    if(Window)
    {
      SDL_DestroyWindow(Window);
      Window = nullptr;
    }
  }
}
