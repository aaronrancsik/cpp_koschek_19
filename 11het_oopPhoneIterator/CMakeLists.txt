cmake_minimum_required(VERSION 3.15)
project(telefonlista)

set(CMAKE_CXX_STANDARD 14)

add_executable(telefonlista main.cpp CPhoneList.cpp CPhoneList.h CPhoneIter.cpp CPhoneIter.h)