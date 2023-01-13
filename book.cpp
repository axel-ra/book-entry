#include "book.h"

void Book::setAuthor(std::string _author){
    author = _author;
}

void Book::setTitle(std::string _title){
    title = _title;
}

void Book::setPublisher(std::string _publisher){
    publisher = _publisher;
}

std::string Book::getAuthor(){
    return author;
}

std::string Book::getTitle(){
    return title;
}

std::string Book::getPublisher(){
    return publisher;
}

void Book::print(){
    std::cout << "  " << std::endl;
    std::cout << "The following item has been added:" << std::endl;
    std::cout << "   Title: " << getTitle() << std::endl;
    std::cout << "   Author: " << getAuthor() << std::endl;
}

void Book::input(){
    std::string _title, _author, _publisher;
    std::cout << "Please enter the title: " << std::endl;
    std::cin >> _title;
    std::cout << "Please enter the author: " << std::endl;
    std::cin >> _author;
    std::cout << "Please enter the publisher: " << std::endl;
    std::cin >> _publisher;

    setTitle(_title);
    setAuthor(_author);
    setPublisher(_publisher);
}