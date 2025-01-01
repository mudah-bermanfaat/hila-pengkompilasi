cmake_minimum_required(VERSION 3.11)

project(pengompilasi-hila)

add_executable(khila
    src/main.cxx    
)

target_include_directories(khila PRIVATE includes)
