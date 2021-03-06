/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/_SSURLCompletionMatch.h>

@class NSURL, NSString, NSDate;

@interface WBSURLCompletionMatchSnapshot : NSObject <NSSecureCoding, _SSURLCompletionMatch> {

	char _topHit;
	char _synthesizedTopHit;
	char _topHitDueToTriggerMatch;
	NSURL* _url;
	NSString* _title;
	NSString* _userVisibleURLString;
	long long _matchLocation;
	long long _visitCount;
	NSDate* _lastVisitTime;

}

@property (nonatomic,copy,readonly) NSURL * url;                                                           //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * userVisibleURLString;                                       //@synthesize userVisibleURLString=_userVisibleURLString - In the implementation block
@property (nonatomic,readonly) long long matchLocation;                                                    //@synthesize matchLocation=_matchLocation - In the implementation block
@property (getter=isTopHit,nonatomic,readonly) char topHit;                                                //@synthesize topHit=_topHit - In the implementation block
@property (getter=isSynthesizedTopHit,nonatomic,readonly) char synthesizedTopHit;                          //@synthesize synthesizedTopHit=_synthesizedTopHit - In the implementation block
@property (getter=isTopHitDueToTriggerMatch,nonatomic,readonly) char topHitDueToTriggerMatch;              //@synthesize topHitDueToTriggerMatch=_topHitDueToTriggerMatch - In the implementation block
@property (nonatomic,readonly) long long visitCount;                                                       //@synthesize visitCount=_visitCount - In the implementation block
@property (nonatomic,readonly) NSDate * lastVisitTime;                                                     //@synthesize lastVisitTime=_lastVisitTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(NSString *)title;
-(long long)visitCount;
-(char)isTopHit;
-(NSString *)userVisibleURLString;
-(long long)matchLocation;
-(id)initWithURL:(id)arg1 title:(id)arg2 matchLocation:(long long)arg3 isTopHit:(char)arg4 isSynthesizedTopHit:(char)arg5 isTopHitDueToTriggerMatch:(char)arg6 visitCount:(long long)arg7 lastVisitTime:(id)arg8 ;
-(NSDate *)lastVisitTime;
-(char)isSynthesizedTopHit;
-(char)isTopHitDueToTriggerMatch;
@end

