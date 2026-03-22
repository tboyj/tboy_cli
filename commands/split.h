//
// Created by jackson on 3/22/26.
//

#ifndef TBOY_CLI_SPLIT_H
#define TBOY_CLI_SPLIT_H
#include "command.h"

namespace commands
{
    class Split : public Command
    {
        public:
        std::string name() const override { return "split"; };
        std::string description() const override { return "Splits input into an array based on the delimiter"; };
        void execute(const std::vector<std::string>& args) override;
        std::string returnName() override { return name(); }
        std::string returnDescription() override { return description(); }
    };
} // commands

#endif //TBOY_CLI_SPLIT_H