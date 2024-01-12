# tests
add_executable(stairs-test ${CMAKE_CURRENT_SOURCE_DIR}/stairs.cc)
# add_executable(card-deck-test ${CMAKE_CURRENT_SOURCE_DIR}/card_deck.cc)
# add_executable(tmt-document-test ${CMAKE_CURRENT_SOURCE_DIR}/tmt_document.cc)
# add_executable(rock-and-lever-test ${CMAKE_CURRENT_SOURCE_DIR}/rock_and_lever.cc)
add_executable(maximum-product-test ${CMAKE_CURRENT_SOURCE_DIR}/maximum_product.cc)
# add_executable(berland-crossword-test ${CMAKE_CURRENT_SOURCE_DIR}/berland_crossword.cc)
# add_executable(planet-lapituletti-test ${CMAKE_CURRENT_SOURCE_DIR}/planet_lapituletti.cc)
add_executable(new-theatre-square-test ${CMAKE_CURRENT_SOURCE_DIR}/new_theatre_square.cc)
add_executable(queue-at-the-school-test ${CMAKE_CURRENT_SOURCE_DIR}/queue_at_the_school.cc)
add_executable(sifid-and-strange-subsequences-test ${CMAKE_CURRENT_SOURCE_DIR}/sifid_and_strange_subsequences.cc)


# exceute test
add_custom_command(TARGET stairs-test POST_BUILD
   COMMAND ./stairs-test ${CMAKE_SOURCE_DIR}
)
add_custom_command(TARGET maximum-product-test POST_BUILD
   COMMAND ./maximum-product-test ${CMAKE_SOURCE_DIR}
)
add_custom_command(TARGET new-theatre-square-test POST_BUILD
   COMMAND ./new-theatre-square-test ${CMAKE_SOURCE_DIR}
)
add_custom_command(TARGET queue-at-the-school-test POST_BUILD
   COMMAND ./queue-at-the-school-test ${CMAKE_SOURCE_DIR}
)
add_custom_command(TARGET sifid-and-strange-subsequences-test POST_BUILD
   COMMAND ./sifid-and-strange-subsequences-test ${CMAKE_SOURCE_DIR}
)