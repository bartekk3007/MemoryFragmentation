#include <iostream>
#include <string>

class Message
{
public:
	int id;
	std::string content;
	Message(int id, std::string content) : id(id), content(content)
	{

	}
	/*
	Message() : id(-1), content("")
	{

	}
	*/
};