#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>
#include "vmProc.h"
void startVM(Fl_Widget* widget, void* vm) {
    AndroidVM* androidVM = static_cast<AndroidVM*>(vm);
    fl_alert(("Starting " + androidVM->getName() + " VM...").c_str());
}
void stopVM(Fl_Widget* widget, void* vm) {
    AndroidVM* androidVM = static_cast<AndroidVM*>(vm);
    fl_alert(("Stopping " + androidVM->getName() + " VM...").c_str());
}
int main() {
    Fl_Window* window = new Fl_Window(880, 640, "Andromeda VM");
    AndroidVM android(1, "Andromeda VM");
    Fl_Input* nameInput = new Fl_Input(100, 50, 200, 30, "VM Name:");
    nameInput->value("Andromeda VM");
    Fl_Input* versionInput = new Fl_Input(100, 100, 200, 30, "VM Version:");
    versionInput->value("1");
    Fl_Button* startButton = new Fl_Button(100, 200, 100, 40, "Start VM");
    startButton->callback(startVM, &android);
    Fl_Button* stopButton = new Fl_Button(250, 200, 100, 40, "Stop VM");
    stopButton->callback(stopVM, &android);
    window->end();
    window->show();
    return Fl::run();
}