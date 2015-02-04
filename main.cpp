#include <iostream>
#include <boost/timer.hpp>
#include <bits/stl_algo.h>
#include <sstream>
#include <fstream>
#include "boost/progress.hpp"
#include "new_progress_timer.hpp"
#include <boost/date_time.hpp>

using namespace std;
using namespace boost;
using namespace date_time;

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

    /*a _a(1);
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
    ss.flush();*/

    new_progress_timer<> * t = new new_progress_timer<>(cout);


    vector<string> v(100);
    ofstream fs("./test.text");    // file output stream

    progress_display pd(v.size());

    vector<string> :: iterator pos;
    for (pos = v.begin(); pos != v.end(); ++pos) {

        fs << *pos << endl;
        ++ pd;
    }

    delete t;

    special_values s;
    s.
}

