#pragma once
#include <string>
#include <FL/fl_ask.H>
class AndroidVM {
public:
    AndroidVM(int version, const std::string& name) {
        fl_alert("Andromeda Virtual Machine is starting a new process, do not shut down Andromeda!");
    };
private:
    int version_;
    std::string name_;
};