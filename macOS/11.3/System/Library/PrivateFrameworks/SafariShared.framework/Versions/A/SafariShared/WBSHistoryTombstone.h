/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSDictionary;

@interface WBSHistoryTombstone : NSObject <NSSecureCoding> {

	NSString* _urlString;
	NSData* _urlHash;
	NSData* _urlSalt;
	double _startTime;
	double _endTime;
	long long _generation;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSString * urlString;                                 //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) NSData * urlHash;                                     //@synthesize urlHash=_urlHash - In the implementation block
@property (nonatomic,readonly) NSData * urlSalt;                                     //@synthesize urlSalt=_urlSalt - In the implementation block
@property (nonatomic,readonly) double startTime;                                     //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double endTime;                                       //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) long long generation;                                 //@synthesize generation=_generation - In the implementation block
@property (getter=isSecure,nonatomic,readonly) char secure; 
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)generation;
-(id)initWithDictionary:(id)arg1 ;
-(double)startTime;
-(NSDictionary *)dictionaryRepresentation;
-(double)endTime;
-(NSString *)urlString;
-(char)isSecure;
-(char)matchesVisitTime:(double)arg1 urlString:(id)arg2 ;
-(NSData *)urlHash;
-(NSData *)urlSalt;
-(id)initWithStreamedTombstone:(const HistoryStreamedTombstone*)arg1 ;
-(id)initWithURLString:(id)arg1 urlHash:(id)arg2 urlSalt:(id)arg3 startTime:(double)arg4 endTime:(double)arg5 generation:(long long)arg6 ;
-(id)initWithSQLiteRow:(id)arg1 crypto:(id)arg2 ;
-(id)secureTombstoneWithSalt:(id)arg1 ;
@end

