/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/Versions/A/AdPlatformsCommon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSNumber, NSDictionary;

@interface APTapAction : NSObject <NSSecureCoding> {

	long long _actionType;
	NSURL* _actionURL;
	double _confirmedClickInterval;
	NSNumber* _adamIdentifier;
	long long _templateType;
	NSDictionary* _iTunesMetadata;

}

@property (assign) long long actionType;                       //@synthesize actionType=_actionType - In the implementation block
@property (retain) NSURL * actionURL;                          //@synthesize actionURL=_actionURL - In the implementation block
@property (assign) double confirmedClickInterval;              //@synthesize confirmedClickInterval=_confirmedClickInterval - In the implementation block
@property (retain) NSNumber * adamIdentifier;                  //@synthesize adamIdentifier=_adamIdentifier - In the implementation block
@property (assign) long long templateType;                     //@synthesize templateType=_templateType - In the implementation block
@property (retain) NSDictionary * iTunesMetadata;              //@synthesize iTunesMetadata=_iTunesMetadata - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)iTunesMetadata;
-(void)setActionType:(long long)arg1 ;
-(long long)actionType;
-(NSNumber *)adamIdentifier;
-(void)setAdamIdentifier:(NSNumber *)arg1 ;
-(NSURL *)actionURL;
-(long long)templateType;
-(void)setTemplateType:(long long)arg1 ;
-(void)setActionURL:(NSURL *)arg1 ;
-(void)setITunesMetadata:(NSDictionary *)arg1 ;
-(double)confirmedClickInterval;
-(void)setConfirmedClickInterval:(double)arg1 ;
@end

