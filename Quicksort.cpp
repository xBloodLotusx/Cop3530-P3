#include <iostream>
//
// Created by Joshua Austin Land on 4/20/25.
// It currently supports checking for team name and
// returning a subset using a data structure of type T. T cannot be a vector
template <typename T>
T Quicksort(const T& data, const std::string& name, const std::string& opponent = "") {
    auto pivot = *data.begin();
    T right, subset; // This will be subset of the data that is usable for our formula
    for (auto it = std::next(data.begin()); it != data.end(); it++) {
        if (it->name != name) continue;
        if (*it < pivot) {
            subset.push_back(*it);
        }
        else {
            right.push_back(*it);
        }
    }
    subset = Quicksort<T>(subset, 0, subset.size() - 1, name, opponent);
    right = Quicksort<T>(right, 0, right.size() - 1, name, opponent);
    if (pivot.name == name) {
        subset.push_back(pivot);
    }
    subset.insert(subset.end(), right.begin(), right.end());
    return subset;
}