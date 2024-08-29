#ifndef An_Globals
#define An_Globals

#include <vector>
#include <string>

#include <SDL2/SDL.h>
#include "../../include/glad/glad.h"

namespace An
{
  // defined in An_Globals.cpp
  extern bool IsPlaying;
  extern SDL_Window* Window;
  extern SDL_GLContext Context;
  extern SDL_Event Event;

  extern GLuint VAO;
  extern GLuint VBO;
  extern GLuint VBO_Color;
  extern GLuint ShaderProgram;

  // vertex data. defined in An_VertexData.cpp
  extern const std::vector<GLfloat> hi_tri;
  extern const std::vector<GLfloat> tri_color;

  // shader sources are stored in 
  // An_vshader_src.cpp and An_fshader_src.cpp
  extern std::string vshader_src;

  // shader sources are stored in 
  // An_vshader_src.cpp and An_fshader_src.cpp
  extern std::string fshader_src;

  extern std::vector<GLfloat> BGColor;

}

#endif
