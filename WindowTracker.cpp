//
// Created by josh on 10/7/17.
//

#include "WindowTracker.h"


// Constructor / Initializer
WindowTracker::WindowTracker() {

}

bool isInactive;

std::string WindowTracker::getCurrentWindow() {
    return "Unknown";
}

void WindowTracker::detectInactivity() {

}

void WindowTracker::startTracking() {

}



/*

    // xgetfocus.c - link against libX11 /
    #include <X11/Xlib.h>
    #include <stdio.h>

    int main(int argc, char *argv[]) {
        Display *display;
        Window focus;
        char *window_name;
        int revert;

        display = XOpenDisplay(NULL);
        XGetInputFocus(display, &focus, &revert);
        XFetchName(display, focus, &window_name);

        printf("%s\n", window_name);

        return 0;
    }

 */



