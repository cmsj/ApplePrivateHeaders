/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSNumber, NSDictionary, NSMutableDictionary;

@interface ICRadioPlaybackHistoryItem : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSDate* _expirationDate;
	NSNumber* _pauseTime;
	NSDictionary* _serverTrackInfo;
	NSDate* _skipDate;
	long long _storeIdentifier;

}

@property (nonatomic,copy,readonly) NSDate * expirationDate;                                       //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isExpired,nonatomic,readonly) char expired; 
@property (nonatomic,copy,readonly) NSNumber * pauseTime;                                          //@synthesize pauseTime=_pauseTime - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * serverTrackInfo; 
@property (nonatomic,copy,readonly) NSDate * skipDate;                                             //@synthesize skipDate=_skipDate - In the implementation block
@property (nonatomic,readonly) long long storeIdentifier;                                          //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * propertyListRepresentation; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(NSMutableDictionary *)propertyListRepresentation;
-(char)isExpired;
-(long long)storeIdentifier;
-(id)initWithTrack:(id)arg1 ;
-(NSDictionary *)serverTrackInfo;
-(NSNumber *)pauseTime;
-(NSDate *)skipDate;
@end

