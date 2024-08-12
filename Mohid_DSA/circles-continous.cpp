#include <graphics.h>
#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char** argv) {
    initwindow(400, 400, " ");

    stack<int> radii;

    // Push radii onto the stack
    for (int i = 10; i <= 150; i += 10) {
        radii.push(i);
    }

    // Draw circles with decreasing radii
    while (!radii.empty()) {
        int radius = radii.top();
        radii.pop();

        circle(200, 200, radius);
    }

    getch();
    closegraph();
    return 0;
}

