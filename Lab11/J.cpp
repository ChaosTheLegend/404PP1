#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Point{
    int x;
    int y;

    Point(int x, int y){
        this->x = x;
        this->y = y;
    }
};

Point* target;

int get_sqr_distance(Point* p){
    int x_dis = (p->x-target->x);
    int y_dis = (p->y-target->y);
    int sqr_dis = x_dis*x_dis + y_dis*y_dis;

    return sqr_dis;
}

int main(){

    int x,y;
    cin >> x >> y;
    target = new Point(x,y);

    int n;
    cin >> n;

    Point* points[n];

    for (int i = 0; i < n; ++i) {
        int x,y;
        cin >> x >> y;
        points[i] = new Point(x,y);
    }


    sort(points, points+n, [](Point* a, Point*b){
        int a_dis = get_sqr_distance(a);
        int b_dis = get_sqr_distance(b);

        return a_dis < b_dis;
    });



    for (Point** i = points; i != points+n; ++i) {
        cout << (*i)->x << " " << (*i)->y << "\n";
    }


}