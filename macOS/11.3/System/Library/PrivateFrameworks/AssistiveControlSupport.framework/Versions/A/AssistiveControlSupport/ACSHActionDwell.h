/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistiveControlSupport.framework/Versions/A/AssistiveControlSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistiveControlSupport/ACSHAction.h>

@interface ACSHActionDwell : ACSHAction {

	char _isSingleAction;
	long long _dwellActionType;

}

@property (assign,nonatomic) long long dwellActionType;              //@synthesize dwellActionType=_dwellActionType - In the implementation block
@property (assign,nonatomic) char isSingleAction;                    //@synthesize isSingleAction=_isSingleAction - In the implementation block
-(unsigned long long)hash;
-(id)init;
-(void)performWithEventSourceData:(id)arg1 ;
-(void)_configureWithPlistDictionary:(id)arg1 ;
-(id)paramDictionaryForSaving;
-(id)paramDescription;
-(void)setDwellActionType:(long long)arg1 ;
-(void)setIsSingleAction:(char)arg1 ;
-(long long)dwellActionType;
-(char)isSingleAction;
@end

