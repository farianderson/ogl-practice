#include "../../include/Angine/An_Utilities.hpp"
#include "../../include/Angine/An_Globals.hpp"

#include "../../include/glad/glad.h"
#include <iostream>

namespace An
{
  void ViewPortUpdate(){
    int w,h;
    SDL_GL_GetDrawableSize(Window,&w,&h);
    std::cout << "window size: "<< "w: " << w << ", h: " <<
      h << std::endl;

    GLint* xywh = new GLint[4];
    glGetIntegerv(GL_VIEWPORT,xywh);
    std::cout <<"view port size: " << "w: " << xywh[2] << 
      ", h: " << xywh[3] << std::endl;
    if(w!=xywh[2]||h!=xywh[3])
      glViewport(0,0,w,h);
    delete[] xywh;
  }
}
