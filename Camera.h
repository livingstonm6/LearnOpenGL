#pragma once
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtc/type_ptr.hpp"
#include <GLFW/glfw3.h>

static float lastX = 400, lastY = 300;
static float yaw = -90.0f;
static float pitch = 0.0f;
static float fov = 45.0f;
static bool firstMouse = true;
static glm::vec3 cameraFront = glm::vec3(0.0f, 0.0f, -1.0f);
static glm::vec3 cameraPos = glm::vec3(0.0f, 0.0f, 3.0f);

void mouse_callback(GLFWwindow* window, double xpos, double ypos);
void scroll_callback(GLFWwindow* window, double xoffset, double yoffset);

class Camera
{
public:
	Camera(GLFWwindow* window) {
		glfwSetCursorPosCallback(window, mouse_callback);
		glfwSetScrollCallback(window, scroll_callback);
	}

	glm::vec3 cameraUp = glm::vec3(0.0f, 1.0f, 0.0f);

	void handleInput(GLFWwindow* window, float speed);
	glm::mat4 createViewMatrix();
};

