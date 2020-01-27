//
// Created by cpasjuste on 24/01/2020.
//

#include <cross2d/c2d.h>
#include "infobox.h"
#include "main.h"

using namespace c2d;

InfoBox::InfoBox(const c2d::FloatRect &rect)
        : RoundedRectangleShape({rect.width, rect.height}, 10, 8) {

    setPosition(rect.left, rect.top);
    text = new Text("ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789-.", FONT_SIZE);
    text->setString("");
    text->setPosition(6, 4);
    text->setOutlineColor(Color::Black);
    text->setOutlineThickness(1);
    add(text);
}
