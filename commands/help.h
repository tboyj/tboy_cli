//
// Created by jackson on 3/22/26.
//

#ifndef TBOY_CLI_HELP_H
#define TBOY_CLI_HELP_H
#include "command.h"

namespace commands
{
    class Help: public Command
    {
        public:
        std::string name() const override { return "help"; }
        std::string description() const override { return "print help information"; }
        void execute(const std::vector<std::string>& args) override;
    };
} // commands

#endif //TBOY_CLI_HELP_H
