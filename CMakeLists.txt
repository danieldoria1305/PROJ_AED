cmake_minimum_required(VERSION 3.23)
project(TrabalhoAED)

set(CMAKE_CXX_STANDARD 14)

add_executable(TrabalhoAED Code/src/main.cpp Code/src/GestaoHorario.cpp Code/src/HClass.cpp Code/src/Request.cpp Code/src/Slot.cpp Code/src/Student.cpp Code/src/UCClass.cpp Code/src/App.cpp )
