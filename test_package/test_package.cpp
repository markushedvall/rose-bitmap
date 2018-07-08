#include <rose/bitmap.hpp>

using rose::Bitmap;
using rose::bitmap::Fmt;

int main() {
  Bitmap<Fmt::RGB> bitmap = {1024, 512, nullptr};
}
