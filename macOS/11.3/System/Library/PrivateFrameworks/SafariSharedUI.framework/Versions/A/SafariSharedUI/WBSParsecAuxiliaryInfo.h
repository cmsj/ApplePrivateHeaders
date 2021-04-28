/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecModel.h>

@class NSString;

@interface WBSParsecAuxiliaryInfo : WBSParsecModel {

	NSString* _topText;
	NSString* _middleText;
	NSString* _bottomText;
	NSString* _bottomTextColor;

}

@property (nonatomic,copy,readonly) NSString * topText;                      //@synthesize topText=_topText - In the implementation block
@property (nonatomic,copy,readonly) NSString * middleText;                   //@synthesize middleText=_middleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * bottomText;                   //@synthesize bottomText=_bottomText - In the implementation block
@property (nonatomic,copy,readonly) NSString * bottomTextColor;              //@synthesize bottomTextColor=_bottomTextColor - In the implementation block
+(id)schema;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)topText;
-(NSString *)middleText;
-(NSString *)bottomText;
-(id)initWithSFSearchResult:(id)arg1 ;
-(NSString *)bottomTextColor;
@end
