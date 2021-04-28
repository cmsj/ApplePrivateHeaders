/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FCHeadlineExperimentalTitleMetadata : NSObject {

	char _isTitleExperimental;
	int _treatmentState;
	long long _arrayIndexUsedforTitle;
	NSString* _chosenTitle;

}

@property (nonatomic,readonly) char isTitleExperimental;                      //@synthesize isTitleExperimental=_isTitleExperimental - In the implementation block
@property (nonatomic,readonly) long long arrayIndexUsedforTitle;              //@synthesize arrayIndexUsedforTitle=_arrayIndexUsedforTitle - In the implementation block
@property (nonatomic,readonly) int treatmentState;                            //@synthesize treatmentState=_treatmentState - In the implementation block
@property (nonatomic,copy,readonly) NSString * chosenTitle;                   //@synthesize chosenTitle=_chosenTitle - In the implementation block
-(NSString *)chosenTitle;
-(id)initWithChosenTitle:(id)arg1 isTitleExperimental:(char)arg2 arrayIndexUsedforTitle:(long long)arg3 treatmentState:(int)arg4 ;
-(char)isTitleExperimental;
-(long long)arrayIndexUsedforTitle;
-(int)treatmentState;
@end
