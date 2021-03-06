/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKSync3PolicyCommonMethods.h>

@class NSDictionary, NSString, NSArray;

@interface _DKSync3FeaturePolicy : NSObject <_DKSync3PolicyCommonMethods> {

	char _isSyncDisabled;
	char _onlyMultiDevice;
	char _onlySingleDevice;
	char _requiresCharging;
	char _pushTriggersSync;
	char _additionsCountTowardTriggeredSyncBucket;
	char _deletionsCountTowardTriggeredSyncBucket;
	char _additionTriggersImmediateSync;
	char _deletionTriggersImmediateSync;
	NSDictionary* _properties;
	NSString* _name;
	NSString* _feature;
	NSArray* _streamNames;
	NSArray* _sources;
	NSArray* _destinations;
	NSString* _transport;
	unsigned long long _periodicSyncCadenceInMinutes;
	unsigned long long _oldestEventToSyncInDays;
	NSArray* _requiresCompanions;

}

@property (nonatomic,retain) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
-(id)description;
-(id)init;
-(NSDictionary *)properties;
-(void)setProperties:(NSDictionary *)arg1 ;
@end

