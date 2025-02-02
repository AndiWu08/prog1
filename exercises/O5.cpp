#include <iostream>  // Include the input-output stream library

using namespace std;

class NumberBox {
    private:
        int boxsize;
        int counter;
        double* numbers;

    public:
        NumberBox(int MAX_NR) {
            this->boxsize = MAX_NR;
            this->numbers = new double[boxsize];
            this->counter = 0;

            cout << "NumberBox was created with max capacity: " << boxsize <<  endl;
        }
        void add_a_number(double new_number) {
            if (counter < boxsize)
            {
                numbers[counter] = new_number;
                counter++;
                cout << "added number: " << new_number << endl;
            } else {
                cout << "This box is already at max capacity" << endl;
            }
        }

        void show_all_numbers_in_box() {
            cout << "Numbers currently in box: ";
            for (int i = 0; i < counter; i++)
            {
                cout << numbers[i] << " ";
            }
            cout << endl;
        }

        void get_min_max(double *minval, double *maxval) {
            if (counter == 0) return;

            *minval = numbers[0];
            *maxval = numbers[0];

            for (int i = 0; i < counter; i++)
            {
                if (numbers[i] < *minval) *minval = numbers[i];
                if (numbers[i] > *maxval) *maxval = numbers[i];
            }  
        }

        double get_arithmetic_mean() {
            double mean;
            
            if (counter == 0) return 0;

            double sum = 0;
            for (int i = 0; i < counter; i++)
            {
                sum += numbers[i];
            }

            return (sum / (double)counter) ;
        }

        NumberBox* copy() {
            NumberBox* box_copy = new NumberBox(boxsize);
            box_copy->counter = counter;
            for (int i = 0; i < counter; i++)
            {
                box_copy->numbers[i] = numbers[i];
            }
            return box_copy;
        }
};

int main()
{
   // 1. create a number box #1
   NumberBox* myBox1 = new NumberBox(10);
   myBox1->add_a_number(1.0);
   myBox1->add_a_number(4.0);
   myBox1->add_a_number(7.0);
   
   // 2. get a copy of the number box
   NumberBox* myBox2 = myBox1->copy();

   // 3. add some numbers to number box #2
   myBox2->add_a_number(14.0);
   myBox2->add_a_number(18.0);

   // 4. show content of number box #1 and #2
   printf("\n");
   printf("myBox1: ");
   myBox1->show_all_numbers_in_box();
   printf("myBox2: ");
   myBox2->show_all_numbers_in_box();
}