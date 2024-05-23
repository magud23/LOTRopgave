cmake_minimum_required(VERSION 3.5)

project(LOTR-L6 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(LOTR-L6 main.cpp weapon.h character.h)


include(GNUInstallDirs)
install(TARGETS LOTR-L6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
