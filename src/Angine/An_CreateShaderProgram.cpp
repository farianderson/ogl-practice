#include "../../include/Angine/An_Render.hpp"
#include "../../include/Angine/An_Globals.hpp"

#include <iostream>
#include <chrono>

namespace An
{
  void CreateShaderProgram(const GLchar* vs_src, const GLchar* fs_src)
  {
    std::cout << "compiling shaders...\n";
    auto start = std::chrono::steady_clock::now();

    GLuint vshader = CompileShader(GL_VERTEX_SHADER, vs_src);
    GLuint fshader = CompileShader(GL_FRAGMENT_SHADER, fs_src);

    ShaderProgram = glCreateProgram();
    glAttachShader(ShaderProgram, vshader);
    glAttachShader(ShaderProgram, fshader);

    glLinkProgram(ShaderProgram);

    auto end = std::chrono::steady_clock::now();
    auto dur =
      std::chrono::duration<float,std::milli>(end-start).count();

    if(ShaderProgramLog())
      std::cout << "compiled in " << dur << " ms\n";


  }
}
