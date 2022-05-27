#ifndef IMAGE_H
#define IMAGE_H

#include <vector>

struct Color{
    float r, g, b;

    Color();
    Color(float r, float g, float b);
    ~Color();

};

class Image
{
public:
    Image(int width, int height);
    ~Image();

    Color GetColor(int x, int y)const;
    void SetColor(const Color& color, int x, int y);

    void Export(const char* path)const;
private:
    int mWidth;
    int mHeight;
    std::vector<Color> mColors;
};

#endif // IMAGE_H
