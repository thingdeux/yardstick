//
// Created by josh on 10/7/17.
//

#ifndef YARDSTICK_WINDOWTRACKER_H
#define YARDSTICK_WINDOWTRACKER_H

#include <string>

class WindowTracker {

private:
    std::string getCurrentWindow();
    void detectInactivity();
public:
    WindowTracker();
    void startTracking();
    bool isInactive;

};

#endif YARDSTICK_WINDOWTRACKER_H