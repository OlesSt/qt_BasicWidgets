cmake_minimum_required(VERSION 3.14)

project(qt_BasicWidgets LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Widgets StateMachine Charts Multimedia)

add_executable(qt_BasicWidgets
  main.cpp

  mainwindow.h
  mainwindow.cpp
  mainwindow.ui

  myprogressbar.h
  myprogressbar.cpp
  myprogressbar.ui

  spinbox.h
  spinbox.cpp
  spinbox.ui

  myslider.h
  myslider.cpp
  myslider.ui

  myradiobutton.h
  myradiobutton.cpp
  myradiobutton.ui

  messagedialog.h
  messagedialog.cpp
  messagedialog.ui

  listwidget.h
  listwidget.cpp
  listwidget.ui

  lcdnumber.h
  lcdnumber.cpp
  lcdnumber.ui

  inputdialog.h
  inputdialog.cpp
  inputdialog.ui

  combobox.h
  combobox.cpp
  combobox.ui

  checkbox.h
  checkbox.cpp
  checkbox.ui

  calendar.h
  calendar.cpp
  calendar.ui

  lineedit.h
  lineedit.cpp
  lineedit.ui

  table.h
  table.cpp
  table.ui

  animationstate.h
  animationstate.cpp
  animationstate.ui

  animationproperty.h
  animationproperty.cpp
  animationproperty.ui

  charts.h
  charts.cpp
  charts.ui

  paintclock.h
  paintclock.cpp
  paintclock.ui

  dragdrop.h
  dragdrop.cpp
  dragdrop.ui

  diagram.h
  diagram.cpp
  diagram.ui
)
target_link_libraries(qt_BasicWidgets Qt${QT_VERSION_MAJOR}::Core
                                      Qt${QT_VERSION_MAJOR}::Widgets
                                      Qt${QT_VERSION_MAJOR}::StateMachine
                                      Qt${QT_VERSION_MAJOR}::Charts
                                      Qt${QT_VERSION_MAJOR}::Multimedia)

install(TARGETS qt_BasicWidgets
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
