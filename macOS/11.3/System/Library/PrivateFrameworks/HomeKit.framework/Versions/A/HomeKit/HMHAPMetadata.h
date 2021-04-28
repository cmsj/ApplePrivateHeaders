/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMProtoBufMerge.h>

@class HMFUnfairLock, NSNumber, NSDictionary, NSString;

@interface HMHAPMetadata : NSObject <HMProtoBufMerge> {

	HMFUnfairLock* _lock;
	NSNumber* _version;
	NSDictionary* _hapChrMap;
	NSDictionary* _hapSvcMap;
	NSDictionary* _hapCategoryMap;

}

@property (nonatomic,retain) NSDictionary * hapChrMap;                   //@synthesize hapChrMap=_hapChrMap - In the implementation block
@property (nonatomic,retain) NSDictionary * hapSvcMap;                   //@synthesize hapSvcMap=_hapSvcMap - In the implementation block
@property (nonatomic,retain) NSDictionary * hapCategoryMap;              //@synthesize hapCategoryMap=_hapCategoryMap - In the implementation block
@property (retain) NSNumber * version;                                   //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getSharedInstance;
-(id)init;
-(NSNumber *)version;
-(void)setVersion:(NSNumber *)arg1 ;
-(char)shouldNotCacheCharacteristicOfType:(id)arg1 ;
-(id)characteristicTypeDescription:(id)arg1 ;
-(id)categoryForNumber:(id)arg1 ;
-(char)applyProtoBufData:(id)arg1 callbackOperations:(id)arg2 ;
-(NSDictionary *)hapSvcMap;
-(NSDictionary *)hapChrMap;
-(NSDictionary *)hapCategoryMap;
-(id)categoryForCategoryType:(id)arg1 ;
-(void)setHapChrMap:(NSDictionary *)arg1 ;
-(void)setHapSvcMap:(NSDictionary *)arg1 ;
-(void)setHapCategoryMap:(NSDictionary *)arg1 ;
-(id)serviceTypeDescription:(id)arg1 ;
@end
