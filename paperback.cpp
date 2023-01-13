#include "paperback.h"

void paperback::setID(int _id){
    id = _id;
}

void paperback::setPages(int _pages){
    pages = _pages;
}

int paperback::getID(){
    return id;
}

int paperback::getPages(){
    return pages;
}

void paperback::print(){
    Book::print();
    std::cout << "   Type: paperback" << std::endl;
}

void paperback::input(){
    Book::input();
    int _id;
    int _pages;

    std::cout << "Please enter the id: " << std::endl;
    std::cin >> _id;

    std::cout << "Please enter the number of pages: " << std::endl;
    std::cin >> _pages;

    setID(_id);
    setPages(_pages);
    print();
}
