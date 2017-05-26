
// function object
// an object treaded as a function know as function object or sometimes functor
#include <iostream>

class MyFunctor
{
public:
	MyFunctor(int x, int y):firstValue(x),secondValue(y){}
	
	int  operator()(int x)
	{
		return (firstValue + secondValue + x);
	}
	// overload "()- call" operator
	int  operator()(int x, int y)
	{
		return (firstValue + secondValue + x + y);
	}
	
private:
	int firstValue;
	int secondValue;

};
int main()
{

	MyFunctor functionObject(10,20);
	std::cout<<"Function Object[Functor] in actions = " << functionObject(30)<<std::endl;
	std::cout<<"Function Object[Functor] in actions = " << functionObject(30,40)<<std::endl;
	
	return 0;


}
