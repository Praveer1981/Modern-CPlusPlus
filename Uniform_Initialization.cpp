#include <iostream>
#include <vector>

using namespace std;

int main()
{
cout<<" This is the Modern C++ - Hello World"<<"\n";
// initialise vector just like array
// std::vector<int> myVector = {1,2,3,4,5,6,7};
std::vector<int> myVector{1,2,3,4,5,6,7,8,9,10};
for( auto x : myVector )
{
	std::cout<<x<<std::endl;
}

return 0;
}