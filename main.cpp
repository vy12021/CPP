#include <iostream>
#include <boost/timer.hpp>
#include <bits/stl_algo.h>
#include <sstream>
#include "boost/progress.hpp"

using namespace std;
using namespace boost;

class a {

public:
    int sum() {
        return this->x + this->y;
    }

    explicit a(int x) {
        this->x = x;
    }

    ~a() {
        cout << "invoke ~a() " << endl;
    }

private:
    int x;
    int y = 0;

};

int main() {
    /*timer t;
    cout << "max timespan:" << t.elapsed_max() / 3600 << "h" << endl;
    cout << "min timespan:" << t.elapsed_min() << "s" << endl;

    cout << "now time elapsed:" << t.elapsed() << "s" << endl;

    const int x = 1;

    int y = 2;
    *//**
    *
    *//*
    int &_x = x;
    cout << "x: " << _x << endl;*/

    a _a(1);
    cout << "a.sum(): " << _a.sum() << endl;

    stringstream ss;

    {
        progress_timer progressTimer(ss);

        int count = 0;
        while (count < 10000000) {
            count ++;
        }
    }

    cout << ss.str() << endl;
    ss.flush();
}

