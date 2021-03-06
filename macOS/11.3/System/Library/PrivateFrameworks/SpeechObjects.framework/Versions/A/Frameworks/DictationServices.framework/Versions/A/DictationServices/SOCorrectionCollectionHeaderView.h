/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeechObjects.framework/Versions/A/Frameworks/DictationServices.framework/Versions/A/DictationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DictationServices/DictationServices-Structs.h>
#import <AppKit/NSView.h>

@class NSTextField, NSView;

@interface SOCorrectionCollectionHeaderView : NSView {

	NSTextField* _headerText;
	NSView* _keyLine;

}

@property (retain) NSTextField * headerText;              //@synthesize headerText=_headerText - In the implementation block
@property (retain) NSView * keyLine;                      //@synthesize keyLine=_keyLine - In the implementation block
+(id)identifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)declaredLayoutConstraints;
-(NSTextField *)headerText;
-(void)setHeaderText:(NSTextField *)arg1 ;
-(NSView *)keyLine;
-(void)setKeyLine:(NSView *)arg1 ;
@end

