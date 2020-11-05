#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    while (!progresses.empty())
    {
        while (progresses[0] < 100)
            for (int i = 0; i < progresses.size(); i++)
                progresses[i] += speeds[i];
        int cnt = 0;
        while (progresses.size() > 0 && progresses[0] >= 100)
        {
            cnt++;
            progresses.erase(progresses.begin());
            speeds.erase(speeds.begin());
        }
        answer.push_back(cnt);
    }
    return answer;
}