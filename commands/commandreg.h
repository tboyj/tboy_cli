//
// Created by jackson on 3/22/26.
//

#ifndef TBOY_CLI_COMMANDREG_H
#define TBOY_CLI_COMMANDREG_H
#include <map>
#include <memory>

#include "command.h"

namespace commands
{
    class CommandReg
    {
        public:
        void registerCommand(std::unique_ptr<Command> cmd);
        void execute(const std::string& name, const std::vector<std::string>& args);
        private:
        std::map<std::string, std::unique_ptr<Command>> commands_;
    };
}

#endif //TBOY_CLI_COMMANDREG_H
