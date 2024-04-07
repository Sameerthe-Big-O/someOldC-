//
// Created by light on 19-11-5.
//

#include <iostream>
#include <thread>
#include <unistd.h>
#include <cassert>

using namespace std;

class background_task {
public:
    void operator()() const {
        cout << "ok" << endl;
    }
};

void do_something(int &i) {
    cout << "do_something" << endl;
}

struct func {
    int &i;

    func(int &i_) : i(i_) {}

    void operator()() {
        for (unsigned j = 0; j < 1000000; ++j) {
            do_something(i);
        }
    }
};

void f() {
    int some_local_state = 0;
    func my_func(some_local_state);
    std::thread t(my_func);
    try {
//        do_something_in_current_thread();
    }
    catch (...) {
        t.join();  // 1
        throw;
    }
    t.join();  // 2
}


class thread_guard {
    std::thread &t;
public:
    explicit thread_guard(std::thread &t_) :
            t(t_) {}

    ~thread_guard() {
        if (t.joinable()) // 1
        {
            t.join();      // 2
        }
    }

    thread_guard(thread_guard const &) = delete;   // 3
    thread_guard &operator=(thread_guard const &) = delete;
};
void f1()
{
    int some_local_state=0;
    func my_func(some_local_state);
    std::thread t(my_func);
    thread_guard g(t);
//    do_something_in_current_thread();
}   

int main() {

    background_task f;

    std::thread t(f);
    t.detach();
    assert(!t.joinable());

    return 0;
}