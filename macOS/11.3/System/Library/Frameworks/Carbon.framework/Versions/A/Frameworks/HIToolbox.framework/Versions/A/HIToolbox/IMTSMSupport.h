/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/HIToolbox.framework/Versions/A/HIToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMTSMSupport
@optional
-(unsigned long long)keyboardType;
-(unsigned long long)incrementalSearchClientGeometry;
-(char)wouldHandleEvent:(id)arg1;
-(char)isIncrementalSearchInputContext;
-(char)isBottomLineInputContext;
-(void)inputSessionDoneSleep;
-(void)hidePalettesAtInsertionPoint;
-(void)terminatePalette:(id)arg1;
-(char)isPaletteTerminated:(id)arg1;
-(void)commitPendingInlineSession;
-(id)markedRangeValue;
-(char)isTextPlaceholderAwareInputContext;
-(char)isDictationHiliteCapableInputContext;
-(char)supportsChromaticMarkedText;
-(char)supportsTextAttachmentInsertion;

@required
-(unsigned)deadKeyState;
-(void)insertText:(id)arg1 replacementRange:(NSRange)arg2 validFlags:(unsigned long long)arg3;
-(void)setMarkedText:(id)arg1 selectionRange:(NSRange)arg2 replacementRange:(NSRange)arg3 validFlags:(unsigned long long)arg4;
-(id)attributesForCharacterIndex:(unsigned long long)arg1;
-(id)currentInputSourceBundleID;

@end
