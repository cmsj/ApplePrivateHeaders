/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/Versions/A/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface _EARLanguageDetectorResult : NSObject {

	char _isConfident;
	NSDictionary* _confidences;

}

@property (nonatomic,copy) NSDictionary * confidences;              //@synthesize confidences=_confidences - In the implementation block
@property (assign,nonatomic) char isConfident;                      //@synthesize isConfident=_isConfident - In the implementation block
-(NSDictionary *)confidences;
-(void)setConfidences:(NSDictionary *)arg1 ;
-(char)isConfident;
-(void)setIsConfident:(char)arg1 ;
@end
