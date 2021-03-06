/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <GeoServices/GeoServices-Structs.h>
@class NSMutableArray, NSObject;

@interface _GEOURLManifestListener : NSObject {

	NSMutableArray* _handlers;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_source> _timeoutTimer;

}
+(id)sharedListener;
-(id)init;
-(void)waitForManifestWithCallback:(id)arg1 ;
-(void)_finish:(char)arg1 ;
@end

