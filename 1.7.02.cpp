#include <iostream>

void swap(int &swapVar1, int &swapVar2)
{
	int temp{ swapVar1 };
	swapVar1 = swapVar2;
	swapVar2 = temp;
}

int main(int argc, char** argv)
{
	int variable1{ 5 }, variable2{ 8 };

	std::cout << "a = " << variable1 << ", b = " << variable2 << std::endl;

	swap(variable1, variable2);

	std::cout << "a = " << variable1 << ", b = " << variable2 << std::endl;
	return 0;
}
