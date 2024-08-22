#include "../../include/Angine/Angine.hpp"

namespace An
{
  void TalkToTheVertex()
  {
    glGenVertexArrays(1,&VAO);
    glBindVertexArray(VAO);

    glGenBuffers(1,&VBO);
    glBindBuffer(GL_ARRAY_BUFFER,VBO);
    glBufferData(GL_ARRAY_BUFFER,hi_tri.size()*sizeof(GLfloat),hi_tri.data(),
        GL_STATIC_DRAW);

    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0,2,GL_FLOAT,GL_FALSE,0,(GLvoid*)0);

    glBindVertexArray(0);
    glBindBuffer(GL_ARRAY_BUFFER,0);
    glDisableVertexAttribArray(0);
  }
}
