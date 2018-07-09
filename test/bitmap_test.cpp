#include <gtest/gtest.h>
#include <rose/bitmap.hpp>

using rose::Bitmap;
using rose::bitmap::Fmt;

TEST(Bitmap, InitializerList) {
  Bitmap<Fmt::RGB> bitmap = {1024, 512, nullptr};
}

TEST(Bitmap, width) {
  Bitmap<Fmt::RGB> bitmap = {1024, 512, nullptr};
  EXPECT_TRUE(bitmap.width() == 1024);
}

TEST(Bitmap, height) {
  Bitmap<Fmt::RGB> bitmap = {1024, 512, nullptr};
  EXPECT_TRUE(bitmap.height() == 512);
}

TEST(Bitmap, data) {
  uint8_t pixel[] = {0x0, 0x80, 0xFF};
  Bitmap<Fmt::RGB> bitmap = {1024, 512, pixel};
  EXPECT_TRUE(bitmap.data() == pixel);
}

TEST(Bitmap, format) {
  Bitmap<Fmt::RGB> rgb_bitmap = {1024, 512, nullptr};
  EXPECT_TRUE(rgb_bitmap.format() == Fmt::RGB);
  Bitmap<Fmt::RGBA> rgba_bitmap = {1024, 512, nullptr};
  EXPECT_TRUE(rgba_bitmap.format() == Fmt::RGBA);
}

TEST(Bitmap, channels) {
  EXPECT_TRUE(Bitmap<Fmt::RGB>::channels() == 3);
  EXPECT_TRUE(Bitmap<Fmt::RGBA>::channels() == 4);
}
