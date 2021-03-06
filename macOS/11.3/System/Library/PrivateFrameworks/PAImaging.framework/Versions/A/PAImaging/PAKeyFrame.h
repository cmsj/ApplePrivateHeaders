/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImaging.framework/Versions/A/PAImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PAImaging/PAImaging-Structs.h>
@interface PAKeyFrame : NSObject {

	CGRect _bounds;
	CGRect _clip;
	CGAffineTransform _transform;

}

@property (assign) CGRect bounds;                            //@synthesize bounds=_bounds - In the implementation block
@property (assign) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (assign) CGRect clip;                              //@synthesize clip=_clip - In the implementation block
-(id)debugDescription;
-(CGAffineTransform)transform;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGRect)clip;
-(void)setClip:(CGRect)arg1 ;
@end

