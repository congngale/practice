# seven number test
add_executable(seven-number-test ${CMAKE_CURRENT_SOURCE_DIR}/seven_number.cc)

# exceute test
add_custom_command(TARGET seven-number-test POST_BUILD
   COMMAND ./seven-number-test ${CMAKE_SOURCE_DIR}
)