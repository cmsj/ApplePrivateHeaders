/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateMacController.framework/Versions/A/SoftwareUpdateMacController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface SUMacControllerAccessControlContext : NSObject <NSSecureCoding> {

	char _clientDisconnectOccurred;
	NSString* _clientID;
	long long _priority;
	NSDictionary* _additionalContext;
	NSString* _event;
	long long _eventType;

}

@property (nonatomic,retain,readonly) NSString * clientID;                  //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) long long priority;                          //@synthesize priority=_priority - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalContext;              //@synthesize additionalContext=_additionalContext - In the implementation block
@property (nonatomic,retain) NSString * event;                              //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) long long eventType;                           //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) char clientDisconnectOccurred;                 //@synthesize clientDisconnectOccurred=_clientDisconnectOccurred - In the implementation block
+(id)nameForPriority:(long long)arg1 ;
+(id)nameForEventType:(long long)arg1 ;
+(char)_shouldCurrentContext:(id)arg1 releaseControlTo:(id)arg2 ;
+(id)_nameForAccessResponse:(long long)arg1 ;
+(long long)requestControlFromCurrentContext:(id)arg1 requestingContext:(id)arg2 error:(id*)arg3 ;
+(char)supportsSecureCoding;
-(NSDictionary *)additionalContext;
-(char)clientDisconnectOccurred;
-(id)initForClientID:(id)arg1 priority:(long long)arg2 ;
-(void)setAdditionalContext:(NSDictionary *)arg1 ;
-(void)setClientDisconnectOccurred:(char)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)event;
-(long long)priority;
-(void)setEvent:(NSString *)arg1 ;
-(long long)eventType;
-(NSString *)clientID;
-(void)setEventType:(long long)arg1 ;
@end

