#ifndef SIMPLEBUTTON_H
#define SIMPLEBUTTON_H

#include <godot_cpp/classes/button.hpp>

namespace godot {
    class SimpleButton : public Button {
        GDCLASS(SimpleButton, Button)

    private:


    protected:
        static void _bind_methods();

    public:
        SimpleButton();
        ~SimpleButton();

        void _process(double delta) override;
        void _ready() override;
        void _button_pressed();
    };
}

#endif
