#include <iostream>
#include <vector>

using std::vector;

const int QUEUE_MAX_SIZE = 20;

// Информационный отчет
void printReport(vector<int> &arr, const std::string &title = "Report") {
    std::cout << "--------" << title << "---------\n";
    std::cout << "list size: " << arr.size() << std::endl;
    for (auto &item: arr) std::cout << item << " ";
    std::cout << "\n------------" << std::endl;
}

// При достижении максимума - первый элемент удаляется и добавляется новый в конец очереди
void addToQueue(vector<int> &queue, int value, int maxSize = QUEUE_MAX_SIZE) {
    if (queue.size() == maxSize) {
        queue.erase(queue.cbegin());
    }
    queue.push_back(value);
}

char getContinueStatus() {
    char uSelect;
    while (true) {
        std::cout << "Do you want to continue typing (y/n)?" << std::endl;
        std::cin >> uSelect;

        if (uSelect == 'y' || uSelect == 'n' || uSelect == 'Y' || uSelect == 'N') {
            break;
        }
    }

    return uSelect;
}

int main() {
    char uSelect = 'y';
    // сразу заполним очередь нулями по умолчанию, чтобы отследить изменения
    vector<int> queue(20);
    printReport(queue, "after init");

    // заполним весь массив числами, чтобы было видно смещение при последующем вводе
    for (int i = 0; i < 20; ++i) addToQueue(queue, i);

    printReport(queue, "after cycle");

    while (uSelect == 'y' || uSelect == 'Y') {
        const int PRINT = -1;
        int uInput;
        std::cout << "Input value to add to queue (or -1 for print):" << std::endl;
        std::cin >> uInput;
        (uInput != PRINT) ? addToQueue(queue, uInput) : printReport(queue);

        uSelect = getContinueStatus();
    }

    std::cout << "See you later!" << std::endl;
}
