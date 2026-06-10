#ifndef RENDERER_TEXTURA_H
#define RENDERER_TEXTURA_H

#include "../math/Color3.h"

// TODO pensar se isso aqui tá fazendo sentido pro nosso caso
// Créditos pra raylib
// Color, 4 components, R8G8B8A8 (32bit)
typedef struct Color {
    unsigned char r;        // Color red value
    unsigned char g;        // Color green value
    unsigned char b;        // Color blue value
    unsigned char a;        // Color alpha value
} Color;

class Textura {
public:
    Textura();
    explicit Textura(const char* filename);
    ~Textura();

    Color3 sample(float u, float v) const;
    bool is_valid() const { return pixels != nullptr; }

private:
    Color* pixels = nullptr;
    int width = 0;
    int height = 0;
};

#endif // RENDERER_TEXTURa_H
