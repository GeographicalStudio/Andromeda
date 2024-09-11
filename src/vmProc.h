#pragma once
#include <string>
class AndroidVM {
public:
    AndroidVM(int version, const std::string& name);
private:
    int version_;
    std::string name_;
};