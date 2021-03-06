//
// Created by cpasjuste on 16/01/2020.
//

#ifndef RETRODREAM_PREVIEW_H
#define RETRODREAM_PREVIEW_H

#include "cross2d/skeleton/sfml/RoundedRectangleShape.h"

class Preview : public c2d::RoundedRectangleShape {

public:

    Preview(const c2d::FloatRect &rect);

    void load(const std::string &path = "");

    void unload();

    bool isLoaded();

private:

    c2d::Texture *texture = nullptr;
    bool loaded = false;

};

#endif //RETRODREAM_PREVIEW_H
