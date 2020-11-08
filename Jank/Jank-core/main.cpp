#define GLFW_INCLUDE_NONE //explicitly disables inclusion of development environment header. allows 2 headers to be included in any order
#include "src/graphics/window.h"
#include <iostream>

int main()
{
	using namespace jank;
	using namespace graphics;

	Window window("Jank!", 800, 600);

	while (!window.closed())
	{
		window.update();

		std::cout << window.getWidth() << ", " << window.getHeight() << std::endl;
	}

	return 0;
}