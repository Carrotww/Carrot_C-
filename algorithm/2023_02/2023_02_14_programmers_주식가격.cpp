// https://school.programmers.co.kr/learn/courses/30/lessons/42584?language=cpp

#include <string>
#include <vector>
#include <stack>
#include <tuple>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> prices) {
    stack<tuple<int, int>> stack;
    vector<int> vt(prices.size(), 0);

    for(int i=0; i<prices.size(); i++)
    {
        while (!stack.empty() && get<1>(stack.top()) > prices[i])
        {
            vt[get<0>(stack.top())] = i - get<0>(stack.top());
            stack.pop();
        }
        stack.push(make_tuple(i, prices[i]));
    }

    while(!stack.empty())
    {
        vt[get<0>(stack.top())] = prices.size() - 1 - get<0>(stack.top());
        stack.pop();
    }

    return vt;
}

vector<int> solution2(vector<int> prices) {
    stack<vector<int, int>> stack;
    vector<int> vt(prices.size(), 0);

    for(int i=0; i<prices.size(); i++)
    {
        while(!stack.empty() && stack.top()[1] > prices[i])
        {
            vt[stack.top()[0]] = i - stack.top()[0];
            stack.pop();
        }
        stack.push({i, prices[i]});
    }

    while(!stack.empty())
    {
        vt[stack.top()[0]] = prices.size() - 1 - stack.top()[0];
        stack.pop();
    }

    return vt;
}

int main(void) {
    vector<int> result = solution({1, 2, 3, 2, 3});
    for(int i=0; i<result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}