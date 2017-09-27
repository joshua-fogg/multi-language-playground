#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main(int argc, char* argv[])
{
    int count = std::stoi(argv[1]);
    for (int i = 0; i < count; i++) {
        this_thread::sleep_for(chrono::seconds(1));
        cout << "Joshua Fogg" << endl;
    }
    return 0;
}
