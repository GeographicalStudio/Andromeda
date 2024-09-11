#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
int main() {
    Fl_Window* window = new Fl_Window(340, 180, "Andromeda Process Setup");
    window->end();
    window->show();
    return Fl::run();
}