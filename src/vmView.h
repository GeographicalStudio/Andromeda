#pragma once
#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include <FL/fl_draw.H>
#include "vmProc.h"
#include <sstream>
class vmView : public Fl_Group {
public:
    vmView(AndroidVM vmDisplay, u_int32_t storageAllocation, u_int32_t memoryAllocationLimit)
        : Fl_Group(0, 0, 400, 300), vm_(vmDisplay), storageAllocation_(storageAllocation), memoryAllocationLimit_(memoryAllocationLimit) {
        end();
    }
protected:
    void draw() override {
        Fl_Group::draw();
        fl_color(FL_BLACK);
        fl_font(FL_HELVETICA, 16);
        std::ostringstream vmInfo;
        vmInfo << "VM Name: " << vm_.getName() << "\n";
        vmInfo << "VM Version: " << vm_.getVersion() << "\n";
        vmInfo << "Storage: " << storageAllocation_ << " MB\n";
        vmInfo << "Memory: " << memoryAllocationLimit_ << " MB";
        fl_draw(vmInfo.str().c_str(), x() + 10, y() + 30);
    }
private:
    AndroidVM vm_;
    u_int32_t storageAllocation_;
    u_int32_t memoryAllocationLimit_;
};