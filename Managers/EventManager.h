//
// Created by josh on 10/7/17.
//

#ifndef YARDSTICK_EVENTMANAGER_H
#define YARDSTICK_EVENTMANAGER_H

#include "../Trackers/ActiveWindowTracker.h"
#include <gtk/gtk.h>
#include <libwnck/libwnck.h>

class EventManager {
public:
    explicit EventManager(GtkApplication *application);
    void startTracking(WnckScreen *trackingScreen);
    void stopTracking();
    bool isUserInactive;


private:
    GtkApplication *appReference;
    ActiveWindowTracker *activeWindowTracker;
};


#endif //YARDSTICK_EVENTMANAGER_H
