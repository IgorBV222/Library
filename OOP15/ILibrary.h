#pragma once
#include "Book.h"
#include "Subscriber.h"
#include <queue>


class ILibrary{
public:
	virtual void addBook(const Book& book) = 0;
	virtual void modifyBook(int key, const std::string& newName)= 0;
	virtual void removeBook(int key) = 0;

	virtual void registredSubscriber(const Subscriber& sub) = 0;

	virtual ~ILibrary(){}
};

