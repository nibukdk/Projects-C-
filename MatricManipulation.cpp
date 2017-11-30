#include <iostream>
#include <fstream>
using namespace std;

void print_matrix(int matrix[5][5]);
int calculate_sum(int matrix[5][5]);

int main(void)
{
        int matrix[5][5];
        int sum;
        ifstream file("matrix.txt");
        if (!file) {
                cout << "File cannot be opened!";
        }
        else {
                for (int y=0; y<5; y++) {
                        for (int x=0; x<5; x++) {
                                file >> matrix[y][x];
                        }
                }
                file.close();
                cout << "Matrix:" << endl;
                print_matrix(matrix);
                sum = count_sum(matrix);
                cout << "Sum of elements: " << sum << endl;
        }
}

void print_matrix(int matrix[5][5]){
        int x,y;
        for (x=0; x<5; x++) {
                for (y=0; y<5; y++) {
                        if(y==4) {
                                cout<<matrix[x][y]<<"\n";
                        }
                        else{
                                cout<<matrix[x][y]<<" ";
                        }

                }
        }
}

int count_sum(int matrix[5][5]){
        int x,y;
        int sum=0;
        for (x=0; x<5; x++) {

                for (y=0; y<5; y++) {
                        sum=sum+matrix[x][y];

                }
        }
        return sum;
}
