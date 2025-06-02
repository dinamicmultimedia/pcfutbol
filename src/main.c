#include <GLFW/glfw3.h>
#include <stdlib.h>


int main(void)
{
	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}

	GLFWwindow* window = glfwCreateWindow(640, 480, "PC Futbol", NULL, NULL);

	if (!window) {
		glfwTerminate();

		exit(EXIT_FAILURE);
	}

	glfwMakeContextCurrent(window);

	while (!glfwWindowShouldClose(window)) {
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwDestroyWindow(window);

	glfwTerminate();

	exit(EXIT_SUCCESS);
}