//
//  main.cpp
//  CppGraphTest
//
//  Created by Dave Duprey on 25/11/2019.
//  Copyright © 2019 Dave Duprey. All rights reserved.
//

#include <iostream>
#include <map>
#include <set>
#include <vector>

struct Edge {
  const int source;
  const int destination;
};

bool detect_cycle_by_bfs_with_multimap(const std::vector<Edge> &edges) {
  // check empty edges
  if (!edges.empty()) {
    // init data
    std::set<int> visited;
    std::multimap<int, int> tree;

    // populate data into tree
    for (const auto &data : edges) {
      tree.emplace(data.source, data.destination);
    }

    // insert root
    visited.emplace(tree.begin()->first);

    // loop all edges
    for (const auto &edge : tree) {
      // mark as visited
      const auto ret = visited.emplace(edge.second);

      // cycle detected
      if (!ret.second) {
        return true;
      }
    }
  }

  return false;
}

bool detect_cycle_by_bfs_with_map(const std::vector<Edge> &edges) {
  // check empty edges
  if (!edges.empty()) {
    // init data
    std::set<int> visited;
    std::map<int, std::vector<int>> tree;

    // populate data into tree
    for (const auto &data : edges) {
      if (tree.count(data.source) == 1) {
        // append
        tree.at(data.source).push_back(data.destination);
      } else {
        // create
        tree.emplace(data.source, std::vector<int>{data.destination});
      }
    }

    // insert root
    visited.emplace(tree.begin()->first);

    for (const auto &it : tree) {
      // loop adjacent edges
      for (const auto &edge : it.second) {
        // mark as visited
        const auto ret = visited.emplace(edge);

        // cycle detected
        if (!ret.second) {
          return true;
        }
      }
    }
  }

  return false;
}

bool has_cycle(const std::vector<Edge> &edges) {
  // init data
  bool cycle_found;

  // detect cycle
  // cycle_found = detect_cycle_by_bfs_with_map(edges);
  cycle_found = detect_cycle_by_bfs_with_multimap(edges);

  return cycle_found;
}

void report_results(bool cycle_found) {
  if (cycle_found)
    std::cout << "Graph contains a cycle\n";
  else
    std::cout << "Graph does NOT contain any cycles\n";
}

void check_for_cycles(const std::vector<Edge> &edges) {
  bool cycle_found = has_cycle(edges);
  report_results(cycle_found);
}

int main(int argc, const char *argv[]) {
  const std::vector<Edge> edges_with_cycle{{0, 1}, {0, 2},  {0, 3},  {1, 4},
                                           {1, 5}, {4, 8},  {4, 9},  {3, 6},
                                           {3, 7}, {6, 10}, {6, 11}, {5, 9}};
  const std::vector<Edge> edges_without_cycle{{0, 1}, {0, 2},  {0, 3}, {1, 4},
                                              {1, 5}, {4, 8},  {4, 9}, {3, 6},
                                              {3, 7}, {6, 10}, {6, 11}};
  const std::vector<Edge> example_edges{{0, 1}, {0, 2}, {0, 5},
                                        {0, 6}, {2, 8}, {5, 8}};

  check_for_cycles(example_edges);
  check_for_cycles(edges_with_cycle);
  check_for_cycles(edges_without_cycle);

  return 0;
}
