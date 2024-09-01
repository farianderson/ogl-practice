#include "../../include/Angine/An_Render.hpp"

namespace An
{
  void Draw()
  {
    glBindVertexArray(VAO);
    //glDrawArrays(GL_TRIANGLES,0,3);
    glDrawElements(GL_TRIANGLES,6,GL_UNSIGNED_INT,
                   (GLvoid*)(sizeof(GLuint)*6));
  }
}
