/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IconServices/IconServices-Structs.h>
@class NSNumber;

@interface ISPrefsCache : NSObject {

	NSNumber* _focusRingTint;
	NSNumber* _shouldDrawObviousPlaceholders;
	os_unfair_lock_s _lock;

}

@property (readonly) int focusRingTint; 
@property (readonly) char shouldDrawObviousPlaceholders; 
+(id)sharedInstance;
-(void)_handleDefaultChangeNotification:(id)arg1 ;
-(int)focusRingTint;
-(char)shouldDrawObviousPlaceholders;
-(void)dealloc;
-(id)init;
-(id)_objectForKey:(id)arg1 ;
@end

