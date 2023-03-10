#pragma once
#include <string>

static int ID_SUBSCRIBER = 0;

class Subscriber
{

public:
	Subscriber(const std::string& name, const std::string& bookWanted);

	const std::string& getName() const;

	const std::string& getBookWanted()const;
	int getId()const;

	void setName(const std::string& name);
	void setBookWanted(const std::string& bookWanted);
	

private:
	int _id;
	std::string _name;
	std::string _bookWanted;
};

