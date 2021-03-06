/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFCardSectionFeedback.h>
#import <libobjc.A.dylib/CRCardSectionEngagementFeedback.h>

@class SFPunchout, NSString;

@interface SFCardSectionEngagementFeedback : SFCardSectionFeedback <CRCardSectionEngagementFeedback> {

	SFPunchout* _destination;
	unsigned long long _triggerEvent;
	unsigned long long _actionCardType;
	unsigned long long _actionTarget;

}

@property (nonatomic,readonly) SFCardSectionEngagementFeedback * backingFeedback; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SFPunchout * destination;                                         //@synthesize destination=_destination - In the implementation block
@property (assign,nonatomic) unsigned long long triggerEvent;                                  //@synthesize triggerEvent=_triggerEvent - In the implementation block
@property (assign,nonatomic) unsigned long long actionCardType;                                //@synthesize actionCardType=_actionCardType - In the implementation block
@property (assign,nonatomic) unsigned long long actionTarget;                                  //@synthesize actionTarget=_actionTarget - In the implementation block
+(char)supportsSecureCoding;
-(SFCardSectionEngagementFeedback *)backingFeedback;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SFPunchout *)destination;
-(void)setDestination:(SFPunchout *)arg1 ;
-(void)setTriggerEvent:(unsigned long long)arg1 ;
-(unsigned long long)triggerEvent;
-(unsigned long long)actionTarget;
-(void)setActionTarget:(unsigned long long)arg1 ;
-(void)setActionCardType:(unsigned long long)arg1 ;
-(unsigned long long)actionCardType;
-(id)initWithCardSection:(id)arg1 destination:(id)arg2 triggerEvent:(unsigned long long)arg3 actionCardType:(unsigned long long)arg4 ;
@end

