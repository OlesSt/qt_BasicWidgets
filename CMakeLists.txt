cmake_minimum_required(VERSION 3.14)

project(qt_BasicWidgets LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Widgets)

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

)
target_link_libraries(qt_BasicWidgets Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Widgets)

install(TARGETS qt_BasicWidgets
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
