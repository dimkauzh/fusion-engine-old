rm -rf build
mkdir build

if ! command -v cmake &> /dev/null; then
    echo "CMake is not installed."
    read -p "Do you want to install CMake? (y/n) " answer
    if [[ "$answer" =~ [yY](es)* ]]; then
        if [[ "$OSTYPE" == "darwin"* ]]; then
            if ! command -v brew &> /dev/null; then
                echo "Homebrew is not installed."
                read -p "Do you want to install Homebrew? (y/n) " answer
                if [[ "$answer" =~ [yY](es)* ]]; then
                    /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
                else
                    echo "Homebrew is required to install CMake. Please install it and run this script again."
                    exit 1
                fi
            fi
            brew install cmake
    elif [[ "$OSTYPE" == "linux-gnu"* ]]; then
        sudo apt-get install -y cmake
        else
            echo "Sorry, your platform is not supported. Please install it manually."
            exit 1
        fi
    else
        echo "CMake is required to continue. Please install it and run this script again."
        exit 1
    fi
fi


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