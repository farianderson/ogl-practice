#include "../../include/Angine/An_Render.hpp"
#include "../../include/Angine/An_Globals.hpp"

namespace An
{
  void CreateShaderProgram(const char* vs_src, const char* fs_src)
  {
    GLuint vshader = CompileShader(GL_VERTEX_SHADER, vs_src);
    GLuint fshader = CompileShader(GL_FRAGMENT_SHADER, fs_src);

    ShaderProgram = glCreateProgram();
    glAttachShader(ShaderProgram, vshader);
    glAttachShader(ShaderProgram, fshader);
    glLinkProgram(ShaderProgram);
    glValidateProgram(ShaderProgram);
  }
}
