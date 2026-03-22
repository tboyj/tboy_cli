//
// Created by jackson on 3/22/26.
//

#ifndef TBOY_CLI_TCA_H
#define TBOY_CLI_TCA_H
#include "command.h"

namespace commands
{
    class Tca : public Command
    {
        public:
        std::string name() const override { return "tca"; };
        std::string description() const override { return "Returns a character array of the string"; };
        void execute(const std::vector<std::string>& args) override;
        std::string returnName() override { return name(); }
        std::string returnDescription() override { return description(); }
    };
} // commands

#endif //TBOY_CLI_TCA_H