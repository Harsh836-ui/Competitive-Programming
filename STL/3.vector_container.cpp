#include <bits/stdc++.h>
using namespace std;

int main()
{

    // VECTORS :for linear order questions

    //  in array we have to predefine size of array max size of array we can declare inside int main is = 10 ^6 and globally is 10^7

    // bool arr max inside int main = 10^7
    // bool arr max globally = 10^8

    /*vector<int>arr;  // {empty vector is created}
    cout << arr.size() << endl; // prints 0

    // push_back and emplace_back are same but emplace back takes less time
    arr.push_back(0); // {0}
    arr.push_back(2); //{0,2}
    cout << arr.size() << endl; // prints 2 that is dynamic increase in size

    arr.pop_back(); // pop out last element we entered // {0}

    cout << arr.size() << endl; // prints 1

    // if size is exceeded then segmentation fault error is thrown
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);


    arr.clear(); // erase all the elements at once
    cout << arr.size() << endl;  // print 0 as we cleared


    vector<int>vec(4, 0); // {0,0,0,0}
    vec.push_back(2);     // {0,0,0,0,2}
    vec.push_back(4);      //{0,0,0,0,2,4}


    for (auto it : vec) {
    cout << it << " ";   //to print
    }


  for (auto it = vec.begin(); it != vec.end(); ++it)   //to print
         cout << *it << " ";

    vector<int>vec(4, 10);  //{10,10,10,10}


    vector<int>vec1(4, 0);
    vector<int>vec2(4, 10);

    //will copy entire vec2 in vec3
    vector<int>vec3(vec2.begin(), vec2.end());  //  [  )
    vector<int>vec3(vec2);

    cout << endl;

    vector<int> harsh;
    harsh.push_back(1);
    harsh.push_back(3);
    harsh.push_back(2);
    harsh.push_back(5);  // {1,3,2,5}


    // now create a harsh1 with {1,3}
    vector<int>harsh1(harsh.begin(), harsh.begin() + 2);  //or harsh.end-2
    for (auto it : harsh1) {
    cout << it << " ";   //to print
    }*/

    // others like lower bound , upper end
    //swap (v1,v2)
    // begin() , end() .....same as array

    // Define 2D VECTORS:
    vector<vector<int>> vec;
    vector<int> raj1;
    raj1.push_back(1);
    raj1.push_back(2);

    vector<int> raj2;
    raj2.push_back(10);
    raj2.push_back(20);

    vector<int> raj3;
    raj3.push_back(19);
    raj3.push_back(25);
    raj3.push_back(27);

    vec.push_back(raj1); // vec will store raj1 at 0th index and raj2 at 1th and raj3 at 3
    vec.push_back(raj2);
    vec.push_back(raj3);

    for (auto vctr : vec)
    {   // here vctr is raj1, raj2 then raj3
        for (auto it : vctr)
        {   // here 'it' 1 then 2 in raj1......10 and 20 in raj2...
            cout << it << " ";
        }
        cout << "\n";
    }

    cout << vec[2][1] << endl; // to access any element

    //other way to print to print 2d vector

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    //define a 10 x 20 size vector vec1

    vector<vector<int>> vec1(10, vector<int>(20, 0));

    cout << vec1.size() << endl; //prints 10

    vec1.push_back(vector<int>(20, 0)); // we added one more row dynamically

    cout << vec1.size() << endl; //prints 11

    // cout << vec1[5][7];  //will print 0

    //Array of vectors same as 2d vector but array size fixed
    // Define array of vectors used when we know how many vectors are required ex. graphs nodes

    vector<int> arr[4];  // [ {}, {}, {}, {}]
    // i.e constant width having dynamic indexes
    arr[1].push_back(2); // [ {}, {2} , {}, {} ]
    arr[1].push_back(3); // [ {}, {2, 3}, {}, {}]
    arr[0].push_back(12);
    arr[0].push_back(14);
    arr[2].push_back(45);
    arr[2].push_back(23); // [{12,14},{2,3},{45,23},{ }]

    // to print array of vectors
    for (int i = 0; i < 4; i++)
    {
        for (auto it = arr[i].begin(); it != arr[i].end(); it++)
        {   // will print 12 14 2 3 45 23
            cout << *it << " ";
        }
    }

    // 3D VECTOR:

    //define 10x20x30   //or  int arr[10][20][30]
    // i.e 1 10 then 2d of 20 30

    vector<vector<vector<int>>> vec(10, vector<vector<int>> vec(20, vector<int>(30, 0)));

    //front back size clear...all same as array
}
