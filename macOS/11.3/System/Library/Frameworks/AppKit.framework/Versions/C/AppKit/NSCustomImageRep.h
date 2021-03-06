/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSImageRep.h>

@interface NSCustomImageRep : NSImageRep {

	unsigned _reserved;
	SEL _drawMethod;
	id _drawObject;

}

@property (copy,readonly) id drawingHandler; 
@property (readonly) SEL drawSelector; 
@property (__weak,readonly) id delegate; 
+(void)initialize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)delegate;
-(id)initWithSize:(CGSize)arg1 flipped:(char)arg2 drawingHandler:(/*^block*/id)arg3 ;
-(char)isFlipped;
-(char)draw;
-(char)_wantsToBeCached;
-(void)setFlipped:(char)arg1 ;
-(id)_imageRepsForEncodingWithCoder:(id)arg1 ;
-(/*^block*/id)drawHandler;
-(id)initWithDrawSelector:(SEL)arg1 delegate:(id)arg2 ;
-(id)drawingHandler;
-(SEL)drawSelector;
-(id)initWithSize:(CGSize)arg1 flipped:(char)arg2 drawHandler:(/*^block*/id)arg3 ;
-(id)initWithDrawSelector:(SEL)arg1 delegate:(id)arg2 flipped:(char)arg3 ;
-(id)initWithSize:(CGSize)arg1 drawHandler:(/*^block*/id)arg2 ;
@end

