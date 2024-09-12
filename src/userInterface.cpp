#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
#include "vmProc.h"
int main() {
    Fl_Window* window = new Fl_Window(340, 180, "Andromeda Process Setup");
    AndroidVM android(1, "Andromeda VM");
    window->end();
    window->show();
    return Fl::run();
}