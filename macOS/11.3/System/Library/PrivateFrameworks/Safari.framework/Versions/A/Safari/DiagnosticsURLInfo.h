/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DiagnosticsURLInfo : NSObject {

	NSString* _url;
	double _visitTime;

}

@property (readonly) NSString * url;                //@synthesize url=_url - In the implementation block
@property (readonly) double visitTime;              //@synthesize visitTime=_visitTime - In the implementation block
-(NSString *)url;
-(double)visitTime;
-(id)initWithURL:(id)arg1 visitTime:(double)arg2 ;
-(id)filteredDictionaryRepresentationExcludingURLs:(id)arg1 ;
@end

