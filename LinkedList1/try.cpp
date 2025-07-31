#include <iostream>
#include <string>
using namespace std;
class student {
    public:
        int rno;
        float percent;
        string name;
        student(string n, int r, float p) {
            name = n;
            rno = r;
            percent = p;
        }
};
void change(student &s) {
    s.name = "Harsh";
}
int main() {
    student s("Raghav", 76, 92.6)
    cout << s.name << endl;
    change(s);
    cout << s.name << endl;
    return 0;
}
