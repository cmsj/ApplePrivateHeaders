/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/Versions/A/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSDate, NSUUID, NSDictionary;

@interface STAskForTimeRequest : NSObject <NSSecureCoding> {

	char _oneMoreMinute;
	long long _usageType;
	NSString* _requestedResourceIdentifier;
	NSString* _resourceDisplayName;
	NSNumber* _timeRequested;
	NSDate* _timeStamp;
	NSUUID* _requestIdentifier;
	NSNumber* _requestingUserDSID;
	NSString* _requestingUserDisplayName;

}

@property (assign,nonatomic) char oneMoreMinute;                                         //@synthesize oneMoreMinute=_oneMoreMinute - In the implementation block
@property (nonatomic,copy) NSString * resourceDisplayName;                               //@synthesize resourceDisplayName=_resourceDisplayName - In the implementation block
@property (nonatomic,retain) NSNumber * timeRequested;                                   //@synthesize timeRequested=_timeRequested - In the implementation block
@property (nonatomic,retain) NSDate * timeStamp;                                         //@synthesize timeStamp=_timeStamp - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * payload; 
@property (nonatomic,readonly) long long usageType;                                      //@synthesize usageType=_usageType - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestedResourceIdentifier;              //@synthesize requestedResourceIdentifier=_requestedResourceIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * requestIdentifier;                                 //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * requestingUserDSID;                              //@synthesize requestingUserDSID=_requestingUserDSID - In the implementation block
@property (nonatomic,copy) NSString * requestingUserDisplayName;                         //@synthesize requestingUserDisplayName=_requestingUserDisplayName - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPayload:(id)arg1 ;
-(NSDate *)timeStamp;
-(void)setTimeStamp:(NSDate *)arg1 ;
-(long long)usageType;
-(NSDictionary *)payload;
-(NSUUID *)requestIdentifier;
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
-(id)initWithUsageType:(long long)arg1 requestedResourceIdentifier:(id)arg2 ;
-(NSString *)requestedResourceIdentifier;
-(NSString *)resourceDisplayName;
-(NSNumber *)timeRequested;
-(char)oneMoreMinute;
-(NSNumber *)requestingUserDSID;
-(NSString *)requestingUserDisplayName;
-(void)setOneMoreMinute:(char)arg1 ;
-(void)setResourceDisplayName:(NSString *)arg1 ;
-(void)setTimeRequested:(NSNumber *)arg1 ;
-(void)setRequestingUserDSID:(NSNumber *)arg1 ;
-(void)setRequestingUserDisplayName:(NSString *)arg1 ;
@end
