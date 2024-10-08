#include "../../include/Angine/An_Events.hpp"
#include "../../include/Angine/An_Globals.hpp"

namespace An
{
  // handles inputs.
  void Input()
  {
      if (Event.type == SDL_QUIT)
      {
        IsPlaying = false;
      }

      KeyMod = SDL_GetModState();
      if((KeyboardState[SDL_SCANCODE_Q] ||
          KeyboardState[SDL_SCANCODE_W]) && (KeyMod & KMOD_CTRL))
        IsPlaying = false;
  }
}
