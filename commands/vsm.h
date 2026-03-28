//
// Created by jackson on 3/22/26.
//

#ifndef TBOY_CLI_VSM_H
#define TBOY_CLI_VSM_H
#include "command.h"

namespace commands
{
    class Vsm : public Command
    {
    public:
        std::string name() const override { return "vsm"; };
        std::string description() const override { return "Returns a vector string map version of a list using a comma split. (Must have an even amount of values)"; };
        void execute(const std::vector<std::string>& args) override;
    };
} // commands

#endif //TBOY_CLI_VSM_H