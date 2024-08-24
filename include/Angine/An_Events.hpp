#ifndef An_Events
#define An_Events

namespace An
{
  // main event loop. defined in An_Events.cpp
  void Events();

  // handles inputs. defined in An_Input.cpp
  void Input();

  // handles An::Window resize event.
  // defined in An_WindowResized.cpp
  void WindowResized();
}

#endif
