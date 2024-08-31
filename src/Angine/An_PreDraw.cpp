#include "../../include/Angine/An_Render.hpp"

namespace An
{
  void PreDraw()
  {
    glDisable(GL_DEPTH_TEST);
    glDisable(GL_CULL_FACE);
    ClearColor();
    glUseProgram(ShaderProgram);
  }
}
