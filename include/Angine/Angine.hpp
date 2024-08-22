#ifndef Angine
#define Angine

#include <chrono>
#include <vector>

#include <SDL2/SDL.h>
#include "../../include/glad/glad.h"

namespace An
{
  // defined in An_Globals.cpp
  extern bool IsPlaying;
  extern SDL_Window* Window;
  extern SDL_GLContext Context;

  extern GLuint VAO;
  extern GLuint VBO;
  extern GLuint ShaderProgram;
  // vertex data. defined in An_VertexData.cpp
  extern const std::vector<GLfloat> hi_tri;
  // shader sources are initiated in An_vshader_src.cpp and An_fshader_src.cpp
  extern const char* vshader_src;
  // shader sources are initiated in An_vshader_src.cpp and An_fshader_src.cpp
  extern const char* fshader_src;
  
  extern std::vector<GLfloat> CleaerColor;

  // initializing the Angine. defined in An_Init.cpp
  void Init();

  // makes sure SDL is loaded properly. defined in An_LoadSDL.cpp
  void LoadSDL();

  // sets opengl attributes. defined in An_glAttribs.cpp
  void glAttribs(int major, int minor, int depth_size);

  // creates An::Window, the Angine's window. defined in An_CreateWindow.cpp
  void CreateWindow(const char* title, int x, int y, int w, int h,
      Uint32 SDL_WindowFlags);

  // loads glad's GL Loader into SDL_GL_GetProcAddress. defined in 
  //  An_LoadGlad.cpp
  void LoadGlad();

  // creates An::Context based on An::Window. defined in An_CreateContext.cpp
  void CreateContext();

  // prints some info about opengl if glad is loaded properly. defined in
  //  An_LoadGlad.cpp
  void glInfo();

  // defined in An_PipeLine.cpp
  void PipeLine();

  // creates some vertex data and sends it to the GPU. defined in An_TalkToThe
  //  Vertex.cpp
  void TalkToTheVertex();

  // defined in An_PreDraw.cpp
  void PreDraw();

  // defined in An_Draw.cpp
  void Draw();

  // creates a shader program and puts it into An::ShaderProgram. defined in
  //  An_CreateShaderProgram.cpp
  void CreateShaderProgram(const char* vshader_src, const char* fshader_src);

  // compiles a shader source text into a shader. defined in An_ComplieShader.
  //  cpp
  GLuint CompileShader(GLenum type, const char* src);

  // Angine's main loop. defined in An_Loop.cpp
  void Loop();

  // prints out the fps. frames and start_time_point should be passed by
  // reference. defined in An_fpsCalc.cpp
  void fpsCalc(int& frames,std::chrono::time_point<std::chrono::steady_clock>&
      start_time_point);

  // clean ups before exiting the Angine, defined in An_CleanUps.cpp
  void CleanUps();
  // destroys the An::Context. defined in An_CleanUps.cpp
  void DeleteContext();
  // destroys the An::Window. defined in An_CleanUps.cpp
  void DestroyWindow();


  // exit program returning 'status'
  void Exit(int status);

}

#endif
