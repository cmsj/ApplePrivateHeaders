/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/Versions/A/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMEventSubscriptionNowCommand_Status : CEMPayloadBase {

	NSArray* _statusInactiveEvents;
	NSArray* _statusUnknownEvents;

}

@property (nonatomic,copy) NSArray * statusInactiveEvents;              //@synthesize statusInactiveEvents=_statusInactiveEvents - In the implementation block
@property (nonatomic,copy) NSArray * statusUnknownEvents;               //@synthesize statusUnknownEvents=_statusUnknownEvents - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildRequiredOnly;
+(id)buildWithInactiveEvents:(id)arg1 withUnknownEvents:(id)arg2 ;
-(char)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusInactiveEvents:(NSArray *)arg1 ;
-(void)setStatusUnknownEvents:(NSArray *)arg1 ;
-(NSArray *)statusInactiveEvents;
-(NSArray *)statusUnknownEvents;
@end

