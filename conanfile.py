from conans import ConanFile, CMake, tools


class RoseBitmapConan(ConanFile):
    name = "rose-bitmap"
    version = "0.1.0"
    license = "MIT OR Apache-2.0"
    url = "https://github.com/markushedvall/rose-bitmap"
    description = "Single header library for a simple bitmap structure"
    exports_sources = "include/*"
    no_copy_source = True

    def package(self):
        self.copy("*.hpp")

    def package_id(self):
        self.info.header_only()
