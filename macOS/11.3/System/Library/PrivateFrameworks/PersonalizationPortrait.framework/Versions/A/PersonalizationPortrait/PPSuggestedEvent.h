/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/Versions/A/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PPScoredEvent.h>

@class NSString;

@interface PPSuggestedEvent : PPScoredEvent {

	unsigned char _category;
	NSString* _eventIdentifier;

}

@property (nonatomic,readonly) unsigned char category;                  //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSString * eventIdentifier;              //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)category;
-(NSString *)eventIdentifier;
-(id)initWithPPEvent:(id)arg1 ;
-(id)initWithPPEvent:(id)arg1 score:(double)arg2 ;
@end

