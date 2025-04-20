#include <iostream>
//
// Created by Joshua Austin Land on 4/20/25.
// It currently supports checking for team name and
// returning a subset using a data structure of type T. T cannot be a vector
template <typename T, typename instance>
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
    subset = Quicksort<T, instance>(subset, 0, static_cast<int>(subset.size()) - 1, name, opponent);
    right = Quicksort<T, instance>(right, 0, static_cast<int>(right.size()) - 1, name, opponent);
    if (pivot.name == name) {
        subset.push_back(pivot);
    }
    subset.insert(subset.end(), right.begin(), right.end());
    return subset;
}