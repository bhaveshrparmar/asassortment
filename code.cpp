// nagtive element in 1d array
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {2, -4, 1, -3, -5}; 

    cout << "Negative elements in the array: ";
    for (int i = 0; i < 5; i++) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
 
 //largest element in 2d array

 #include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {2, 7, 1},
        {3, 5, 4},
        {8, 9, 6}
    }; 

    int largeElement = arr[0][0]; 

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > largeElement) {
                largeElement = arr[i][j];
            }
        }
    }

    cout << "Largest element in the array: " << largeElement << endl;

    return 0;
}

//transpose of 2d array

#include <iostream>
using namespace std;

int main() {
    
    int arr[3][3] = {
        {2, 4, 1},
        {3, 5, 4},
        {8, 2, 6}
    };

    int transpose[3][3]; 

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = arr[i][j];
        }
    }

    
    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// sum of elements in Row & column of 2d array

#include <iostream>
using namespace std;

int main() {
    
    int arr[3][3] = {
        {2, 7, 1},
        {3, 5, 4},
        {8, 9, 6}
    };

    
    cout << "Sum of each row:\n";
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += arr[i][j];
        }
        cout << "Row " << i + 1 << " sum: " << rowSum << endl;
    }

    
    cout << "\nSum of each column:\n";
    for (int j = 0; j < 3; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum += arr[i][j];
        }
        cout << "Column " << j + 1 << " sum: " << colSum << endl;
    }

    return 0;
}