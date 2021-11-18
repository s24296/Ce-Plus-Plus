#include <iostream>
#include <string>
#include <cmath>
#include <vector>

std::vector<std::string> create_vector(int const argc, char* argv[])
{
	std::vector <std::string> vector_to_create;
	for (int i=0; i < argc; i++)
	{
		vector_to_create.push_back(std::string(argv[i]));
	}
	return vector_to_create;
}

int choice;
float x, y, a, b;
int main(int argc, char*argv[])
{
	auto main_vector=create_vector(argc, argv);
	int n1;
	int n2;
	std::cout<<"Co chcesz zrobic?\n";
	std::cout<<"---------------------------\n";
	std::cout<<"1. Dodawanie\n";
	std::cout<<"2. Odejmowanie\n";
	std::cout<<"3. Mnozenie\n";
	std::cout<<"4. Dzielenie\n";
	std::cout<<"5. Silnia\n";
	std::cout<<"6. Potegowanie\n";
	std::cout<<"7. Pierwiastek drugiego stopnia\n";
	std::cout<<"Twoje dzialanie: ";
	std::cin>>choice;
	
	n1 = std::stoi(argv[1]);
	n2 = std::stoi(argv[2]);
	
	for (int i = 1; i < argc-1; i = i + 1)
	{
		switch (choice)
		{
			case 1:
				std::cout<<(n1+n2)<<"\n";
				break;
			case 2:
				std::cout<<(n1-n2)<<"\n";
				break;
			case 3:
				std::cout<<(n1*n2)<<"\n";
				break;
			case 4:
				std::cout<<(n1/n2)<<"\n";
				break;
			case 5:
				std::cout<<(n1!)<<"\n";
				std::cout<<(n2!)<<"\n";
				break;
			case 6:
				exponent = n1;
				base = n2;
				for (int i=0; i<exponent; i++)
				{
					power*=base
				}
				std::cout<<power<<"\n";
				break;
			case 7:
				a=n1;
				b=n2;
				c=sqrt(a);
				d=sqrt(b);
				std::cout<<"Pierwiastek pierwszej liczby: "<< c <<"\n";
				std::cout<<"Pierwiastek drugiej liczby: "<< d <<"\n";		
		}
	}

return(0);

}
