#include <ncurses.h>

#include "Logger.h"

int* Logger::verbosity = new int(1);

int main()
{
    // Remove later
    Logger::SetVerbosity(0);
    
    

    return 0;
}
