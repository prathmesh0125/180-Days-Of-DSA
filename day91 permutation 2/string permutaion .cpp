#include <iostream>
#include <vector>

using namespace std;

void permute(string& str, vector<string>& ans, int index) {
    if (index == str.size()) {
        ans.push_back(str);
        return;
    }

    vector<bool> used(52, false); // Assuming both lowercase and uppercase English letters

    for (int i = index; i < str.size(); i++) {
        char currentChar = (str[i] >= 'a' && str[i] <= 'z') ? str[i] : str[i] - 'A' + 'a';

        if (!used[currentChar - 'a']) {
            swap(str[index], str[i]);
            permute(str, ans, index + 1);
            swap(str[index], str[i]);
            used[currentChar - 'a'] = true;
        }
    }
}

vector<string> find_permutation(string S) {
    vector<string> ans;
    permute(S, ans, 0);
    return ans;
}

int main() {
    string str = "AAC";
    vector<string> result = find_permutation(str);

    // Display the result
    for (const auto& perm : result) {
        cout << perm << " ";
    }

    return 0;
}
