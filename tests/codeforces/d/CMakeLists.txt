# tests
add_executable(sage-birthday-easy-test ${CMAKE_CURRENT_SOURCE_DIR}/sage_birthday_easy.cc)
add_executable(sage-birthday-hard-test ${CMAKE_CURRENT_SOURCE_DIR}/sage_birthday_hard.cc)

# exceute test
add_custom_command(TARGET sage-birthday-easy-test POST_BUILD
   COMMAND ./sage-birthday-easy-test ${CMAKE_SOURCE_DIR}
)
add_custom_command(TARGET sage-birthday-hard-test POST_BUILD
   COMMAND ./sage-birthday-hard-test ${CMAKE_SOURCE_DIR}
)