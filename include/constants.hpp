#ifndef METROID_CONSTANTS_H
#define METROID_CONSTANTS_H

#include <string>

namespace SamusMovement {
    const int horizontalStep = 10;
    const int initialVerticalVelocity = 10;
}

namespace MetroidMovement {
    const int horizontalStep = 10;
    const int ElasticConstant = 5;
    const int DampingConstant = 5;
}

namespace Room {
    const std::string texturesFile = "texture_filenames.txt";
}

#endif
