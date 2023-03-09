#include <iostream>

// import commands
#include "commands/example.h++"

// commands enum
enum command 
{
    Example,
    Invalid
};

command getCommand(std::string & input)
{
    if(input == "example") return Example;
    return Invalid;
}

int main(int argc, char *argv[])
{
    std::string commandNameString = argv[1];
    command commandEnum = getCommand(commandNameString);

    switch(commandEnum)
    {
        case Example:
            example();
            break;
        case Invalid:
            std::cout << "invalid command type";
            exit(1);
    }

    return 0;
}