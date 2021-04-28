/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSTextInputClient_Async
@optional
-(void)drawsVerticallyForCharacterAtIndex:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fractionOfDistanceThroughGlyphForPoint:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2;
-(void)attributedStringWithCompletionHandler:(/*^block*/id)arg1;
-(void)baselineDeltaForCharacterAtIndex:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)typingAttributesWithCompletionHandler:(/*^block*/id)arg1;

@required
-(void)selectedRangeWithCompletionHandler:(/*^block*/id)arg1;
-(void)markedRangeWithCompletionHandler:(/*^block*/id)arg1;
-(void)hasMarkedTextWithCompletionHandler:(/*^block*/id)arg1;
-(void)characterIndexForPoint:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2;
-(void)attributedSubstringForProposedRange:(NSRange)arg1 completionHandler:(/*^block*/id)arg2;
-(void)firstRectForCharacterRange:(NSRange)arg1 completionHandler:(/*^block*/id)arg2;

@end
