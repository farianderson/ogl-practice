#include "../../include/Angine/An_Events.hpp"
#include "../../include/Angine/An_Globals.hpp"
#include "../../include/Angine/An_Utilities.hpp"

namespace An
{
  void WindowResized()
  {
    if(Event.type == SDL_WINDOWEVENT)
      if(Event.window.event == SDL_WINDOWEVENT_RESIZED)
        if(Event.window.windowID == SDL_GetWindowID(Window))
          ViewPortUpdate();
  }
}
