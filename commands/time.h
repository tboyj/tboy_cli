//
// Created by jackson on 3/22/26.
//

#ifndef TBOY_CLI_TIME_H
#define TBOY_CLI_TIME_H
#include "command.h"

namespace commands
{
    class Time : public Command
    {
        public:
        std::string name() const override { return "time"; };
        std::string description() const override { return "Returns the current time."; };
        void execute(const std::vector<std::string>& args) override;
        std::string returnName() override { return name(); }
        std::string returnDescription() override { return description(); }
    };
} // commands

#endif //TBOY_CLI_TIME_H