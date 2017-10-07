// Standard lib
#include <iostream>
#include <cstdlib>
// 3rd Party
#include <gtk/gtk.h>
#include <libwnck/libwnck.h>
// Yardstick
#include "UI/TrackerWindow.h"
#include "Managers/EventManager.h"

int main (int argc, char **argv)  {
    GtkApplication *app;
    GMainLoop *runLoop;
    WnckScreen *screen;
    EventManager *eventManager;

    // Init GTK
    gdk_init(&argc, &argv);

    screen = wnck_screen_get_default();
    app = gtk_application_new ("land.josh.Yardstick", G_APPLICATION_FLAGS_NONE);
    eventManager = new EventManager(app);
    eventManager->startTracking(screen);

    // When the application is ready [Determined by listening to the activate event] - init the window
    g_signal_connect(app, "activate", G_CALLBACK(TrackerWindow::createTrackerWindow), nullptr);
    // Run the GTK application explicitly.
    g_application_run(G_APPLICATION (app), argc, argv);

    delete(eventManager);
    g_object_unref(app);

    return 0;
}

