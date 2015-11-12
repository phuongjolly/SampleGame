//
//  Student.h
//  SampleGame
//
//  Created by Le Thi Phuong on 8/31/15.
//  Copyright (c) 2015 phuongjolly. All rights reserved.
//

#ifndef __SampleGame__Student__
#define __SampleGame__Student__

#include <stdio.h>

class Student {
    
public:
    Student();
    ~Student();
    
    void SetAge(int age);
    int age;

};

const char* GetResourcePath(const char* fileName);

#endif /* defined(__SampleGame__Student__) */
