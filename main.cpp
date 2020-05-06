#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
//#include <random>
/*#include <cmath>
#include <cctype>
#include <algorithm>
#include <string>
#include <cstring>*/

using namespace std;

struct Node{
    int data;
    Node* link;
};


Node* head;

void Insert (int x) {
    Node* temp = new Node();
    temp->data = x;
    temp->link = nullptr;
    if (head != nullptr) {
        temp->link = head;
    }
    head = temp;

}


void Print () {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << '\n';
        temp = temp->link;
    }
}

void Addto (int data, int n) {
    Node* tempadd = new Node();
    tempadd->data = data;
    tempadd->link = nullptr;
    if (n == 1) {
        Insert(data);
    }
    Node* temp2 = new Node();
    for (int i = 0; i < n-1; ++i) {
        temp2 = temp2->link;
    }
    tempadd->link = temp2->link;
    temp2->link = tempadd;
}
int Insert (int nums[], int size) {
    for (int i = 0; i < size; ++i) {
        Insert(nums[i]);
    }
    return 0;
}

int main() {
    head = nullptr; // pointing to nowhere
    int nums [] {1,2,3,4,5};
    Insert(nums, 5);
    Print();
    Addto(10, 3);
    Print();
//    cout << "inter the numofnums: " << endl;
//    int numofnums;
//    cin >> numofnums;
//    for (int i = 0; i < numofnums; ++i) {
//        cout << "inter the num: ";
//        int num;
//        cin >> num;
//        Insert(num);
//        cout << "the list is: " << endl;
//        Print();
//    }
//    do {
//        cout << "I: insert" << endl;
//        cout << "P: print" << endl;
//        cout << "A: add" << endl;
//        cout << "Q: quit" << endl;
//        cout << "inter your command: ";
//        cin >> input;
//        if (input == 'I' || input == 'i') {
//            int numofnums = 0;
//            cout << "inter the num of nums: ";
//            cin >> numofnums;
//            for (int i = 0; i < numofnums; ++i) {
//                cout << "inter the num: ";
//                int num;
//                cin >> num;
//                Insert(num);
//            }
//            int num = 0;
//            cout << "inter the num: ";
//            cin >> num;
//            Insert(num);
//            cout << "inserted ======================" << endl;
//        } else if (input == 'P' || input == 'p') {
//            cout << "list: " << endl;
//            Print();
//            cout << "======================" << '\n';
//        } else if (input == 'A' || input == 'a') {
//            int data;
//            int n;
//            cout << "inter the num you add: ";
//            cin >> data;
//            cout << "inter the position: ";
//            cin >> n;
//            Addto(data, n);
//            cout << "added =========================" << endl;
//        } else {
//            cout << "invalid======================" << endl;
//        }
//    } while (input != 'q' or input != 'Q');
    return 0;
}

/*
abcdefg
AbCdEfF

 */



/* #include <iostream>
#include <cmath>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring> */

// problem1
//int findmax1 (int nums [], int numofnums) {
//    int max = 0;
//    for (int i = 0; i < numofnums; ++i) {
//        if (nums[i] > max) {
//            max = nums[i];
//        }
//    }
//
//    return max;
//
//}
//    int numofnums = 0;
//    cout << "inter the numofnums: ";
//    cin >> numofnums;
//    int nums [numofnums];
//    cout << "inter the nums: ";
//    for (int i = 0; i < numofnums; ++i) {
//        cin >> nums[i];
//    }
//
//    int max1 = 0;
//    int max2 = 0;
//
//    max1 = findmax1(nums, numofnums);
//
//    for (int j = 0; j < numofnums; ++j) {
//        if (max1 == nums[j]) {
//            nums[j] = 0;
//            break;
//        }
//    }
//
//    max2 = findmax1(nums, numofnums);
//    cout << max1 << ' ' << max2 << '\n';
//    cout << "result is " << max1 * max2 ;

// prop2

//    int max = 0;
//    int numofnums = 0;
//    cout << "inter the max: " << endl;
//    cin >> max;
//    cout << "inter the numofnums: " << endl;
//    cin >> numofnums;
//    int nums [numofnums];
//    cout << "inter the nums: ";
//    for (int i = 0; i < numofnums; ++i) {
//        cin >> nums[i];
//    }
//    int count [max] = {0};
//    for (auto item1 : count){
//        cout << item1 << '\n';
//    }
//    cout << "___________________________"<<'\n';
//    for (auto item: nums) {
//        count[item-1] += 1;
//    }
//    for (auto item1 : count){
//        cout << item1 << '\n';
//    }



//prob 3
//
//int numoffr = 0;
//int height = 0;
//cout << "inter the numoffr: " << '\n';
//cin >> numoffr;
//cout << "inter the height: " << '\n';
//cin >> height;
//
//int lengths [numoffr];
//cout << "inter your friends: ";
//for (int i = 0; i < numoffr; ++i) {
//cin >> lengths[i];
//}
//int width = 0;
//for (int j = 0; j < numoffr; ++j) {
//if (lengths[j] <= height) {
//width +=1;
//} else if (lengths[j] > height) {
//width +=2;
//}
//}
//cout << "the width: " << width << '\n';





//prop4
//int numofplay = 0;
//int dan = 0;
//int ant = 0;
//cout << "inter the numofplay: ";
//cin >> numofplay;
//char check = ' ';
//cout << "inter  the plays: ";
//for (int i = 0; i < numofplay; ++i) {
//cin >> check;
//if (check == 'A') {
//ant +=1;
//} else if (check == 'D') {
//dan += 1;
//}
//}
//if (dan > ant) {
//cout << "Dan is the winner :-)";
//} else if (ant > dan) {
//cout << "Ant is the winner :-)";
//} else {
//cout << "Draw :-(";
//}



//prop5
//int weight1 = 0;
//int weight2 = 0;
//int years = 0;
//cout << "inter 2 weights: ";
//cin >> weight1;
//cin >> weight2;
//while (weight1 <= weight2) {
//years +=1;
//weight1 *= 3;
//weight2 *=2;
//}
//cout << "years is: " << years;




//prop6
//int numofpro = 0;
//int friends [3] {0,0,0};
//cout << "inter the numofpro: ";
//cin >> numofpro;
//int numofsol = 0;
//int writesol = 0;
//cout << "inter the friends: " << '\n';
//
//for (int i = 0; i < numofpro; ++i) {
//numofsol = 0;
//for (int j = 0; j < 3; ++j) {
//cin >> friends[j];
//}
//for (int j = 0; j < 3; ++j) {
//if (friends[j] == 1) {
//numofsol +=1;
//}
//}
//if (numofsol > 1) {
//writesol +=1;
//}
//}
//
//cout << "write sol for: " << writesol;




//prop7
//int array [5] [5] = {};
//int nums[2] = {};
//for (int i = 0; i < 5; ++i) {
//for (int j = 0; j < 5; ++j) {
//cin >> array[i][j];
//}
//}
//
//for (int i = 0; i < 5; ++i) {
//for (int j = 0; j < 5; ++j) {
//if (array[i][j] == 1) {
//nums[1] = i + 1;
//nums[0] = j + 1;
//}
//}
//}
//cout << nums[0] << " " << nums[1] << '\n';
//
//cout << (abs(nums[0] - 3) + abs(nums[1] - 3));





//prop8
//    string str1;
//    string str2;
//    int numofdef = 0;
//    cin >> str1 >> str2;
//    for (int i = 0; i < str1.length(); ++i) {
//        if (tolower(str1[i]) < towlower(str2[i])) {
//            numofdef -= 1;
//        }
//        if (tolower(str1[i]) > towlower(str2[i])) {
//            numofdef += 1;
//        }
//    }
//    cout << numofdef