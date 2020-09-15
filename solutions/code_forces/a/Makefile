# build flags
CXX_FLAGS = -std=c++11 -Wall -Werror

# make all problems
all:: boy_or_girl petya_and_strings way_too_long_word bit_plus_plus \
	domino_piling horse_shoe next_round team water_melon perfect_permutation

# team
team:
	$(CXX) $(CXX_FLAGS) team.cc -o team

# horse shoe
horse_shoe:
	$(CXX) $(CXX_FLAGS) horse_shoe.cc -o horse_shoe

# next round
next_round:
	$(CXX) $(CXX_FLAGS) next_round.cc -o next_round	

# water melon
water_melon:
	$(CXX) $(CXX_FLAGS) water_melon.cc -o water_melon	

# boy or girl
boy_or_girl:
	$(CXX) $(CXX_FLAGS) boy_or_girl.cc -o boy_or_girl

# domino piling
domino_piling:
	$(CXX) $(CXX_FLAGS) domino_piling.cc -o domino_piling

# bit++
bit_plus_plus:
	$(CXX) $(CXX_FLAGS) bit_plus_plus.cc -o bit_plus_plus

# petya and strings
petya_and_strings:
	$(CXX) $(CXX_FLAGS) petya_and_strings.cc -o petya_and_strings

# way too long word
way_too_long_word:
	$(CXX) $(CXX_FLAGS) way_too_long_word.cc -o way_too_long_word

# perfect permutation
perfect_permutation:
	$(CXX) $(CXX_FLAGS) perfect_permutation.cc -o perfect_permutation

clean:
	@- $(RM) team
	@- $(RM) horse_shoe
	@- $(RM) next_round
	@- $(RM) water_melon
	@- $(RM) boy_or_girl
	@- $(RM) domino_piling
	@- $(RM) bit_plus_plus
	@- $(RM) petya_and_strings
	@- $(RM) way_too_long_word
	@- $(RM) perfect_permutation