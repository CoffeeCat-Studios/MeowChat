#ifndef SIMPLE_H
#define SIMPLE_H

#include <godot_cpp/classes/button.hpp>

namespace godot {
    class Simple : public Button {
        GDCLASS(Simple, Button)

    private:


    protected:
        static void _bind_methods();

    public:
        Simple();
        ~Simple();

        void _process(double delta) override;
        void _ready();
        void _button_pressed();
    };
}

#endif
