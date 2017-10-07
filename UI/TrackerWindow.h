//
// Created by josh on 10/7/17.
//

#ifndef YARDSTICK_TRACKERWINDOW_H
#define YARDSTICK_TRACKERWINDOW_H

#include <gtk/gtk.h>
#include <libwnck/libwnck.h>

class TrackerWindow {
    public:
        static void createTrackerWindow(GtkApplication* app, gpointer user_data);
};


#endif //YARDSTICK_TRACKERWINDOW_H
