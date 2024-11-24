#!/bin/bash

scons

flatpak run org.godotengine.godot  ./mc/project.godot
