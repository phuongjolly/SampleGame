//
//  Shader.fsh
//  SampleGame
//
//  Created by Le Thi Phuong on 8/31/15.
//  Copyright (c) 2015 phuongjolly. All rights reserved.
//

varying lowp vec4 colorVarying;

void main()
{
    gl_FragColor = colorVarying;
}
