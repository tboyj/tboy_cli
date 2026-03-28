//
// Created by jackson on 3/22/26.
//

#include "help.h"

#include <iostream>
#include <ostream>

#include "split.h"
#include "tca.h"
#include "time.h"
#include "vsm.h"


namespace commands
{
    void Help::execute(const std::vector<std::string>& args)
    {
        Help help;
        Split split;
        Tca tca;
        Time time;
        Vsm vsm;

        std::cout << "tboy_cli - commands: " << std::endl;
        std::cout << help.name() << " - " << help.description() << std::endl;
        std::cout << split.name() << " - " << split.description() << std::endl;
        std::cout << tca.name() << " - " << tca.description() << std::endl;
        std::cout << time.name() << " - " << time.description() << std::endl;
        std::cout << vsm.name() << " - " << vsm.description() << std::endl;
    }

} // commands