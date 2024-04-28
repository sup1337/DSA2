#include "functions.h"

int main()
{
//    ifstream input("bemenet.txt");
//    if(!input.is_open()){
//        cout << " nem nyilt meg A FILE";
//        exit(EXIT_FAILURE);
//    }
//    int n;
//    input >> n;
//    vector<string> colors(n);
//    for (int i = 0; i < n; ++i) {
//        input >> colors[i];
//    }
//    input.close();
//
//    set <vector<string>> flags = generateFlags(colors);
//    cout << "Az osszes zaszlok szama:" << flags.size()<< endl;
//    cout << "Az osszes zaszlo:" << endl;
//    for(auto flag: flags){
//        if (flag[(flag.size() - 1) / 2] == "PIROS" && flag[0] != "PIROS") {
//            for (auto color : flag) {
//                cout << color << " ";
//            }
//            cout << endl;
//        }
//    }


    string text;
    cout << "Irj be egy stringet: ";
    cin >> text;

    if (isPalindrome(text,0,text.length()-1 )) {
        cout << "A szoveg palindrom" << endl;
    } else {
        cout << "A szoveg nem palindrom." << endl;
    }

}
