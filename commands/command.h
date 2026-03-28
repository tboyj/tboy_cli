//
// Created by jackson on 3/22/26.
//

#ifndef TBOY_CLI_COMMAND_H
#define TBOY_CLI_COMMAND_H
#include <string>
#include <vector>

namespace commands
{
    class Command
    {
    public:
        virtual ~Command();
        virtual std::string name() const = 0;
        virtual std::string description() const = 0;
        virtual void execute(const std::vector<std::string>& args) = 0;

    };
}
#endif //TBOY_CLI_COMMAND_H
