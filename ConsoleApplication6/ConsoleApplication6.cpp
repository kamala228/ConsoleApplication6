#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

int main() {
    system("chcp 1251>null");
    /*vector<int> arr = { 1, -3, 4, -5, 9, -6, 7, -2, 8, -10 };
    int sum_negative = 0;
    for (int x : arr)
        if (x < 0) sum_negative += x;
    auto min_it = min_element(arr.begin(), arr.end());
    auto max_it = max_element(arr.begin(), arr.end());
    if (min_it > max_it) swap(min_it, max_it);
    int product_between = 1;
    for (auto it = min_it + 1; it < max_it; ++it)
        product_between *= *it;
    int product_even_indices = 1;
    for (size_t i = 0; i < arr.size(); i += 2)
        product_even_indices *= arr[i];
    int first_negative = -1, last_negative = -1;
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] < 0) {
            if (first_negative == -1) first_negative = i;
            last_negative = i;
        }
    }
    int sum_between_negatives = 0;
    if (first_negative != -1 && last_negative != -1 && first_negative != last_negative) {
        for (size_t i = first_negative + 1; i < last_negative; ++i)
            sum_between_negatives += arr[i];
    }
    cout << "Сума від'ємних елементів: " << sum_negative << endl;
    cout << "Добуток між min і max: " << product_between << endl;
    cout << "Добуток парних індексів: " << product_even_indices << endl;
    cout << "Сума між першим і останнім від'ємними: " << sum_between_negatives << endl;*/





    /*srand(time(0));
    vector<int> profits(12);
    for (int& profit : profits) profit = rand() % 100 - 50; 
    cout << "Прибуток за 12 місяців: ";
    for (int profit : profits) cout << profit << " ";
    cout << endl;
    int start, end;
    cout << "Введіть діапазон (наприклад, 3 6): ";
    cin >> start >> end;

    if (start > end) swap(start, end);
    start--; end--;
    auto range = vector<int>(profits.begin() + start, profits.begin() + end + 1);
    int max_month = max_element(range.begin(), range.end()) - range.begin() + start;
    int min_month = min_element(range.begin(), range.end()) - range.begin() + start;
    cout << "Максимальний прибуток: " << profits[max_month] << " у місяці " << max_month + 1 << endl;
    cout << "Мінімальний прибуток: " << profits[min_month] << " у місяці " << min_month + 1 << endl;*/


    //srand(time(0));
    //vector<int> A(5), B(5), C(5);
    //for (int i = 0; i < 5; ++i) {
    //    A[i] = rand() % 20 - 10;
    //    B[i] = rand() % 20 - 10;
    //    C[i] = A[i] + B[i];
    //}
    //cout << "Масив A: ";
    //for (int x : A) cout << x << " ";
    //cout << "\nМасив B: ";
    //for (int x : B) cout << x << " ";
    //cout << "\nМасив C: ";
    //for (int x : C) cout << x << " ";
    //cout << endl;


    return 0;
}

