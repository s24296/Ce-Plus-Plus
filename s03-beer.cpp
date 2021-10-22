#include <iostream>
#include <string>

auto inside(std::string init) -> void
{
		auto a = std::stoi(init);
		
		if (a > 0){
				for(int i=a; i>0; i--){
				std::cout << i << " bottles of beer on the wall, " << i <<  " bottles of beer" << '\n';
				std::cout << "Take one down, pass it around, " << i << " bottles of beer on the wall.." << '\n';
			}
		}
	}
	
auto main(int argc, char* argv[]) -> int
{
	
	inside(argv[1]);
	std::cout << "No more bottles of beer on the wall, no more bottles of beer" << '\n';
	std::cout << "Go to the store and buy some more, 99 bottles of beer on the wall" << '\n';
	
	
	return 0;
	
}
