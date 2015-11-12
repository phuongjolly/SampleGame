//
//  Student.cpp
//  SampleGame
//
//  Created by Le Thi Phuong on 8/31/15.
//  Copyright (c) 2015 phuongjolly. All rights reserved.
//

#include "Student.h"

Student::Student()
{}

Student::~Student()
{}

void Student::SetAge(int age)
{
    this->age = age;
}

#if WIN32
/// get a resource file path
///
const char *GetResourcePath(const char *fileName) {
    return fileName;
}
#elifdef ANDROID
const char *GetResourcePath(const char *fileName) {
    sprintf(destination, "/sdcard/data/%s", fileName);
}
#endif