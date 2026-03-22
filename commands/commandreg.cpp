//
// Created by jackson on 3/22/26.
//

#include "commandreg.h"

#include <iostream>
#include <string>
#include <vector>

namespace commands
{
    void CommandReg::registerCommand(std::unique_ptr<Command> cmd)
    {
        commands_[cmd->name()] = std::move(cmd);
    }

    void CommandReg::execute(const std::string& name, const std::vector<std::string>& args)
    {
        if (commands_.find(name) == commands_.end())
        {
            std::cerr << "Command \"" << name << "\" not found." << std::endl;
            return;
        }
        commands_[name]->execute(args);
    }
}
