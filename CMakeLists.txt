cmake_minimum_required(VERSION 3.23)
project(c___final_ex)

set(CMAKE_CXX_STANDARD 14)

add_executable(c___final_ex main.cpp modal/person/Person.cpp modal/person/Person.h utils/UtilsGeneric.cpp utils/UtilsGeneric.h modal/Classes.cpp modal/Classes.h view/ApplicationView.cpp view/ApplicationView.h utils/Utils.cpp utils/Utils.h logger/Logger.cpp logger/Logger.h resource/Resource.h)
