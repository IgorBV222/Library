#pragma once
#include "ILibrary.h"
#include <string>
#include <map>
#include <queue>
#include <iostream>

class Library : public ILibrary{
public:
	Library(const std::string& name);
	

	void addBook(const Book& book) override;
	void modifyBook(int key, const std::string& newName) override;
	void removeBook(int key) override;
	void registredSubscriber(const Subscriber& sub) override;
	void pop();
	void showBooks();
	void showSubscriber();


private:
	std::string _name;
	std::map <int, Book> _books;
	std::queue <Subscriber> _subs;
	int _idCounterBooks;
};

