#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

struct attractions {
    int place;
    int Odometer;
    int count0[100] = {0};
};

int main() {
    int attractionsNumber, attractionsOdometerNumber, attractionsStart;
    int start, stop, journey;
    int minm[100] = {0};
    vector<vector<int>> routeTable;
    vector<int> route;
    stack<attractions> stack1;
    cin >> attractionsNumber >> attractionsOdometerNumber;
    for (int i = 0; i < attractionsOdometerNumber; ++i) {
        cin >> start >> stop >> journey;
        route.push_back(start);
        route.push_back(stop);
        route.push_back(journey);
        routeTable.push_back(route);
        route.clear();
    }
    cin >> attractionsStart;
    sort(routeTable.begin(), routeTable.end());
    struct attractions attractions1, attractions2;
    attractions1.place = attractionsStart;
    attractions1.Odometer = 0;
    stack1.push(attractions1);
    //
    while (!stack1.empty()) {
        attractions1 = stack1.top();
        stack1.pop();
        //
        for (vector<int> routeA:routeTable) {
            attractions2 = attractions1;
            if (routeA.front() > attractions2.place) {
                break;
            }
            if (routeA.front() == attractions2.place && attractions2.count0[routeA.at(1)] == 0) {
                attractions2.Odometer += routeA.back();
                attractions2.place = routeA.at(1);
                attractions2.count0[attractions2.place] = 1;
                if (minm[attractions2.place] == 0) {
                    minm[attractions2.place] = attractions2.Odometer;
                } else if (minm[attractions2.place] > attractions2.Odometer) {
                    minm[attractions2.place] = attractions2.Odometer;
                }
                stack1.push(attractions2);
            }
        }

    }
    //
    minm[attractionsStart]=0;
    for (int j = 1; j <= attractionsNumber; ++j) {
        cout << minm[j]<<" ";
    }
    return 0;
}
