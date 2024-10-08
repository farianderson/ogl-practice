#include "../../include/Angine/An_Render.hpp"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/string_cast.hpp>
#include <iostream>

namespace An
{
  void SetUniforms(float r)
  {
    glm::mat4 model = glm::mat4(1);
    model = glm::translate(model,glm::vec3(0,0,0));
    //model = glm::rotate(model,glm::radians(float(r)),glm::vec3(0,1,0));
    //model = glm::scale(model,.001f*glm::vec3(r,r,r));
    //std::cout << glm::to_string(model) << std::endl;
    auto pm =  glm::perspective(45.0,1.8,1.0,1000.0);
    //std::cout << glm::to_string(pm) << std::endl;
    GLint locatoin = glGetUniformLocation(ShaderProgram,"model");
    if (locatoin >= 0)
      glUniformMatrix4fv(locatoin,1,GL_FALSE,&model[0][0]);
    else
      std::cout << "uniform errrrorrrrr" << std::endl;
  }
}
