#include "Library.h"

Library::Library(const std::string &name):_name(name), _idCounterBooks(0){}

void Library::addBook(const Book& book) {
	_books.insert({ _idCounterBooks, book });
	_idCounterBooks++;
	std::cout << "The book '" << book.getTitle() << "' is registered in the library!\n";
}

void Library::modifyBook(int key, const std::string & newName) {
	auto it = _books.find(key);
	it->second.setAuthor(newName);
}

void Library::removeBook(int key){
	if (!_books.erase(key))
		std::cout << "Books with given id do not exist\n";
	std::cout << "The book has been removed from the library\n";
}

void Library::registredSubscriber(const Subscriber& sub){
	_subs.push(sub);
	std::cout << "Id: " << sub.getId() << " The subscriber " << sub.getName() << " is registered in the library!\n";
}

void Library::pop() {
	while (!_subs.empty()) {
		Subscriber& sub = _subs.front();
		std::string subBookWanted = sub.getBookWanted();			

			for (auto it = _books.begin(); it != _books.end(); it++) {
				if (it->second.getTitle() == subBookWanted) {
					std::cout << "The book '" << subBookWanted << "' issued to the subscriber " << sub.getName() << "\n";
					_books.erase(it);
					_subs.pop();
					return;
				}
			}
			std::cout << "The book '" << subBookWanted << "' requested by the subscriber " << sub.getName() << " is not in the library!" << "\n";
			_subs.pop();
	}	
}

void Library::showBooks(){
	for (const auto [idCounterBooks, book] : _books) {
		std::cout << "Id: " << idCounterBooks << " The book: '" << book.getTitle() << "'" << std::endl;
	}
}



void Library::showSubscriber() {		
	Subscriber& sub = _subs.front();
	while (_subs.empty()) {
		std::cout << "Id: " << ID_SUBSCRIBER << " Subscriber name: " << sub.getName() << std::endl;
		return;				
	}			
}
	