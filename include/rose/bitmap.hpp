#ifndef ROSE_BITMAP_HPP
#define ROSE_BITMAP_HPP

#include <cstddef>
#include <cstdint>

namespace rose {

  namespace bitmap {
    enum class Fmt {
      RGB,
      RGBA
    };

    template<Fmt FMT>
    constexpr size_t channels() noexcept {
      static_assert(FMT == Fmt::RGB,
      "A specialization of channels is required for this format");
      return 3;
    }

    template<>
    constexpr size_t channels<Fmt::RGB>() noexcept {
      return 3;
    }

    template<>
    constexpr size_t channels<Fmt::RGBA>() noexcept {
      return 4;
    }
  }

  template<bitmap::Fmt FMT>
  struct Bitmap {
    size_t w;
    size_t h;
    uint8_t* d;

    constexpr bitmap::Fmt format() const noexcept {
      return FMT;
    }

    size_t width() const noexcept {
      return w;
    }

    size_t height() const noexcept {
      return h;
    }

    uint8_t* data() const noexcept {
      return d;
    }

  };

}

#endif
