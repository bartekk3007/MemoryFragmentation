#include <iostream>
#include "Message.hpp"
#include "Node.hpp"

Message* get_input()
{
	Message* mp = new Message(0, "Wiadomosc");
	return mp;
}

int main()
{
	std::cout << std::dec;
	for (int i = 0; i < 1000; i++)
	{
		Message* mp = get_input();
		std::cout << mp << '\n' << sizeof(mp) << '\n';
		Node* n1 = new Node[10];
		std::cout << n1 << '\n' << sizeof(n1) << '\n';
		delete mp;
		Node* n2 = new Node;
		std::cout << n2 << '\n' << sizeof(n2) << '\n';
		std::cout << '\n';
	}
	
	return 0;
}