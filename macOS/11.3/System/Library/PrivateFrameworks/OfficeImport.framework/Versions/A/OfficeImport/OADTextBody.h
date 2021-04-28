/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADTextBodyProperties, NSMutableArray, OADTextListStyle;

@interface OADTextBody : NSObject {

	OADTextBodyProperties* mProperties;
	NSMutableArray* mParagraphs;
	OADTextListStyle* mTextListStyle;

}
-(id)description;
-(id)init;
-(char)isEmpty;
-(id)properties;
-(void)setProperties:(id)arg1 ;
-(id)plainText;
-(id)paragraphAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)paragraphCount;
-(id)addParagraph;
-(id)overrideTextListStyle;
-(id)textListStyle;
-(void)removeUnnecessaryOverrides;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ownTextListStyle:(char)arg2 ;
-(void)flattenProperties;
-(char)propagateActualTextStyleToTextListStyle;
-(unsigned long long)nonEmptyParagraphCount;
-(void)removeAllParagraphs;
-(unsigned long long)newLineCount;
-(id)firstParagraphEffects;
-(void)applyTextListStyle:(id)arg1 ;
-(void)removeTrailingNewlines;
-(void)removeLeadingNewlines;
-(void)removeLastParagraphIfEmpty;
-(char)isSimilarToTextBody:(id)arg1 ;
-(void)addParagraphsFromTextBody:(id)arg1 ;
-(id)findFirstTextRunOfClass:(Class)arg1 ;
@end
