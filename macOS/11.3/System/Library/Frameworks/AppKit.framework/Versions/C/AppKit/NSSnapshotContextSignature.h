/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSAppearance;

@interface NSSnapshotContextSignature : NSObject {

	CGRect _modelLogicalRect;
	CGRect _modelPixelLogicalRect;
	CGRect _modelPixelDrawingRect;
	CGColorSpaceRef _colorSpace;
	unsigned long long _imageInterpolation;
	NSAppearance* _appearance;

}
-(void)dealloc;
-(id)description;
-(char)isApplicableForRect:(CGRect)arg1 context:(id)arg2 hints:(id)arg3 ;
-(id)initWithDrawingRect:(CGRect)arg1 applicableForRect:(CGRect)arg2 context:(id)arg3 hints:(id)arg4 ;
@end
