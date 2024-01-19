# collect source files
file(GLOB FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)

# build targets
foreach(FILE IN LISTS FILES)
   string(REPLACE "${CMAKE_CURRENT_SOURCE_DIR}/" "" CPP_FILE ${FILE})
   string(REPLACE ".cc" "" LINUX_FILE ${CPP_FILE})
   string(REPLACE "_" "-" TARGET ${LINUX_FILE})
   add_executable(${TARGET}-test ${FILE})
   add_custom_command(TARGET ${TARGET}-test POST_BUILD
      COMMAND ./${TARGET}-test ${CMAKE_SOURCE_DIR}
   )
endforeach()