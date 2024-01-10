#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*
 * code: 1492B
 * name: Card Deck
 * tags: data structure, math, greedy
 * url: https://codeforces.com/contest/1492/problem/B
*/
int main() {
  //init
  int t;

  //read
  cin >> t;

  while (t > 0) {
    int i, n, card;
    vector<int> ret;
    vector<int> cards;

    cin >> n;

    while (n > 0) {
      cin >> card;

      //insert card
      cards.push_back(card);

      //next
      n--;
    }

    //reverse cards
    reverse(cards.begin(), cards.end());

    cout << "Cards: ";
    for (auto &c : cards) {
      cout << c << " ";
    }
    cout << endl;

    //check value
    for (i = 0; i < cards.size() - 1; i++) {
      //compare value
      if (cards[i] < cards[i + 1]) {
        //swap value
        int temp = cards[i];
        cards[i] = cards[i + 1];
        cards[i + 1] = temp;
      }
    }

    cout << "Result: ";
    for (auto &c : cards) {
      cout << c << " ";
    }
    cout << endl;

    //next
    t--;
  }

  return 0;
}