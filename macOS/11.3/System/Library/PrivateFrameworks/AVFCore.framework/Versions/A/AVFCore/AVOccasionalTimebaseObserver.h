/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVTimebaseObserver.h>

@class NSArray;

@interface AVOccasionalTimebaseObserver : AVTimebaseObserver {

	NSArray* _times;
	/*^block*/id _block;

}
-(void)dealloc;
-(void)_fireBlock;
-(id)initWithTimebase:(OpaqueCMTimebaseRef)arg1 times:(id)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)_effectiveRateChanged;
-(void)_resetNextFireTime;
-(void)_handleTimeDiscontinuity;
-(SCD_Struct_CM3)_nextFiringTimeAfterTime:(SCD_Struct_CM3)arg1 ;
-(SCD_Struct_CM3)_previousFiringTimeBeforeTime:(SCD_Struct_CM3)arg1 ;
@end
