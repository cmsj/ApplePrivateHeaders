/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/PagesQuicklook.framework/Versions/A/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PagesQuicklook/PagesQuicklook-Structs.h>
#import <TSApplication/TSATheme.h>

@class TSWPParagraphStyle;

@interface TPTheme : TSATheme

@property (nonatomic,readonly) TSWPParagraphStyle * bodyStyle; 
@property (nonatomic,readonly) TSWPParagraphStyle * headerAndFooterStyle; 
@property (nonatomic,readonly) TSWPParagraphStyle * footnoteStyle; 
@property (nonatomic,readonly) char isBasicTheme; 
@property (nonatomic,readonly) char isBookPortraitTemplateTheme; 
+(void)initialize;
+(id)themeWithContext:(id)arg1 alternate:(unsigned long long)arg2 withStylesheet:(id)arg3 ;
-(TSWPParagraphStyle *)bodyStyle;
-(TSWPParagraphStyle *)headerAndFooterStyle;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)localizedBodyStyleName;
-(id)_paragraphStylePresetWithName:(id)arg1 orContentTag:(id)arg2 ;
-(void)p_saveToArchive:(ThemeArchive*)arg1 archiver:(id)arg2 ;
-(TSWPParagraphStyle *)footnoteStyle;
-(char)isBasicTheme;
-(char)isBookPortraitTemplateTheme;
@end

