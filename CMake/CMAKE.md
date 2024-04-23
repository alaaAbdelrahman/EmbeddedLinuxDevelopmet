***to use Cmake Tool***

To invoke CMake:

cmake -S locationOfCmakeFIle -B buildDirectory

css
Copy code

### To deal with libraries

**FetchContent:**
Allows you to include external projects directly into your CMake project.

```cmake
include(FetchContent)

FetchContent_Declare(
    my_library
    GIT_REPOSITORY https://github.com/username/my_library.git
    GIT_TAG master
)

FetchContent_MakeAvailable(my_library)
After the library is fetched, you can use it. With FetchContent, CMake will automatically download the specified library and make it available for use in your project. Then, you can simply link against it.

In CMake, the target_link_libraries command is used to specify libraries that your executable or library target depends on.


target_link_libraries(MyExecutable my_library)
#This line means that your executable target MyExecutable depends on the library target my_library. When you build MyExecutable, CMake will #ensure that my_library is built first (if necessary) and then linked with MyExecutable during the linking stage of the build process.

#my_library could be a library you created within your project or a third-party library that you've included using one of the methods like #find_package, ExternalProject_Add, or FetchContent.

#Note: The library being linked could be a static library (.a on Unix-like systems, .lib on Windows) or a shared library (.so, .dll, .dylib). #The specifics depend on how the library was built and configured.

#Link_Libraries:
target_link_libraries(MyExecutable my_library)
#effectively instructs CMake to ensure that my_library is available to MyExecutable during the build process.

