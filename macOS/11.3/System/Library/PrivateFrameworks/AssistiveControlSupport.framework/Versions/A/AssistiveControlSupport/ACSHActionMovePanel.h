/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistiveControlSupport.framework/Versions/A/AssistiveControlSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistiveControlSupport/ACSHAction.h>

@interface ACSHActionMovePanel : ACSHAction {

	unsigned long long _moveToPosition;

}

@property (assign,nonatomic) unsigned long long moveToPosition;              //@synthesize moveToPosition=_moveToPosition - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)_configureWithPlistDictionary:(id)arg1 ;
-(id)paramDictionaryForSaving;
-(id)paramDescription;
-(void)setMoveToPosition:(unsigned long long)arg1 ;
-(unsigned long long)moveToPosition;
@end

