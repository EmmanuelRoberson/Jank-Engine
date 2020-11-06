#define GLFW_INCLUDE_NONE //explicitly disables includion of development environment header. allows 2 headers to be included in any order
#include <GLFW/glfw3.h>
#include <iostream>

int main()
{
	if (!glfwInit())
	{
		std::cout << "GLFW :: Initialization Failed" << std::endl;
	}
	else
		std::cout << "GLFW :: Initialization Succeeded" << std::endl;

	glfwTerminate();

	return 0;
}