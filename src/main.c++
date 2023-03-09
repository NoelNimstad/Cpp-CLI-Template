#include <iostream>

// import commands
#include "commands/example.h++"
/* #include "commands/yourCommand.h++" */

// commands enum
enum command 
{
    Example,
    // YourEnum
    Invalid
};

command getCommand(std::string & input)
{
    if(input == "example") return Example;
    // if(input == "whatYouWantTheUserToTypeInTheTerminal") return YourEnum;
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
        /*
        case YourEnum:
            if(!argv[2]) // if there isn't another argument
            {
                std::cout << "missing second argument!"
                exit(1);
            }

            yourCommand(); (imported from commands/yourCommand.h++)
            break;
        */
        case Invalid:
            std::cout << "invalid command type";
            exit(1);
    }

    return 0;
}