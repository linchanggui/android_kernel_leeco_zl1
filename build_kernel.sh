make -C $PWD O=$PWD/out ARCH=arm64 zl1_defconfig
make -C $PWD O=$PWD/out ARCH=arm64 oldconfig
make -C $PWD O=$PWD/out ARCH=arm64 headers_install
make -j$JOBS -C $PWD O=$PWD/out ARCH=arm64 KCFLAGS=-mno-android
make -j$JOBS -C $PWD O=$PWD/out ARCH=arm64 KCFLAGS=-mno-android modules
