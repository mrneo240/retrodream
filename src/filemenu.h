//
// Created by cpasjuste on 21/01/2020.
//

#ifndef RETRODREAM_FILEMENU_H
#define RETRODREAM_FILEMENU_H

#include "isoloader.h"

class FileMenu : public c2d::RoundedRectangleShape {

public:
    enum GameOption {
        Mode = 0,
        Memory,
        Dma,
        Async,
        Cdda,
        Device,
        Type
    };

    explicit FileMenu(RetroDream *rd, const c2d::FloatRect &rect);

    void setTitle(const std::string &text);

    void save();

    void setVisibility(c2d::Visibility visibility, bool tweenPlay = false) override;

    bool onInput(c2d::Input::Player *players) override;

private:

    static std::vector<std::string> getAddresses();

    RetroDream *retroDream = nullptr;
    c2d::Text *title = nullptr;
    c2d::ConfigBox *configBox = nullptr;
    c2d::config::Group presetConfig;
    c2d::config::Group fileConfig;
    IsoLoader::Config isoLoaderConfig;
    bool dirty = false;
};

#endif //RETRODREAM_FILEMENU_H
