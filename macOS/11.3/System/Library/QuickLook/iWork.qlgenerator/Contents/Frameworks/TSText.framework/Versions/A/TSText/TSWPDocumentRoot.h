/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSKit/TSKDocumentRoot.h>
#import <TSText/TSWPObjectIndex.h>

@protocol TSWPTOCController;
@class NSUUID, EQKitEnvironment, TSULocale;

@interface TSWPDocumentRoot : TSKDocumentRoot <TSWPObjectIndex> {

	NSUUID* _uuid;
	char _didRemoveMissingAttachments;
	id<TSWPTOCController> _tocController;

}

@property (nonatomic,readonly) double stickyCommentScaleMultiplier; 
@property (getter=isChangeTrackingEnabled,nonatomic,readonly) char changeTrackingEnabled; 
@property (nonatomic,readonly) char supportHeaderFooterParagraphAlignmentInInspectors; 
@property (nonatomic,readonly) EQKitEnvironment * equationEnvironment; 
@property (assign,nonatomic) char didRemoveMissingAttachments;                                         //@synthesize didRemoveMissingAttachments=_didRemoveMissingAttachments - In the implementation block
@property (nonatomic,readonly) TSULocale * typesettingLocale; 
@property (nonatomic,readonly) id<TSWPTOCController> tocController;                                    //@synthesize tocController=_tocController - In the implementation block
@property (assign,nonatomic) char laysOutBodyVertically; 
-(id)documentId;
-(void)willClose;
-(double)bodyWidth;
-(void)documentDidLoad;
-(char)shouldHyphenate;
-(const CFLocaleRef)hyphenationLocale;
-(id)changeSessionManagerForModel:(id)arg1 ;
-(char)useLigatures;
-(id)documentFonts;
-(id)changeVisibility;
-(id)unavailableDocumentFonts;
-(EQKitEnvironment *)equationEnvironment;
-(double)stickyCommentScaleMultiplier;
-(int)naturalAlignmentAtCharIndex:(unsigned long long)arg1 inTextStorage:(id)arg2 ;
-(int)verticalAlignmentForTextStorage:(id)arg1 ;
-(char)laysOutBodyVertically;
-(char)isSectionModel:(id)arg1 ;
-(id)flowInfoContainer;
-(char)containsVerticalText;
-(char)isMasterInfo:(id)arg1 ;
-(char)cellCommentsAllowedOnInfo:(id)arg1 ;
-(char)textIsVerticalInStorage:(id)arg1 atCharIndex:(unsigned long long)arg2 ;
-(void)setLaysOutBodyVertically:(char)arg1 ;
-(char)isChangeTrackingEnabled;
-(char)supportHeaderFooterParagraphAlignmentInInspectors;
-(char)isDrawableOnPageMaster:(id)arg1 ;
-(id<TSWPTOCController>)tocController;
-(char)validatedLoadFromUnarchiver:(id)arg1 ;
-(void)fontUpdatedForStyleClient:(id)arg1 ;
-(TSULocale *)typesettingLocale;
-(void)setDidRemoveMissingAttachments:(char)arg1 ;
-(char)has_30356142_build;
-(id)p_fontsInStylesheetUsingBlock:(/*^block*/id)arg1 ;
-(id)documentTSWPFontObjects;
-(int)fullyJustifiedAlignmentAtCharIndex:(unsigned long long)arg1 inTextStorage:(id)arg2 ;
-(char)didRemoveMissingAttachments;
@end
