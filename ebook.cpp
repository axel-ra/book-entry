#include "ebook.h"

void ebook::setFormat(std::string _format){
    format = _format;
}

void ebook::setID(int _id){
    id = _id;
}

std::string ebook::getFormat(){
    return format;
}

int ebook::getID(){
    return id;
}

void ebook::print(){
    Book::print();
    std::cout << "   Type: ebook" << std::endl;
}

void ebook::input(){
    Book::input();
    std::string _format;
    int _id;

    std::cout << "Please enter the format: " << std::endl;
    std::cin >> _format;

    std::cout << "Please enter the id: " << std::endl;
    std::cin >> _id;

    setFormat(_format);

    setID(_id);
    print();
}