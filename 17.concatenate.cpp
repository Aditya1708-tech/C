#include<iostream> 
#include<cstring>
using namespace std;
int main() 
{
    char str1[100], str2[100], result[200];

    cout << "Enter the first string: ";
    cin.getline(str1, 100);

    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    // Copy str1 to result
    strcpy(result, str1);

    // Concatenate str2 to result
    strcat(result, str2);

    // Output the result
    cout << "Concatenated String: " << result << endl;
    cout << "Length of Concatenated String: " << strlen(result) << endl;

    return 0;
}
