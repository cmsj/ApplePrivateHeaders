/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MPStoreLyricsSnippetURLComponents : NSObject {

	double _startTime;
	double _endTime;
	long long _songAdamID;
	NSString* _language;
	NSString* _countryCode;
	NSString* _signature;

}

@property (nonatomic,readonly) double startTime;                    //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double endTime;                      //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) long long songAdamID;                //@synthesize songAdamID=_songAdamID - In the implementation block
@property (nonatomic,readonly) NSString * language;                 //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) NSString * signature;                //@synthesize signature=_signature - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(NSString *)countryCode;
-(double)startTime;
-(NSString *)language;
-(NSString *)signature;
-(double)endTime;
-(id)initWithSong:(id)arg1 language:(id)arg2 startTime:(double)arg3 endTime:(double)arg4 ;
-(void)URLWithAdditionalParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)signatureWithCountryCode:(id)arg1 adamID:(id)arg2 startTime:(id)arg3 endTime:(id)arg4 language:(id)arg5 ;
-(long long)songAdamID;
@end

