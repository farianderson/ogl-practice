#version 410

out vec3 color;

layout(location=0)in vec2 pos;
layout(location=1)in vec3 col;

void main()
{
  gl_Position = vec4(pos.x,pos.y,0.0,1.0);
  color = vec3(col.r, col.g, col.b);
}
