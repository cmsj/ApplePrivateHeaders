/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistiveControlSupport.framework/Versions/A/AssistiveControlSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistiveControlSupport/ACSHAction.h>

@interface ACSHActionScroll : ACSHAction {

	long long _scrollSpeed;
	unsigned long long _scrollDirection;

}

@property (assign,nonatomic) long long scrollSpeed;                           //@synthesize scrollSpeed=_scrollSpeed - In the implementation block
@property (assign,nonatomic) unsigned long long scrollDirection;              //@synthesize scrollDirection=_scrollDirection - In the implementation block
+(id)actionWithDirection:(unsigned long long)arg1 speed:(long long)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(unsigned long long)scrollDirection;
-(void)setScrollDirection:(unsigned long long)arg1 ;
-(long long)scrollSpeed;
-(void)setScrollSpeed:(long long)arg1 ;
-(void)performWithEventSourceData:(id)arg1 ;
-(void)_configureWithPlistDictionary:(id)arg1 ;
-(id)paramDictionaryForSaving;
-(id)paramDescription;
@end

