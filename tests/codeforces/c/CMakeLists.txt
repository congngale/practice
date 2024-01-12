# tests
add_executable(killjoy-test ${CMAKE_CURRENT_SOURCE_DIR}/killjoy.cc)

# exceute test
add_custom_command(TARGET killjoy-test POST_BUILD
   COMMAND ./killjoy-test ${CMAKE_SOURCE_DIR}
)
