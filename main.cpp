/
//  main.cpp
//  oop
//
//  Created by HUSSAIN OTUDI on 2/22/17.
//  Copyright © 2017 HUSSAIN OTUDI. All rights reserved.
//

#include <iostream>
#include <iostream> // library that contain basic input/output functions
#include <fstream>  // library that contains file input/output functions
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int main(int argc, char* args[])
    {
        ifstream fin("File.dat");
        char buffer[1000];  //user input from command line
        int size = 1024;
        char * file_array = new char[size];
        int counter = 0;
        cout << "Please enter the word to  search in file : ";
        cin.getline(buffer,99);     int Size = 0;
        for(int i = 0; buffer[i] != '\0'; i++)
        {
            Size++;
        }
        if(fin.good())
        {
            //this loop run until end of file (eof) does not occur
            while(!fin.eof())
            {
                fin.get(file_array[counter]); //reading one character from file to array
                counter++;
            }
            file_array[counter-1] = '\0'; //placing character array terminating character
            
            //this loop is searching for the word in the array
            for(int i = 0; file_array[i] != '\0'; i++)
            {
                
                for(int j = 0; buffer[j] != '\0' && j < 100 ; j++)
                {
                    if(file_array[i] == buffer[j])
                    {
                        i++;
                        if(buffer[j+1] == '\0')
                        {
                            cout << "Word Found in File at line " << (i-Size) << endl;
                            
                        }
                    }
                    else
                    {
                        
                        break;
                    }
                }
            }
        }
        
        
        else 
        {
            cout << " sorry File could not be opened." << endl;
        }
        return 0;
    }
