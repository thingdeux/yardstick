//
// Created by josh on 10/7/17.
//

#include "TrackerWindow.h"

void TrackerWindow::createTrackerWindow(GtkApplication* app, gpointer user_data) {
    GtkWidget *window;

    window = gtk_application_window_new (app);
    gtk_window_set_title (GTK_WINDOW (window), "Yardstick");
    gtk_window_set_default_size (GTK_WINDOW (window), 300, 600);
    gtk_widget_show_all (window);
}