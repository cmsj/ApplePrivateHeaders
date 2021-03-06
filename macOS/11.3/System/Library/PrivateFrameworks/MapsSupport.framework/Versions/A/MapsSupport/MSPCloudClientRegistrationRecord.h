/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSUUID;

@interface MSPCloudClientRegistrationRecord : NSObject {

	char _isChanged;
	NSDate* _lastRegistrationDate;
	NSUUID* _clientIdentifier;
	unsigned long long _desiredEpoch;
	unsigned long long _earliestCompatibleEpoch;

}

@property (nonatomic,retain) NSUUID * clientIdentifier;                               //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long desiredEpoch;                         //@synthesize desiredEpoch=_desiredEpoch - In the implementation block
@property (assign,nonatomic) unsigned long long earliestCompatibleEpoch;              //@synthesize earliestCompatibleEpoch=_earliestCompatibleEpoch - In the implementation block
@property (nonatomic,readonly) char isChanged;                                        //@synthesize isChanged=_isChanged - In the implementation block
@property (nonatomic,retain) NSDate * lastRegistrationDate;                           //@synthesize lastRegistrationDate=_lastRegistrationDate - In the implementation block
-(id)initWithRecord:(id)arg1 ;
-(NSUUID *)clientIdentifier;
-(void)setClientIdentifier:(NSUUID *)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 ;
-(id)recordRepresentation;
-(unsigned long long)earliestCompatibleEpoch;
-(void)setEarliestCompatibleEpoch:(unsigned long long)arg1 ;
-(void)setDesiredEpoch:(unsigned long long)arg1 ;
-(void)setLastRegistrationDate:(NSDate *)arg1 ;
-(NSDate *)lastRegistrationDate;
-(unsigned long long)desiredEpoch;
-(char)isChanged;
@end

