
/* Function: bmp_reverse() đọc file * .bmp từ đường dẫn bmp_path, reverse bitmap data và lưu output vào đường dẫn reversed _bmp_path.
Parameter :
    +bmp_path[input] : đường dẫn filename * .bmp cần reverse
    + reversed _bmp_path[input] : đường dẫn chứa file * .bmp đã reverse.
*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include <vector>
#include <fstream>

typedef struct reversed
{
    unsigned short bpp;
    unsigned int width, height;
    std::vector<unsigned char> pixels;
} reversed;

bool LoadBmp(const char* bmp_path, const char* reversed _bmp_path)
{
    FILE* f = fopen(bmp_path, "rb");

    if (f)
    {
        _bmp_path->bpp = 0;
        _bmp_path->width = 0;
        _bmp_path->height = 0;
        _bmp_path->pixels.clear();

        unsigned char info[54] = { 0 };
        fread(info, sizeof(unsigned char), 54, f);

        _bmp_path->width = info[18] + (info[19] << 8); //Width
        _bmp_path->height = info[22] + (info[23] << 8); //Height


        _bmp_path->pixels.resize(((((_bmp_path->width * _bmp_path->height) + 31) & ~31) / 8) * _bmp_path->height); //Size of the pixels in the bitmap.

        fseek(f, info[10] + (info[11] << 8), SEEK_SET); //Seek to Pixel Offset.

        fread(&_bmp_path->pixels[0], sizeof(unsigned char), _bmp_path->pixels.size(), f); //Read the pixels.
        fclose(f);

        //Do whatever with pixels.. Flip them.. Swap BGR to RGB, etc..
        return true;
    }

    return false;
}