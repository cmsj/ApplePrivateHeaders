/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/Versions/A/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface EFResource : NSObject <NSLocking> {

	os_unfair_lock_s _unfair_lock;
	Aq _lockCount;

}
-(id)init;
-(void)lock;
-(void)unlock;
-(void)holdResource;
-(char)returnResource;
@end

