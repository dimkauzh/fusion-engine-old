rm -rf build
mkdir build

echo "Building project (CMake) ..."
echo "-------------------"
echo "\n"

cmake -Bbuild .

echo "\n"
echo "Building program (Makefile) ..."
echo "-------------------"
echo "\n"

cd build
make

echo "\n"
echo "Running program..."
echo "------------------"
echo "\n"

./example

echo "\n"