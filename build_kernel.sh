make -C $PWD O=$PWD/out ARCH=arm64 msm-perf_defconfig
echo CONFIG_PRODUCT_LE_ZL1=y | sed -e 's/\s\+/\n/g' >> $PWD/out/.config
make -C $PWD O=$PWD/out ARCH=arm64 oldconfig
make -C $PWD O=$PWD/out ARCH=arm64 headers_install
make -j$JOBS -C $PWD O=$PWD/out ARCH=arm64 KCFLAGS=-mno-android
make -j$JOBS -C $PWD O=$PWD/out ARCH=arm64 KCFLAGS=-mno-android modules
