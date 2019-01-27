#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int map[100][100];
    int pointNumber, lineNumber;
    int startPoint, stopPoint, length;
    int point, point0;
    int arrive[100];
    int flag = 0;
    int minLenght = 0;
    fill(*map, *map + 10000, 1000);
    //
    cin >> pointNumber >> lineNumber;
    for (int i = 0; i < lineNumber; ++i) {
        cin >> startPoint >> stopPoint >> length;
        map[startPoint][stopPoint] = length;
        map[stopPoint][startPoint] = length;
    }
    cin >> point;
    arrive[point] = 1;
    //
    while (flag == 0) {
        flag = 1;
        point0 = point;
        for (int i = 1; i <= pointNumber; ++i) {
            if (map[point][point0] > map[point][i] && arrive[i] == 0) {
                point0 = i;
            }
        }
        if (point != point0) {
            for (int i = 1; i <= pointNumber; ++i) {
                if (map[point][point0] > map[point0][i] && arrive[i] == 1) {
                    point = i;
                }
            }
            minLenght += map[point][point0];
            point = point0;
            arrive[point] = 1;
        } else {
            for (point = 1; point <= pointNumber; ++point) {
                if (arrive[point] == 0) {
                    point0 = point;
                    for (int j = 1; j <= pointNumber; ++j) {
                        if (map[point][point0] > map[point][j] && arrive[j] == 1) {
                            point0 = j;
                        }
                    }
                    point = point0;
                    break;
                }
            }
        }
        for (int i = 1; i <= pointNumber; ++i) {
            if (arrive[i] == 0) {
                flag = 0;
                break;
            }
        }
    }
//
    cout << minLenght;
    return 0;
}
