/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSImage.h>

@class NSArray;

@interface NSCompositeImage : NSImage {

	NSArray* _constituentImages;

}
+(id)compositeImageWithConstituentImages:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(void)drawInRect:(CGRect)arg1 fromRect:(CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 ;
-(CGImageRef)CGImageForProposedRect:(CGRect*)arg1 context:(id)arg2 hints:(id)arg3 ;
-(void)_drawMappingAlignmentRectToRect:(CGRect)arg1 withState:(unsigned long long)arg2 backgroundStyle:(int)arg3 tintColor:(id)arg4 operation:(unsigned long long)arg5 fraction:(double)arg6 flip:(char)arg7 hints:(id)arg8 ;
@end
