cmake_minimum_required(VERSION 3.8)
project(yardstick)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp UI/TrackerWindow.cpp UI/TrackerWindow.h Trackers/ActiveWindowTracker.cpp Trackers/ActiveWindowTracker.h Trackers/NetworkActivityTracker.cpp Trackers/NetworkActivityTracker.h Managers/EventManager.cpp Managers/EventManager.h)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)
pkg_check_modules(LIBWNCK REQUIRED libwnck-3.0)

include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})

add_definitions(${GTK3_CFLAGS_OTHER} ${LIBWNCK_CFLAGS} ${LIBWNCK_CFLAGS_OTHER} -DWNCK_I_KNOW_THIS_IS_UNSTABLE)
link_libraries(${WNCK_LIBRARIES})

add_executable(yardstick ${SOURCE_FILES})
set(libwnck-3.0)


target_link_libraries(yardstick ${GTK3_LIBRARIES} ${LIBWNCK_LIBRARIES})