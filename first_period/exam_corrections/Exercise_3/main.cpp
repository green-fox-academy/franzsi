#include <iostream>
#include "soft_cover_book.h"
#include "hard_cover_book.h"
#include "book_shelf.h"

int main()
{

    BookShelf bookShelf;
    SoftCoverBook softCoverBook1("Author1", "Title1", 2016, 234);
    SoftCoverBook softCoverBook2("Author2", "Title2", 2013, 2125);
    SoftCoverBook softCoverBook3("Author3", "Title3", 2011, 165);
    SoftCoverBook softCoverBook4("Author4", "Title4", 2016, 656);

    HardCoverBook hardCoverBook1("Author5", "Title5", 2015, 453);
    HardCoverBook hardCoverBook2("Author6", "Title6", 2012, 1234);
    HardCoverBook hardCoverBook3("Author6", "Title6", 2013, 162);
    HardCoverBook hardCoverBook4("Author7", "Title7", 2010, 632);

    bookShelf.addBook(&softCoverBook1);
    bookShelf.addBook(&softCoverBook2);
    bookShelf.addBook(&softCoverBook3);
    bookShelf.addBook(&softCoverBook4);

    bookShelf.addBook(&hardCoverBook1);
    bookShelf.addBook(&hardCoverBook2);
    bookShelf.addBook(&hardCoverBook3);
    bookShelf.addBook(&hardCoverBook4);

    std::vector<Book*> books = bookShelf.getBooks();
    for (int i = 0; i < books.size(); ++i) {
        std::cout << books[i]->info() << std::endl;
    }

    std::cout << "Author of the lightest book: " << bookShelf.getAuthorOfLightestBook() << std::endl;
    std::cout << "Author of the longest book: " << bookShelf.getAuthorOfLongestBook() << std::endl;

    return 0;
}