//
// Created by josh on 10/7/17.
//

#include "ActiveWindowTracker.h"
#include <gtk/gtk.h>
#include <libwnck/libwnck.h>

ActiveWindowTracker::ActiveWindowTracker() {
}

// GTK Callbacks ---- Start
void onNewWindowOpened(WnckScreen *screen, WnckWindow *window, gpointer data) {
    /* Note: when this event is emitted while screen is initializing, there is no active window yet. */
    g_print ("%s\n", wnck_window_get_name(window));
}

void onActiveWindowChange (WnckScreen *screen, WnckWindow *previously_active_window, gpointer data) {
    WnckWindow *active_window;
    active_window = wnck_screen_get_active_window(screen);

    if (active_window)
        g_print ("active: %s\n", wnck_window_get_name(active_window));
    else
        g_print ("no active window\n");
}
// GTK Callbacks ---- End

void ActiveWindowTracker::getCurrentWindow() {

}

void ActiveWindowTracker::startTracking(WnckScreen *trackingScreen) {
    g_signal_connect(trackingScreen, "window-opened", G_CALLBACK(onNewWindowOpened), nullptr);
    g_signal_connect(trackingScreen, "active-window-changed", G_CALLBACK(onActiveWindowChange), nullptr);
}

