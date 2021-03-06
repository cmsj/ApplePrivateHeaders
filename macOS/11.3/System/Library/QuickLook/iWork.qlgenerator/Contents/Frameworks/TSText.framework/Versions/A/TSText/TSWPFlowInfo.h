/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSPersistence/TSPObject.h>
#import <TSText/TSWPFlowInfo.h>
@class TSWPStorage, NSArray, TSUColor;


@protocol TSWPFlowInfo <NSObject,TSKDocumentObject,TSKModel,TSDFlowInfo,TSWPTextBoxNesting>
@property (nonatomic,readonly) TSWPStorage * textStorage; 
@property (nonatomic,retain) NSArray * textboxes; 
@property (assign,nonatomic) unsigned long long userInterfaceIdentifier; 
@property (nonatomic,readonly) TSUColor * userInterfaceFillColor; 
@property (nonatomic,readonly) TSUColor * userInterfaceStrokeColor; 
@property (nonatomic,readonly) char isLocked; 
@property (nonatomic,readonly) unsigned long long textOrientation; 
@property (nonatomic,readonly) char containsRotatedOrFlippedTextBox; 
@required
+(id)fillColorForUserInterfaceIdentifier:(unsigned long long)arg1;
+(id)strokeColorForUserInterfaceIdentifier:(unsigned long long)arg1;
-(TSWPStorage *)textStorage;
-(char)isLocked;
-(unsigned long long)userInterfaceIdentifier;
-(unsigned long long)indexOfTextBox:(id)arg1;
-(id)displayNameOfMaxLength:(unsigned long long)arg1 usesEllipsis:(char)arg2;
-(NSArray *)textboxes;
-(void)setTextboxes:(id)arg1;
-(void)setUserInterfaceIdentifier:(unsigned long long)arg1;
-(TSUColor *)userInterfaceFillColor;
-(TSUColor *)userInterfaceStrokeColor;
-(unsigned long long)textOrientation;
-(char)containsRotatedOrFlippedTextBox;

@end

#import <TSText/TSDContainerInfo.h>
#import <TSText/TSDLockableInfo.h>
#import <TSText/TSWPStorageParent.h>
#import <TSText/TSDSelectionStatisticsContributor.h>

@class TSWPStorage, NSArray, TSUColor, NSString, TSDInfoGeometry;

@interface TSWPFlowInfo : TSPObject <TSWPFlowInfo, TSDContainerInfo, TSDLockableInfo, TSWPStorageParent, TSDSelectionStatisticsContributor> {

	TSWPStorage* _textStorage;
	NSArray* _textboxes;
	unsigned long long _userInterfaceIdentifier;

}

@property (nonatomic,retain) TSWPStorage * textStorage;                                                  //@synthesize textStorage=_textStorage - In the implementation block
@property (nonatomic,retain) NSArray * textboxes;                                                        //@synthesize textboxes=_textboxes - In the implementation block
@property (assign,nonatomic) unsigned long long userInterfaceIdentifier;                                 //@synthesize userInterfaceIdentifier=_userInterfaceIdentifier - In the implementation block
@property (nonatomic,readonly) TSUColor * userInterfaceFillColor; 
@property (nonatomic,readonly) TSUColor * userInterfaceStrokeColor; 
@property (nonatomic,readonly) char isLocked; 
@property (nonatomic,readonly) unsigned long long textOrientation; 
@property (nonatomic,readonly) char containsRotatedOrFlippedTextBox; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) char floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) char anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) char inlineWithText; 
@property (getter=isInlineWithTextWithWrap,nonatomic,readonly) char inlineWithTextWithWrap; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) char attachedToBodyText; 
@property (assign,nonatomic) char matchesObjectPlaceholderGeometry; 
@property (nonatomic,readonly) long long nestedTextboxDepth; 
@property (nonatomic,copy,readonly) NSArray * childInfos; 
@property (nonatomic,readonly) char isMaster; 
@property (getter=isLocked,nonatomic,readonly) char locked; 
@property (nonatomic,readonly) char autoListRecognition; 
@property (nonatomic,readonly) char autoListTermination; 
@property (nonatomic,readonly) char textIsLinked; 
@property (nonatomic,readonly) char preventsComments; 
@property (nonatomic,readonly) char preventsChangeTracking; 
@property (nonatomic,readonly) char supportsMultipleColumns; 
@property (nonatomic,readonly) long long contentWritingDirection; 
@property (nonatomic,readonly) char storageChangesInvalidateWrap; 
@property (nonatomic,readonly) char supportsVerticalTextLayoutInChildStorages; 
@property (nonatomic,readonly) char supportsDropCapsInChildStorages; 
+(char)needsObjectUUID;
+(id)fillColorForUserInterfaceIdentifier:(unsigned long long)arg1 ;
+(id)strokeColorForUserInterfaceIdentifier:(unsigned long long)arg1 ;
+(id)p_colorForIndex:(unsigned long long)arg1 ;
+(id)p_darkColorForColor:(id)arg1 ;
+(id)p_darkColorForIndex:(unsigned long long)arg1 ;
-(id)objectUUIDPath;
-(void)dealloc;
-(NSString *)debugDescription;
-(TSWPStorage *)textStorage;
-(char)isSelectable;
-(char)isLocked;
-(void)setTextStorage:(TSWPStorage *)arg1 ;
-(unsigned long long)userInterfaceIdentifier;
-(TSDInfoGeometry *)geometry;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(Class)layoutClass;
-(id)childEnumerator;
-(void)setParentInfo:(NSObject*<TSDInfo>)arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg1 ;
-(Class)repClass;
-(char)isThemeContent;
-(NSObject*<TSDInfo>)parentInfo;
-(TSPObject*<TSDOwningAttachment>)owningAttachment;
-(void)setOwningAttachment:(TSPObject*<TSDOwningAttachment>)arg1 ;
-(TSPObject*<TSDOwningAttachment>)owningAttachmentNoRecurse;
-(char)isFloatingAboveText;
-(char)isAnchoredToText;
-(char)isInlineWithText;
-(char)isAttachedToBodyText;
-(NSArray *)childInfos;
-(char)textIsVerticalAtCharIndex:(unsigned long long)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)processSelectedStoragesWithStatisticsController:(id)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(char)autoListRecognition;
-(char)autoListTermination;
-(long long)contentWritingDirection;
-(void)setPrimitiveGeometry:(id)arg1 ;
-(char)isInlineWithTextWithWrap;
-(id)infoForSelectionPath:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(char)textIsLinked;
-(char)preventsComments;
-(char)preventsChangeTracking;
-(char)supportsMultipleColumns;
-(char)supportsDropCapsInChildStorages;
-(long long)nestedTextboxDepth;
-(unsigned long long)indexOfTextBox:(id)arg1 ;
-(id)displayNameOfMaxLength:(unsigned long long)arg1 usesEllipsis:(char)arg2 ;
-(NSArray *)textboxes;
-(void)setTextboxes:(NSArray *)arg1 ;
-(void)setUserInterfaceIdentifier:(unsigned long long)arg1 ;
-(TSUColor *)userInterfaceFillColor;
-(TSUColor *)userInterfaceStrokeColor;
-(unsigned long long)textOrientation;
-(char)containsRotatedOrFlippedTextBox;
-(id)initWithStorage:(id)arg1 context:(id)arg2 ;
-(void)loadFromFlowInfoArchive:(const FlowInfoArchive*)arg1 unarchiver:(id)arg2 ;
-(void)pSaveToFlowInfoArchive:(FlowInfoArchive*)arg1 archiver:(id)arg2 textBoxes:(id)arg3 ;
-(void)i_uncheckedSetTextboxes:(id)arg1 ;
-(void)saveWithOnlyLinkedTextBoxes:(id)arg1 archiver:(id)arg2 ;
-(id)extractTextStorage;
@end

