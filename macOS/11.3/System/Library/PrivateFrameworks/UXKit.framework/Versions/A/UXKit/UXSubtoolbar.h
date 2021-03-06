/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UXKit.framework/Versions/A/UXKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UXKit/UXKit-Structs.h>
#import <UXKit/UXToolbar.h>

@class NSLayoutConstraint;

@interface UXSubtoolbar : UXToolbar {

	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,readonly) NSLayoutConstraint * heightConstraint;              //@synthesize heightConstraint=_heightConstraint - In the implementation block
+(double)defaultHeight;
-(void)setHeight:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSLayoutConstraint *)heightConstraint;
@end

