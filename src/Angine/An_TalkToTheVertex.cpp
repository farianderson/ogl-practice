#include "../../include/Angine/An_Render.hpp"

namespace An
{
  void TalkToTheVertex()
  {
    glGenVertexArrays(1,&VAO);
    glBindVertexArray(VAO);

    glGenBuffers(1,&VBO);
    glBindBuffer(GL_ARRAY_BUFFER,VBO);
    glBufferData(GL_ARRAY_BUFFER,quad_pos_col.size()*sizeof(GLfloat),
        quad_pos_col.data(),GL_STATIC_DRAW);

    glGenBuffers(1,&IBO);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER,IBO);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER,
                 quad_indices.size()*sizeof(GLuint),
                 quad_indices.data(),GL_STATIC_DRAW);

    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0,2,GL_FLOAT,GL_FALSE,
        5*sizeof(GLfloat),(GLvoid*)0);

//    glGenBuffers(1,&VBO_Color);
//    glBindBuffer(GL_ARRAY_BUFFER,VBO_Color);
//    glBufferData(GL_ARRAY_BUFFER,tri_color.size()*sizeof(GLfloat),
//        tri_color.data(),GL_STATIC_DRAW);

    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1,3,GL_FLOAT,GL_FALSE,
        5*sizeof(GLfloat),(GLvoid*)(2*sizeof(GLfloat)));

    glBindVertexArray(0);
    glBindBuffer(GL_ARRAY_BUFFER,0);
    glDisableVertexAttribArray(0);
    glDisableVertexAttribArray(1);
  }
}
