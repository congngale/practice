#include <iostream>
#include <vector>

#define BLACK '*'  // skip
#define WHITE '.'  // pave

using namespace std;

/*
 * code: 1359B
 * name: New Theatre Square
 * tags: brute force, dp, greedy, implementation, two pointers
 * url: https://codeforces.com/contest/1359/problem/B
 */
int main() {
  // init
  char s;
  vector<int> ret;
  int t, m, n, x, y;
  vector<vector<int>> input;
  vector<vector<vector<char>>> tiles;

  // read
  cin >> t;

  // read all input
  for (int i = 0; i < t; i++) {
    // read data
    cin >> m >> n >> x >> y;
    input.push_back({m, n, x, y});

    vector<vector<char>> m_tile;
    for (int j = 0; j < m; j++) {
      vector<char> n_tile;
      for (int k = 0; k < n; k++) {
        cin >> s;

        n_tile.push_back(s);
      }

      m_tile.push_back(n_tile);
    }
    tiles.push_back(m_tile);
  }

  // loop all input
  for (size_t i = 0; i < input.size(); i++) {
    int price = 0;
    m = input[i][0];
    n = input[i][1];
    x = input[i][2];
    y = input[i][3];

    // loop m
    for (int k = 0; k < m; k++) {
      for (int h = 0; h < n; h++) {
        // check 2 move a time
        if (tiles[i][k][h] == WHITE) {
          // check next tiles
          if ((size_t)(h + 1) < tiles[i][k].size() && tiles[i][k][h + 1] == WHITE) {
            // check price
            if (2 * x < y) {
              price += x * 2;
            } else {
              price += y;
            }

            h++;
          } else {
            // pave black tile
            price += x;
          }
        }
      }
    }

    // set price
    ret.push_back(price);
  }

  // output
  for (auto &d : ret) {
    cout << d << endl;
  }

  return 0;
}