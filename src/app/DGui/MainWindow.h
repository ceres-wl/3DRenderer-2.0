#ifndef RENDERER_UI_MAINWINDOW_H
#define RENDERER_UI_MAINWINDOW_H

// TODO: thread separada pra UI

#include "../../../deps/include/imgui.h"
#include "../../../deps/include/imgui_impl_sdl2.h"
#include "../../../deps/include/imgui_impl_opengl3.h"
#include <cfloat>
#include <stdio.h>
#include <SDL2/SDL.h>
#if defined(IMGUI_IMPL_OPENGL_ES2)
#include <SDL2/SDL_opengles2.h>
#else
#include <SDL2/SDL_opengl.h>
#endif
#ifdef _WIN32
#include <windows.h>        // SetProcessDPIAware()
#endif

class MainWindow {
    public:
        MainWindow();
        void start();

    private:
        //UI_STATE* ui_state;
        // Só é pra ter estado aqui se minhas habilidades de POO forem boas o suficiente
        ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

        SDL_Window* window;
        ImGuiIO* io;
        SDL_GLContext gl_context;

        bool windowShouldClose = false;
};

#endif // RENDERER_UI_MAINWINDOW_H