#include "../../include/Angine/An_Globals.hpp"
#include <string>

namespace An{
  bool IsPlaying=true;
  SDL_Window* Window=nullptr;
  SDL_GLContext Context=nullptr;
  SDL_Event Event;

  // defined in An_VertexData.cpp
  extern const std::vector<GLfloat> hi_tri;

  GLuint VAO=0;
  GLuint VBO=0;
  GLuint VBO_Color=0;

  GLuint ShaderProgram=0;
  std::vector<GLfloat> BGColor{.2,.15,.0,1.0};
}
