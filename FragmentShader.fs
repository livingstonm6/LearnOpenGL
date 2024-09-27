#version 330 core

out vec4 FragColor;
in vec3 ourColor;
in vec2 TexCoord;

uniform sampler2D texture1;
uniform sampler2D texture2;
uniform float mixConstant;

vec2 tCoords;

void main()
{
   tCoords = vec2(-TexCoord.x, TexCoord.y);
   FragColor = mix(texture(texture1, tCoords), texture(texture2, tCoords), mixConstant);
}