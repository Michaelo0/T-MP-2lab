//
//  main.cpp
//  Lab2
//
//  Created by Imac on 06.06.16.
//  Copyright © 2016 Imac. All rights reserved.
//

#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main()
{
        string buf;
       ifstream file("text.txt");
       getline(file, buf, '\0');
        file.close();
        long size = buf.length();
        int i = 0;
    
        while(i<size)
            {
                    if ((buf[i] == '/') && (buf[i+1] == '*') && (buf[i+2] == '*'))
                        {
                                i += 3;
                               while (buf[i] != '\\')
                                    {
                                           i++;
                                    }
                    
                                while ((buf[i] != ' ') && (buf[i] != '\n'))
                                    {
                                            i++;
                                    }
                                    i++;
                    
                                while ((buf[i] != '*') || (buf[i + 1] != '/'))
                                    {
                                            if (buf[i] == '\n') cout << ' ';
                                                else cout<<buf[i];
                                                i++;
                                            }
                                            cout << endl;
                                            i++;
                                    }
                                    i++;
                                    }
                                system("pause");
                                    return 0;
                                }