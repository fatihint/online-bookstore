cmake_minimum_required(VERSION 3.6)
project(online_bookstore)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Product.cpp Product.h Payment.cpp Payment.h ShoppingCart.cpp ShoppingCart.h)
add_executable(online_bookstore ${SOURCE_FILES})