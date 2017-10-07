//
// Created by josh on 10/7/17.
//

#ifndef YARDSTICK_ACTIVEWINDOW_H
#define YARDSTICK_ACTIVEWINDOW_H

#include <gtk/gtk.h>
#include <libwnck/libwnck.h>

class ActiveWindowTracker {
private:
    void getCurrentWindow();
public:
    ActiveWindowTracker();
    void startTracking(WnckScreen *trackingScreen);
};


#endif //YARDSTICK_ACTIVEWINDOW_H
