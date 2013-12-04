iOS toolchain for Windows.
==

The iOS toolchain for Windows.

Currently supports 32 and 64 bit Windows XP, Vista, 7, 8, and 8.1.

This toolchain requires 32-Bit Cygwin. With python installed **inside Cygwin**

What you get:
==
1. LLVM + Clang 3.3
2. LD64 127.2 (from iToolchain with a custom wrapper to make it compatible with Cygwin)
3. CCTools 809 (also from iToolchain, once again with a custom wrapper to make it Cygwin compatible)


What this toolchain supports:
==
1. iOS SDKs up to version 7.1 (may work with 7.2 and higher, but untested)
2. Building binaries for arm, armv6, and armv7.
3. Objective C 2.0
4. Objective C Blocks (introduced with iOS 4.0)
5. Objective C Literals (introduced with iOS 5.1)
6. Objective C ARC (introduced with iOS 5.0)

The binaries from this toolchain have been tested and work properly on an iPod touch 5 and iPad mini, both of which are on iOS 6.1.2.
