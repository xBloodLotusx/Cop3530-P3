#include <iostream>
// Created by Joshua Austin Land on 4/12/25.
// Currently, Mergesort takes in a vector or list and creates a subset of all instances
// that match with team name.
template <typename T, typename instance>
void Merge(T& subset, T Lsort, T Rsort, const std::string& name, const std::string& opponent = "") {
    instance L = Lsort.begin();
    instance R = Rsort.begin();

    while (L != Lsort.end() && R !=Rsort.end()) {
        if (L->name != name) {
            L++;
            continue;
        }
        if (R->name != name) {
            R++;
            continue;
        }
        if (*L < *R) {
        subset.push_back(*L);
        }
        else {
            subset.push_back(*R);

        }
    }
    while (L != Lsort.end()) { // Subset clause needed
        subset.push_back(*L);
        L++;
    }
    while (R != Rsort.end()) { // Subset clause needed
        subset.push_back(*R);
        R++;
    }
}
template <typename T>
T Mergesort(const T& data, int left, int right, const std::string& name, const std::string& opponent = "") {
    T subset; // This will be subset of the data that is usable for our formula
    int mid = left+(right-left)/2;
    T Lsort = Mergesort<T>(data, left, mid,  name, opponent);
    T Rsort = Mergesort<T>(data,mid+1, right, name, opponent);
    Merge<T>(subset, Lsort, Rsort, name, opponent);
    return subset;
}