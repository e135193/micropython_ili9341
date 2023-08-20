
# Create an INTERFACE library for our C module.
add_library(usermod_ili9341 INTERFACE)

# Add our source files to the lib
target_sources(usermod_ili9341 INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}/ili9341.c
    ${CMAKE_CURRENT_LIST_DIR}/mpfile.c
    ${CMAKE_CURRENT_LIST_DIR}/jpg/tjpgd565.c
    ${CMAKE_CURRENT_LIST_DIR}/png/pngle.c
    ${CMAKE_CURRENT_LIST_DIR}/png/miniz.c)

# Add the current directory as an include directory.
target_include_directories(usermod_ili9341 INTERFACE
    ${CMAKE_CURRENT_LIST_DIR})

# Link our INTERFACE library to the usermod target.
target_link_libraries(usermod INTERFACE usermod_ili9341)
