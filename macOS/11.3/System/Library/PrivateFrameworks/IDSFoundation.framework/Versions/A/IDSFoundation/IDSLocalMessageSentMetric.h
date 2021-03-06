/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>
#import <libobjc.A.dylib/CUTAWDMetric.h>

@class NSString, NSDictionary;

@interface IDSLocalMessageSentMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric> {

	NSString* _service;
	char _isToDefaultPairedDevice;
	long long _messageSize;
	unsigned long long _linkType;
	long long _priority;

}

@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned awdIdentifier; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) PBCodable*<NSCopying> awdRepresentation; 
@property (nonatomic,readonly) NSString * service;                                   //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) char isToDefaultPairedDevice;                         //@synthesize isToDefaultPairedDevice=_isToDefaultPairedDevice - In the implementation block
@property (nonatomic,readonly) long long messageSize;                                //@synthesize messageSize=_messageSize - In the implementation block
@property (nonatomic,readonly) unsigned long long linkType;                          //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,readonly) long long priority;                                   //@synthesize priority=_priority - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSDictionary *)dictionaryRepresentation;
-(long long)priority;
-(NSString *)service;
-(unsigned long long)linkType;
-(char)isToDefaultPairedDevice;
-(long long)messageSize;
-(PBCodable*<NSCopying>)awdRepresentation;
-(unsigned)awdIdentifier;
-(id)initWithService:(id)arg1 isToDefaultPairedDevice:(char)arg2 messageSize:(long long)arg3 linkType:(unsigned long long)arg4 priority:(long long)arg5 ;
@end

