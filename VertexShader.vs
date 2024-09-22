#version 330 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aColor;
uniform float offset;

out vec3 ourColor;
out vec4 pos;

void main()
{
   pos = vec4(aPos.x, aPos.y, aPos.z, 1.0);
   gl_Position = pos;
   ourColor = aColor;
}