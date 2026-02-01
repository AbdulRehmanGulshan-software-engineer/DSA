#include <bits/stdc++.h>
using namespace std;

// Compare students by score, then by ID
bool cmp(const pair<int,int>& a, const pair<int,int>& b) {
    if(a.second == b.second) 
		return a.first < b.first;
    return a.second < b.second;
}
//The vector contains 10 students ID & scores. The requirement is to arrange students on their scores in ascending order but if scores are same order them on IDs
int main() {
    // Pair structure: {studentID, score}
    vector<pair<int,int>> students = {
        {101, 85},
        {102, 90},
        {103, 78},
        {104, 88},
        {105, 92},
        {106, 85},
        {107, 74},
        {108, 96},
        {109, 80},
        {110, 88}
    };

    sort(students.begin(), students.end(), cmp);	//This sort function will automatically call the "cmp" compare function, while sorting the values
    cout << "Student ID   Score\n";
    cout << "-------------------\n";
    for(auto &s : students)
        cout << s.first << "           " << s.second << endl;
    return 0;
}

