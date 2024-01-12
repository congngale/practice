# tests
add_executable(2023-test ${CMAKE_CURRENT_SOURCE_DIR}/2023.cc)
add_executable(team-test ${CMAKE_CURRENT_SOURCE_DIR}/team.cc)
# add_executable(abc-string-test ${CMAKE_CURRENT_SOURCE_DIR}/abc_string.cc)
add_executable(horse-shoe-test ${CMAKE_CURRENT_SOURCE_DIR}/horse_shoe.cc)
add_executable(next-round-test ${CMAKE_CURRENT_SOURCE_DIR}/next_round.cc)
add_executable(digit-game-test ${CMAKE_CURRENT_SOURCE_DIR}/digit_game.cc)
add_executable(subset-mex-test ${CMAKE_CURRENT_SOURCE_DIR}/subset_mex.cc)
add_executable(boy-or-girl-test ${CMAKE_CURRENT_SOURCE_DIR}/boy_or_girl.cc)
add_executable(water-melon-test ${CMAKE_CURRENT_SOURCE_DIR}/water_melon.cc)
# add_executable(anti-knapsack-test ${CMAKE_CURRENT_SOURCE_DIR}/anti_knapsack.cc)
add_executable(bit-plus-plus-test ${CMAKE_CURRENT_SOURCE_DIR}/bit_plus_plus.cc)
add_executable(domino-piling-test ${CMAKE_CURRENT_SOURCE_DIR}/domino_piling.cc)
add_executable(cubes-sortings-test ${CMAKE_CURRENT_SOURCE_DIR}/cubes_sortings.cc)
add_executable(three-swimmers-test ${CMAKE_CURRENT_SOURCE_DIR}/three_swimmers.cc)
add_executable(petya-and-strings-test ${CMAKE_CURRENT_SOURCE_DIR}/petya_and_strings.cc)
add_executable(way-too-long-word-test ${CMAKE_CURRENT_SOURCE_DIR}/way_too_long_word.cc)
add_executable(perfect-permutation-test ${CMAKE_CURRENT_SOURCE_DIR}/perfect_permutation.cc)

# exceute test
add_custom_command(TARGET 2023-test POST_BUILD
   COMMAND ./2023-test ${CMAKE_SOURCE_DIR}
)
add_custom_command(TARGET team-test POST_BUILD
   COMMAND ./team-test ${CMAKE_SOURCE_DIR}
)
add_custom_command(TARGET horse-shoe-test POST_BUILD
   COMMAND ./horse-shoe-test ${CMAKE_SOURCE_DIR}
)
add_custom_command(TARGET next-round-test POST_BUILD
   COMMAND ./next-round-test ${CMAKE_SOURCE_DIR}
)
add_custom_command(TARGET digit-game-test POST_BUILD
   COMMAND ./digit-game-test ${CMAKE_SOURCE_DIR}
)
add_custom_command(TARGET subset-mex-test POST_BUILD
   COMMAND ./subset-mex-test ${CMAKE_SOURCE_DIR}
)
add_custom_command(TARGET boy-or-girl-test POST_BUILD
   COMMAND ./boy-or-girl-test ${CMAKE_SOURCE_DIR}
)
add_custom_command(TARGET water-melon-test POST_BUILD
   COMMAND ./water-melon-test ${CMAKE_SOURCE_DIR}
)
add_custom_command(TARGET bit-plus-plus-test POST_BUILD
   COMMAND ./bit-plus-plus-test ${CMAKE_SOURCE_DIR}
)
add_custom_command(TARGET domino-piling-test POST_BUILD
   COMMAND ./domino-piling-test ${CMAKE_SOURCE_DIR}
)
add_custom_command(TARGET cubes-sortings-test POST_BUILD
   COMMAND ./cubes-sortings-test ${CMAKE_SOURCE_DIR}
)
add_custom_command(TARGET three-swimmers-test POST_BUILD
   COMMAND ./three-swimmers-test ${CMAKE_SOURCE_DIR}
)
add_custom_command(TARGET petya-and-strings-test POST_BUILD
   COMMAND ./petya-and-strings-test ${CMAKE_SOURCE_DIR}
)
add_custom_command(TARGET way-too-long-word-test POST_BUILD
   COMMAND ./way-too-long-word-test ${CMAKE_SOURCE_DIR}
)
add_custom_command(TARGET perfect-permutation-test POST_BUILD
   COMMAND ./perfect-permutation-test ${CMAKE_SOURCE_DIR}
)