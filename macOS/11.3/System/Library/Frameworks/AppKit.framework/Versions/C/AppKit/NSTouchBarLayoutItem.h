/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/_NSTouchBarItemLayoutWrapper.h>

@class NSString;

@interface NSTouchBarLayoutItem : NSObject <_NSTouchBarItemLayoutWrapper> {

	CGSize _minSize;
	CGSize _maxSize;
	char _isSpace;
	float _visibilityPriority;

}

@property (readonly) CGSize minSize; 
@property (readonly) CGSize maxSize; 
@property (readonly) char isSpace; 
@property (readonly) CGSize preferredSize; 
@property (readonly) CGSize contentClippingSize; 
@property (readonly) CGSize compressedMinSize; 
@property (readonly) long long priorityIndex; 
@property (readonly) unsigned long long itemPosition; 
@property (readonly) double preferredZOrder; 
@property (readonly) double preferredTrailingPosition; 
@property (readonly) char participatesInOverflow; 
@property (readonly) char isTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(float)visibilityPriority;
-(CGSize)minSize;
-(CGSize)maxSize;
-(char)isSpace;
-(id)initWithTouchBarItem:(id)arg1 ;
@end

