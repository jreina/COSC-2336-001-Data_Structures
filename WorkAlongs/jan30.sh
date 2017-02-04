g++ -o ./jan30 ./jan30.cpp
./jan30
if [ $? -ne 5 ]; then
    echo "ERROR"
    exit
fi
echo "YAY"
