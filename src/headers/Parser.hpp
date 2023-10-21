#ifndef PARSER_HPP
#define PARSER_HPP

#include "Run.hpp"
#include "ParserReciver.hpp"
#include "ParserSender.hpp"
#include <memory>

using namespace std;

class Parser : public Run{
    public:
    void run();
    private:
    unique_ptr<ParserReciver> parserReciver;
    unique_ptr<ParserSender> parserSender;
};

void Parser::run(){
    parserReciver->run();
    parserSender->run();
}
#endif