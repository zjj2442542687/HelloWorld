#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

bool complare(const vector<float> &vector1, const vector<float> &vector2) {
    return vector1 > vector2;
}

int main() {
    int number, load;
    int weight, value;
    float weight2 = 0, value2 = 0;
    vector<float> vector1;
    vector<vector<float >> vector2;
    cin >> number >> load;
    for (int i = 0; i < number; ++i) {
        cin >> weight >> value;
        vector1.push_back(static_cast<float &&>(value * 1.0 / weight));
        vector1.push_back(weight);
        vector1.push_back(value);
        vector2.push_back(vector1);
        vector1.clear();
    }
    sort(vector2.begin(), vector2.end(), complare);
    auto normal_iterator = vector2.begin();
    while (normal_iterator != vector2.end()) {
        if (weight2 + normal_iterator->at(1) <= load) {
            weight2 += normal_iterator->at(1);
            value2 += normal_iterator->at(2);
        } else {
            value2 += (load - weight2) * normal_iterator->at(0);
            break;
        }
        normal_iterator++;
    }
    cout << value2;
    return 0;
}
