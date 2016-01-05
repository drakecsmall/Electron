//
//  ERenderView.h
//  Electron
//
//  Created by Samuco on 19/04/2015.
//  Copyright (c) 2015 Samuco. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ERenderView : NSOpenGLView
{
    double totalTime;
    int frames;
    id delegate;
    
    CVDisplayLinkRef displayLink; //display link for managing rendering thread
    //NSTimer *drawTimer;
}
-(void*)renderer;
-(void)setDelegate:(id)del;
-(void)setData:(NSData*)data;
-(NSData *)getData;
@end
