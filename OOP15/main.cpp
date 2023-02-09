#include <iostream>
#include <string>
#include <map>
#include <queue>
//#include "Book.h"
//#include "ILibrary.h"
//#include "Subscriber.h"
#include "Library.h"


int main()
{
    Book b1 (2008, "Bulgakov Mikhail", "The Master and Margarita", " ");
    Book b2 (2002, "Murakami Haruki", "The wind-up bird chronicle", " ");
    Book b3 (2003, "Roberts Gregory David", "Shantaram", " ");
    Book b4 (2007, "Leo Tolstoy", "War and Peace", " ");

    Subscriber sub1 ("Ivan", "The Mumu"); 
    Subscriber sub2 ("Bills", "The Master and Margarita");
    Subscriber sub3 ("Alis", "The wind-up bird chronicle");
    Subscriber sub4 ("Tom", "The Master and Margarita");
    Subscriber sub5 ("Bob", "Shantaram");


    Library lib1("MyLibrary");

    std::cout << "\tAdding Books to the Library:\n";
    lib1.addBook(b1);
    lib1.addBook(b2);
    lib1.addBook(b3);
    lib1.addBook(b4);
    std::cout << "=================================\n";

    std::cout << "\tRegistration of subscribers in the library:\n";
    lib1.registredSubscriber(sub1);
    lib1.registredSubscriber(sub2);
    lib1.registredSubscriber(sub3);
    lib1.registredSubscriber(sub4);
    lib1.registredSubscriber(sub5);
    std::cout << "=================================\n";

    std::cout << "\tList of books in the library:\n";
    lib1.showBooks();
    std::cout << "=================================\n";
    
    std::cout << "\tLending books from the library:\n";        
    lib1.pop();   
    std::cout << "=================================\n";

    std::cout << "List of remaining books in the library:\n";
    lib1.showBooks();
    std::cout << "=================================\n";
    
    return 0;    
}

