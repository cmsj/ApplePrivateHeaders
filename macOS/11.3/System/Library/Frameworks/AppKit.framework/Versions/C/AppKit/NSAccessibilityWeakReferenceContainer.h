/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSAccessibilityWeakReferenceContainer : NSObject <NSCopying> {

	unsigned long long _hash;
	id _weakReference;
	id _danglingReference;
	char _hasWeakReference;

}

@property (__weak,readonly) id object; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)initWithObject:(id)arg1 ;
-(id)object;
@end
