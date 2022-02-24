# Install script for directory: /home/summer/research/NuSMV-2.6.0/NuSMV/contrib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nusmv/contrib" TYPE FILE FILES
    "/home/summer/research/NuSMV-2.6.0/NuSMV/contrib/README"
    "/home/summer/research/NuSMV-2.6.0/NuSMV/contrib/iscas89-2smv"
    "/home/summer/research/NuSMV-2.6.0/NuSMV/contrib/kiss2-2smv"
    "/home/summer/research/NuSMV-2.6.0/NuSMV/contrib/smv2table.awk"
    "/home/summer/research/NuSMV-2.6.0/NuSMV/contrib/smv-mode.el"
    "/home/summer/research/NuSMV-2.6.0/NuSMV/contrib/order_bits.pl"
    "/home/summer/research/NuSMV-2.6.0/NuSMV/contrib/nusmv-mode.el"
    "/home/summer/research/NuSMV-2.6.0/NuSMV/contrib/NuSMV.m4"
    "/home/summer/research/NuSMV-2.6.0/NuSMV/contrib/emacs-gdb-macros.el"
    "/home/summer/research/NuSMV-2.6.0/NuSMV/contrib/remove_string.pl"
    )
endif()

