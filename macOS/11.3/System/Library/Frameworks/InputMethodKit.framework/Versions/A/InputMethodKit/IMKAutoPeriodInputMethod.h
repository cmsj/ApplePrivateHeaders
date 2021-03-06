/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputMethodKit/IMKAbstractInputMethod.h>

@class IMKKey, NSString;

@interface IMKAutoPeriodInputMethod : IMKAbstractInputMethod {

	IMKKey* _previousPressedKey;
	char _autoPeriodEnabled;
	NSString* _replacementString;

}

@property (nonatomic,retain) IMKKey * previousPressedKey;                                    //@synthesize previousPressedKey=_previousPressedKey - In the implementation block
@property (assign,getter=isAutoPeriodEnabled,nonatomic) char autoPeriodEnabled;              //@synthesize autoPeriodEnabled=_autoPeriodEnabled - In the implementation block
@property (retain) NSString * replacementString;                                             //@synthesize replacementString=_replacementString - In the implementation block
-(char)isAutoPeriodEnabled;
-(IMKKey *)previousPressedKey;
-(void)setAutoPeriodEnabled:(char)arg1 ;
-(void)setPreviousPressedKey:(IMKKey *)arg1 ;
-(NSString *)replacementString;
-(void)setReplacementString:(NSString *)arg1 ;
-(id)initWithKeyboardToAttach:(id)arg1 inputMethodToChain:(id)arg2 ;
-(char)handleKeyPress:(id)arg1 whileInKeyboardState:(id)arg2 ;
@end

