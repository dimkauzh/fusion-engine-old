rm -rf build
mkdir build

echo "Building program..."
echo "-------------------"
echo "\n"

gcc -o build/game example.c

echo "\n"
echo "Running program..."
echo "------------------"

./build/game

echo "\n"