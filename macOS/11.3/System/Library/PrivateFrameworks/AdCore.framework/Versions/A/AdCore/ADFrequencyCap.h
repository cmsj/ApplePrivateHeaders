/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/Versions/A/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ADFrequencyCap : NSObject {

	NSString* _identifier;
	NSString* _adMetadata;
	long long _downloadType;
	double _setTime;

}

@property (nonatomic,retain) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * adMetadata;               //@synthesize adMetadata=_adMetadata - In the implementation block
@property (assign,nonatomic) long long downloadType;              //@synthesize downloadType=_downloadType - In the implementation block
@property (assign,nonatomic) double setTime;                      //@synthesize setTime=_setTime - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(long long)downloadType;
-(void)setDownloadType:(long long)arg1 ;
-(void)setAdMetadata:(NSString *)arg1 ;
-(NSString *)adMetadata;
-(id)splitCapData:(id)arg1 ;
-(double)setTime;
-(void)setSetTime:(double)arg1 ;
@end
