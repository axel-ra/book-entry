#ifndef BOOK_H
#define BOOK_H

#include <iostream>

class Book {
    private:
        std::string author;
        std::string title;
        std::string publisher;

    public:
        void setAuthor(std::string _author);
        void setTitle(std::string _title);
        void setPublisher(std::string _publisher);
        std::string getAuthor();
        std::string getTitle();
        std::string getPublisher();
        void print();
        void input();
};

#endif