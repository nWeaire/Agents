#include "Application2D.h"
#include "Heap.h"
#include <crtdbg.h>
#include <iostream>


//At start of main()

int main() 
{
	Heap<int> test;
	test.Push(5);
	test.Push(15);
	test.Push(45);
	test.Push(3);
	test.Push(2);

	std::cout << test.Pop() << std::endl;
	std::cout << test.Pop() << std::endl;
	std::cout << test.Pop() << std::endl;
	std::cout << test.Pop() << std::endl;
	std::cout << test.Pop() << std::endl;

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	Application2D* app = new Application2D();
	app->run("AIE", 1280, 720, false);
	delete app;

	return 0;
}