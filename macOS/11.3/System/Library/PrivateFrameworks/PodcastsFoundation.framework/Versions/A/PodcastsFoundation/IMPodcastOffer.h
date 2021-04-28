/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/Versions/A/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMPodcastOffer : NSObject {

	NSString* _kind;
	NSString* _contentType;

}

@property (nonatomic,retain) NSString * kind;                     //@synthesize kind=_kind - In the implementation block
@property (nonatomic,retain) NSString * contentType;              //@synthesize contentType=_contentType - In the implementation block
-(char)isEqual:(id)arg1 ;
-(NSString *)kind;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(void)setKind:(NSString *)arg1 ;
-(unsigned long long)offerTypeAsFlagBit;
@end
