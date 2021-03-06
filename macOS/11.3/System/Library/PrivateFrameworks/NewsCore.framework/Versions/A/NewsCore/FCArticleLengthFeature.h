/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCPersonalizationFeature.h>

@class NSString;

@interface FCArticleLengthFeature : FCPersonalizationFeature {

	NSString* _lengthID;

}

@property (nonatomic,retain) NSString * lengthID;              //@synthesize lengthID=_lengthID - In the implementation block
+(id)shortLengthFeature;
+(id)mediumLengthFeature;
+(id)longLengthFeature;
-(id)init;
-(double)featureWeightWithConfigurableValues:(id)arg1 publisherID:(id)arg2 ;
-(id)initWithPersonalizationIdentifier:(id)arg1 ;
-(id)initWithLengthIdentifier:(id)arg1 ;
-(void)setLengthID:(NSString *)arg1 ;
-(NSString *)lengthID;
@end

