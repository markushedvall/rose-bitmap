#ifndef ROSE_BITMAP_HPP
#define ROSE_BITMAP_HPP

#include <cstddef>
#include <cstdint>

namespace rose {

  struct Bitmap {

    enum class Format {
      RGB,
      RGBA
    };

    Format format;
    size_t width;
    size_t height;
    uint8_t* data;
  };

}

#endif
