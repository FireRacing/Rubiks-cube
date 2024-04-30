#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

struct cube_struct{
    vector<vector<int>> face1; //Top side face
    vector <vector<int>> face2; // Right side face
    vector <vector <int>> face3; // Bottom side face
    vector <vector<int>> face4; // Left side face
    vector <vector<int>> face5; // Front side face
    vector <vector<int>> face6; // Back side face
    vector <char> move_list;
};

class rubiks_cube{
private:
    cube_struct new_cube_struct;
    vector <int> column_vector, row_vector;
public:
    void populate_cube_faces(long rows , long columns)
    {
        column_array[columns];
        rows_array[rows];
        /*      1   2
        *      -------
        *   1 | 1   2 |
        *   2 | 3   4 |
        *      --------
        *   number of rows = 2
        *
        */
        vector <int> temporary_vector;
        int number = 0;
        for (long l = 0; l < rows; l++)
        {
            for (long l1 = 0 ; l1 < columns; l1++)
            {
                while (number <= 0)
                    number = rand();
                number = number % 256;
                temporary_vector.push_back(number);
            }
            new_cube_struct.face1.push_back(temporary_vector);
            temporary_vector.clear();
        }
        cout << "Face 1 populated" << endl;
        for (long l = 0; l < rows; l++)
        {
            for (long l1 = 0 ; l1 < columns; l1++)
            {
                while (number <= 0)
                    number = rand();
                number = number % 256;
                temporary_vector.push_back(number);
            }
            new_cube_struct.face2.push_back(temporary_vector);
            temporary_vector.clear();
        }
        cout << "Face 2 populated" << endl;
        for (long l = 0; l < rows; l++)
        {
            for (long l1 = 0 ; l1 < columns; l1++)
            {
                while (number <= 0)
                    number = rand();
                number = number % 256;
                temporary_vector.push_back(number);
            }
            new_cube.face3.push_back(temporary_vector);
            temporary_vector.clear();
        }
        cout << "Face 3 populated" << endl;
        for (long l = 0; l < rows; l++)
        {
            for (long l1 = 0 ; l1 < columns; l1++)
            {
                while (number <= 0)
                    number = rand();
                number = number % 256;
                temporary_vector.push_back(number);
            }
            new_cube_struct.face4.push_back(temporary_vector);
            temporary_vector.clear();
        }
        cout << "Face 4 populated" << endl;
        for (long l = 0; l < rows; l++)
        {
            for (long l1 = 0 ; l1 < columns; l1++)
            {
                while (number <= 0)
                    number = rand();
                number = number % 256;
                temporary_vector.push_back(number);
            }
            new_cube_struct.face5.push_back(temporary_vector);
            temporary_vector.clear();
        }
        cout << "Face 5 populated" << endl;
        for (long l = 0; l < rows; l++)
        {
            for (long l1 = 0 ; l1 < columns; l1++)
            {
                while (number <= 0)
                    number = rand();
                number = number % 256;
                temporary_vector.push_back(number);
            }
            new_cube_struct.face6.push_back(temporary_vector);
            temporary_vector.clear();
        }
    }

    /* Function to interact with cube
    * L - Left
    * R - Right
    * D - Down
    * U - Up
    */
    void cube_interactions(cube_struct new_cube_struct)
    {
        int face;
        display_cube(new_cube_struct);
        while (1)
        {
            display_cube(cube_struct);
            cout << "Which face do you want to select?";
            cin >> face;
            face = face % 6;
            char rotation;
            cin >> rotation;
        }
    }
    void display_cube (cube_struct new_cube)
    {
        int number_of_rows_of_cube = sizeof(new_cube.face1); // Number of rows
        int number_of_columns_of_cube = sizeof (new_cube.face1[0]); // Number of columns
        cout << "Cube face 1" << endl;
        for (int i = 0; i < number_of_rows_of_cube; i++)
            cout << "-" << endl;
        for (int i = 0 ; i < sizeof (new_cube.face1); i++) //Display cube face 1
        {
            cout << "|\t";
            for (int j = 0; j < sizeof(new_cube.face1[0]); j++)
                cout << new_cube.face1[i][j] << endl;
        }
        cout << "Cube face 2" << endl;
        for (int i = 0; i < number_of_rows_of_cube; i++)
            cout << "-" << endl;
        for (int i = 0 ; i < sizeof (new_cube.face1); i++) //Display cube face 2
        {
            cout << "|\t";
            for (int j = 0; j < sizeof(new_cube.face1[0]); j++)
                cout << new_cube.face1[i][j] << endl;
        }
        cout << "Cube face 3" << endl;
        for (int i = 0; i < number_of_rows_of_cube; i++)
            cout << "-" << endl;
        for (int i = 0 ; i < sizeof (new_cube.face1); i++) //Display cube face 3
        {
            cout << "|\t";
            for (int j = 0; j < sizeof(new_cube.face1[0]); j++)
                cout << new_cube.face1[i][j] << endl;
        }
        cout << "Cube face 4" << endl;
        for (int i = 0; i < number_of_rows_of_cube; i++)
            cout << "-" << endl;
        for (int i = 0 ; i < sizeof (new_cube.face1); i++) //Display cube face 4
        {
            cout << "|\t";
            for (int j = 0; j < sizeof(new_cube.face1[0]); j++)
                cout << new_cube.face1[i][j] << endl;
        }
        cout << "Cube face 5" << endl;
        for (int i = 0; i < number_of_rows_of_cube; i++)
            cout << "-" << endl;
        for (int i = 0 ; i < sizeof (new_cube.face1); i++) //Display cube face 5
        {
            cout << "|\t";
            for (int j = 0; j < sizeof(new_cube.face1[0]); j++)
                cout << new_cube.face1[i][j] << endl;
        }
        cout << "Cube face 5" << endl;
        for (int i = 0; i < number_of_rows_of_cube; i++)
            cout << "-" << endl;
        for (int i = 0 ; i < sizeof (new_cube.face1); i++) //Display cube face 5
        {
            cout << "|\t";
            for (int j = 0; j < sizeof(new_cube.face1[0]); j++)
                cout << new_cube.face1[i][j] << endl;
        }
        int face;
        cout << "Which cube face do you want to select?: ";
        cin >> face;
        bool is_rotated;
        switch (face)
        {
        case 1 : char rotation;
                if (rotation == 'L' || rotation == 'R')
                    is_rotated = horizontal_rotation(rotation);
                else if (rotation == 'U' || rotation == 'U')
                    is_rotated = vertical_rotation(rotation);
                if (is_rotated == true);
                    continue;
                else
                    cout << "Rotation failed" << endl;

        break;
        case 2 : char rotation;
                if (rotation == 'L' || rotation == 'R')
                    horizontal_rotation(rotation);
                else if (rotation == 'U' || rotation == 'U')
                    vertical_rotation(rotation);
                if (is_rotated == true)
                    continue;
                else
                    cout << "Rotation failed" << endl;
        break;
        case 3 : char rotation;
                if (rotation == 'L' || rotation == 'R')
                    horizontal_rotation(rotation);
                else if (rotation == 'U' || rotation == 'U')
                    vertical_rotation(rotation);
                break;
                if (is_rotated == true)
                    cout << "Rotation successful"
                    continue;
                else
                    cout << "Rotation failed" << endl;

        case 4 : char rotation;
                if (rotation == 'L' || rotation == 'R')
                    horizontal_rotation(rotation);
                else if (rotation == 'U' || rotation == 'U')
                    vertical_rotation(rotation);
                break;

        case 5 : char rotation;
                if (rotation == 'L' || rotation == 'R')
                    horizontal_rotation(rotation);
                else if (rotation == 'U' || rotation == 'U')
                    vertical_rotation(rotation);
                break;

        case 6 : char rotation;
                if (rotation == 'L' || rotation == 'R')
                    horizontal_rotation(rotation);
                else if (rotation == 'U' || rotation == 'U')
                    vertical_rotation(rotation);
                break;

        }
    }
    bool horizontal_rotation(char rotation)
    {
        int column_length = sizeof(cube_struct.face1[1]);
        int row_length = sizeof(cube_struct.face1);
        for (int i = 0; i < columnn_length; i++)
            column_vector.push_back(0);
        for (int i = 0; i < row_length; i++)
            row_vector.push_back(0);
    }
    bool vertical_rotation(char rotation)
    {

    }
    bool is_additive_group(vector<char> move_list)
    {
        /* L -> 0
        *  R -> 1
        *  U -> 2
        *  D -> 3
        */
        vector <int> translated_vector;
        for (int i = 0; i < sizeof (move_list); i++)
        {
            switch (move_list[i])
            {
                case 'L' : translated_vector.push_back(1);
                break;
                case 'R' : translated_vector.push_back(2);
                break;
                case 'U' : translated_vector.push_back(3);
                break;
                case 'D' : translated_vector.push_back(4);
                break;
                default: break;
            }
        }
        cout << "Set has identity element" << endl;
        int associative_count = 0, result, result1;
        for (int i = 1; i < sizeof(move_list); i++)
        {
            result = translated_vector[i-1] + translated_vector[i];
            result1 = translated_vector[i] + translated_vector[i-1];
            if(result == result1)
                associative_count += 1;
        }
        if (associative_count == sizeof(move_list) -1 )
        {
            cout << "Group is associative" << endl;
            int inverse_count = 0;
            for (int i = 1; i < sizeof(move_list); i++)
            {
                result = translated_vector[i-1] - translated_vector[i];
                result1 = translated_vector[i] - translated_vector[i-1];
                if(result == result1)
                    inverse_count += 1;
            }
            if (inverse_count == sizeof(move_list) - 1 )
            {
                cout << "The set has inverses with respect to addition" << endl;
                cout << "The set is an additive group" << endl;
            }
            else
            {
                cout << "The set dosen't have inverses for every element" << endl;
                cout << "The set is not a multiplicative group" << endl;
                exit(0);
            }
        }
        else
        {
            cout << "The set has no identity element" << endl;
            cout << "The set is not a multiplicative group" << endl;
            exit(0);
        }
    }
    bool is_multiplicative_group()
    {
        /* L -> 0
        *  R -> 1
        *  U -> 2
        *  D -> 3
        */
        vector <int> translated_vector;
        for (int i = 0; i < sizeof (move_list); i++)
        {
            switch (move_list[i])
            {
                case 'L' : translated_vector.push_back(1);
                break;
                case 'R' : translated_vector.push_back(2);
                break;
                case 'U' : translated_vector.push_back(3);
                break;
                case 'D' : translated_vector.push_back(4);
                break;
                default: break;
            }
        }
        cout << "The set has identity element" << endl;
        int associative_count = 0, result, result1;
        for (int i = 1; i < sizeof(move_list); i++)
        {
            result = translated_vector[i-1] * translated_vector[i];
            result1 = translated_vector[i] * translated_vector[i-1];
            if(result == result1)
                associative_count += 1;
        }
        if (associative_count == sizeof(move_list) -1 )
        {
            cout << "Group is associative" << endl;
            int inverse_count = 0;
            for (int i = 1; i < sizeof(move_list); i++)
            {
                result = translated_vector[i-1] / translated_vector[i];
                result1 = translated_vector[i] / translated_vector[i-1];
                if(result == result1)
                    inverse_count += 1;
            }
            if (inverse_count == sizeof(move_list) - 1 )
            {
                cout << "The set has inverses with respect to multiplication" << endl;
                cout << "The set is an multiplicative group" << endl;
            }
            else
            {
                cout << "The set dosen't have inverses for every element" << endl;
                cout << "The set is not a multiplicative group" << endl;
                exit(0);
            }
        }
        else
        {
            cout << "The set has no identity element" << endl;
            cout << "The set is not a multiplicative group" << endl;
            exit(0);
        }
    }
};

int main()
{
    rubiks_cube rubiks_cube_instance;
    rubiks_cube_instance.populate_cube_faces();
}
