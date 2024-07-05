#include <iostream>
#include <thread>
#include <chrono>

// Function to print numbers
void printNumbers()
{
    for (int i = 1; i <= 5; ++i)
    {
        std::cout << "Number: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

// Function to print letters
void printLetters()
{
    for (char letter = 'A'; letter <= 'E'; ++letter)
    {
        std::cout << "Letter: " << letter << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1500));
    }
}

int main()
{
    // Create threads
    std::thread thread1(printNumbers);
    std::thread thread2(printLetters);

    // Wait for both threads to complete
    thread1.join();
    thread2.join();

    std::cout << "Done!" << std::endl;
    return 0;
}
