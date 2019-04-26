#include "Process_allocator.h"
#include"form2.h"
#include<Windows.h>

using namespace SlobAllocator;

int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Process_allocator());
//	Application::Run(gcnew form2());

	return 0;
}