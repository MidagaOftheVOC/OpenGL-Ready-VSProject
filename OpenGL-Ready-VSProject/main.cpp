
#define GLEW_STATIC


#include "dependancies/GL/glew.h"
#include "dependancies/GLFW/glfw3.h"

#include <iostream>

int main() {

    GLFWwindow* window;

    if (!glfwInit()) {
        std::cout << "Window not opened.\n";
    }

    window = glfwCreateWindow(200, 200, "Hui", NULL, NULL);
    if (!window) {
        glfwTerminate();
    }

    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);
    GLenum glewReturnCode = glewInit();
    if (glewReturnCode != GLEW_OK) {
        std::cout << glewGetErrorString(glewReturnCode);
    }


	int a;
	std::cin >> a; 

	glfwDestroyWindow(window);
}




