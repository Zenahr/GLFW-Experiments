#include "Common.hpp"
#include <string>
#include <GLFW/glfw3.h>
#include <glew.h>

#include "Rendering/PixelBuffer.hpp"
#include "Rendering/Renderer.hpp"

namespace Zenahr {

	unsigned int windowW = 640;
	unsigned int windowH = 480;
	char* windowTitle = "Zenahr Pixel Test";
	// Init window
	GLFWwindow* window;

	static void Init() {
		if (!glfwInit()) {
			std::cout << "GLFW init failed." << std::endl;
		}
		
		window = glfwCreateWindow(windowW, windowH, windowTitle, nullptr, nullptr);
		if (!window) {
			std::cout << "Window init failed." << std::endl;
		}

		// Make current window the windowcontext for further operations
		glfwMakeContextCurrent(window);
	}

	void Draw() {
		unsigned int W = 100;
		unsigned int H = 100;
		unsigned char* data = new unsigned char[H * W * 3];
		for (int y = 0; y < H; y++) {
			for (int x = 0; x < W; x++) {
				data[y * 100 * 3 + x * 3	] = 0xff;
				data[y * 100 * 3 + x * 3 + 1] = 0x00;
				data[y * 100 * 3 + x * 3 + 2] = 0x00;
			}
		}
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glDrawPixels(100, 100, GL_RGB, GL_UNSIGNED_BYTE);
	}

	void Update() {
		while (!glfwWindowShouldClose(window)) {
			glfwWaitEvents();
		}
	}

}


int main(int, char**) {
    Zenahr::Init();
    Zenahr::Update();
    //Zenahr::Clean();
    return 0;
}
