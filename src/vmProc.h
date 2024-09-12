#pragma once
#include <string>
#include <FL/fl_ask.H>
class AndroidVM {
public:
    AndroidVM(int version, const std::string& name)
        : version_(version), name_(name) {
        initVM();
    }
    int getVersion() const {
        return version_;
    }
    std::string getName() const {
        return name_;
    }
private:
    int initVM() {
        fl_alert("Andromeda Virtual Machine is starting a new process. Do not shut down Andromeda!");
        return 0;
    }
    int version_;
    std::string name_;
};