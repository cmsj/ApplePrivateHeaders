/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSKit/TSKSelection.h>

@protocol TSWPHyperlinkHostRepProtocol;
@class TSWPHyperlinkField;

@interface TSWPHyperlinkSelection : TSKSelection {

	char _openInEditMode;
	TSWPHyperlinkField* _hyperlinkField;
	id<TSWPHyperlinkHostRepProtocol> _hyperlinkRep;

}

@property (nonatomic,readonly) TSWPHyperlinkField * hyperlinkField;                        //@synthesize hyperlinkField=_hyperlinkField - In the implementation block
@property (nonatomic,readonly) id<TSWPHyperlinkHostRepProtocol> hyperlinkRep;              //@synthesize hyperlinkRep=_hyperlinkRep - In the implementation block
@property (assign,nonatomic) char openInEditMode;                                          //@synthesize openInEditMode=_openInEditMode - In the implementation block
+(Class)archivedSelectionClass;
+(id)selectionWithHyperlinkField:(id)arg1 rep:(id)arg2 ;
-(id)initWithHyperlinkField:(id)arg1 rep:(id)arg2 ;
-(TSWPHyperlinkField *)hyperlinkField;
-(id<TSWPHyperlinkHostRepProtocol>)hyperlinkRep;
-(char)openInEditMode;
-(void)setOpenInEditMode:(char)arg1 ;
@end

