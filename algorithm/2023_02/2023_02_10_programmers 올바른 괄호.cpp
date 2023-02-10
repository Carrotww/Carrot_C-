#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s) {
    stack<int> stack;

    for (char ss: s) {
        if (ss == '(') {
            stack.push(ss);
        }
        else {
            if (stack.empty()) {
                return false;
            }
            else {
                stack.pop();
            }
        }
    }
    if (not stack.empty()) {
        return false;
    }
    return true;
}