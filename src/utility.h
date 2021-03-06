//
// Created by cpasjuste on 15/01/2020.
//

#ifndef RETRODREAM_UTILITY_H
#define RETRODREAM_UTILITY_H

#include <string>
#include "cross2d/skeleton/io.h"

class RetroUtility {

public:

    static bool isGame(const std::string &fileName);

    static bool isElf(const std::string &fileName);

    static void exec(const std::string &path);

    static float percentSize(float size, float percent);

    static std::string findPath(c2d::Io *io, const std::string &path);

    static bool screenshot(c2d::Io *io, const std::string &path);
};

#define PERCENT(x1, x2) RetroUtility::percentSize(x1, x2)

#endif //RETRODREAM_UTILITY_H
