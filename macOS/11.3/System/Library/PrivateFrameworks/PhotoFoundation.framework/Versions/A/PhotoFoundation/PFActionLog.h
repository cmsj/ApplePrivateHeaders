/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/Versions/A/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFWeakContainer.h>
#import <libobjc.A.dylib/PFActionNotificationsReceiver.h>

@class PFAction, NSMutableArray, NSString;

@interface PFActionLog : PFWeakContainer <PFActionNotificationsReceiver> {

	PFAction* _observedAction;
	NSMutableArray* _log;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)log:(id)arg1 ;
-(id)initWithAction:(id)arg1 ;
-(void)addEvent:(id)arg1 ;
-(void)weakReferenceBecameNil;
-(void)action:(id)arg1 statusChangedFrom:(int)arg2 to:(int)arg3 ;
-(void)actionReportedProgress:(id)arg1 ;
@end
