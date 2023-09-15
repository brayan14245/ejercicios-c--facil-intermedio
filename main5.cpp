#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> let = {50, 55, 57, 58, 60};
    int t = 174;
    int max_sum = 0;
    vector<int> max_combination;

    for (int i = 0; i < let.size(); i++) {
        for (int j = i + 1; j < let.size(); j++) {
            for (int k = j + 1; k < let.size(); k++) {
                int sum = let[i] + let[j] + let[k];
                if (sum <= t && sum > max_sum) {
                    max_sum = sum;
                    max_combination = {let[i], let[j], let[k]};
                }
            }
        }
    }

    cout << "Las ciudades seleccionadas son: ";
    for (int i = 0; i < max_combination.size(); i++) {
        cout << max_combination[i] << " ";
    }
    cout << "con una distancia total de " << max_sum << " millas." << endl;

    return 0;
}
