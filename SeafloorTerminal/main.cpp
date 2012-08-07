#include "engine.h"
#include <memory>

int main()
{
    std::unique_ptr<Engine> engine(new Engine());
    engine->Start();

    return 0;
}
