#include "../../include/Angine/An_Render.hpp"
#include "../../include/Angine/An_Globals.hpp"

namespace An
{
  void Draw()
  {
    glBindVertexArray(VAO);
    glDrawArrays(GL_TRIANGLES,0,3);
  }
}
