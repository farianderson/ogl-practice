#include "../../include/Angine/An_Globals.hpp"

namespace An
{
  void Draw()
  {
    glBindVertexArray(VAO);
    glBindBuffer(GL_ARRAY_BUFFER,VBO);
    
    glDrawArrays(GL_TRIANGLES,0,3);
  }
}
