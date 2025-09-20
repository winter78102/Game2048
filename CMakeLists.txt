cmake_minimum_required(VERSION 3.16)
project(Game LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Widgets Gui)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Widgets Gui)

add_executable(Game
  # core
  game.cpp
  game.h
  Actions.h
  UpActions.h
  UpActions.cpp
  DownAction.h
  DownAction.cpp
  RightAction.h
  RightAction.cpp
  LeftAction.h
  LeftAction.cpp
  Actions.cpp
  # ui

  # resources
  icons.qrc
  mainwindow.h mainwindow.cpp mainwindow.ui
  Main.cpp
  .gitignore
)

target_link_libraries(Game PRIVATE
  Qt${QT_VERSION_MAJOR}::Core
  Qt${QT_VERSION_MAJOR}::Gui
  Qt${QT_VERSION_MAJOR}::Widgets
)
