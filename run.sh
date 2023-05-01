rm -rf build
mkdir build

echo "Building program..."
echo "-------------------"
echo "\n"

g++ -o build/game example.cpp

echo "\n"
echo "Running program..."
echo "------------------"

./build/game