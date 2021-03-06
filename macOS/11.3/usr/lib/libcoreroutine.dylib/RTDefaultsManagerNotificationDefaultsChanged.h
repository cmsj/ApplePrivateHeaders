/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSArray;

@interface RTDefaultsManagerNotificationDefaultsChanged : RTNotification {

	NSArray* _updatedKeys;

}

@property (nonatomic,readonly) NSArray * updatedKeys;              //@synthesize updatedKeys=_updatedKeys - In the implementation block
-(id)init;
-(id)initWithUpdatedKeys:(id)arg1 ;
-(NSArray *)updatedKeys;
@end

