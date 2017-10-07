//
// Created by josh on 10/7/17.
//

#include "EventManager.h"

GtkApplication *appReference;
ActiveWindowTracker *activeWindowTracker;


EventManager::EventManager(GtkApplication *application) {
    this->appReference = application;
    this->activeWindowTracker = new ActiveWindowTracker();
}

void EventManager::startTracking(WnckScreen *trackingScreen) {
    activeWindowTracker->startTracking(trackingScreen);
}

void EventManager::stopTracking() {
}

void EventManager::initKeyboardTracking() {
}

void EventManager::initNetworkTracking() {
}

void EventManager::initWindowTracking() {
}