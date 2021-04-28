/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSPersistence/TSPObject.h>
#import <TSText/TSWPStorageActionObjectProtocol.h>
#import <TSText/TSKDocumentObject.h>
#import <TSText/TSDOwningAttachment.h>
#import <TSText/TSPCopying.h>
#import <TSText/TSKModel.h>

@class TSWPStorage, NSString;

@interface TSWPAttachment : TSPObject <TSWPStorageActionObjectProtocol, TSKDocumentObject, TSDOwningAttachment, TSPCopying, TSKModel> {

	TSWPStorage* _parentStorage;

}

@property (assign,nonatomic,__weak) TSWPStorage * parentStorage;              //@synthesize parentStorage=_parentStorage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isDrawable; 
@property (nonatomic,readonly) char isAnchored; 
@property (nonatomic,readonly) char isPartitioned; 
@property (nonatomic,readonly) char isAttachedToBodyText; 
@property (nonatomic,readonly) Class positionerClass; 
@property (nonatomic,readonly) char isSearchable; 
@property (nonatomic,readonly) char specifiesEnabledKnobMask; 
@property (nonatomic,readonly) char isHorizontallyCentered; 
@property (nonatomic,readonly) char isVerticallyCentered; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(unsigned long long)attributeArrayKind;
+(id)mostSpecificAttachmentFromInfo:(id)arg1 ;
-(char)changesWithPageNumber;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithContext:(id)arg1 ;
-(char)isDrawable;
-(char)isHorizontallyCentered;
-(char)isVerticallyCentered;
-(unsigned)elementKind;
-(char)isSearchable;
-(unsigned long long)findCharIndex;
-(id)copyWithContext:(id)arg1 ;
-(char)isAnchored;
-(char)isAttachedToBodyText;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(char)specifiesEnabledKnobMask;
-(TSWPStorage *)parentStorage;
-(void)setParentStorage:(TSWPStorage *)arg1 ;
-(char)isPartitioned;
-(Class)positionerClass;
-(void)infoChanged;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(char)changesWithPageCount;
-(id)topLevelAttachment;
-(void)performTemplateLocalization:(id)arg1 ;
-(char)shouldInvalidateWhenTextPropertiesChange;
-(unsigned long long)findCharIndexWithHintIndex:(unsigned long long*)arg1 ;
-(id)objectsForStyleMigrating;
-(char)supportsUUID;
-(void)migrateStyleWithDocumentRoot:(id)arg1 ;
-(char)preserveAttributesOverSelectionWhenInserting;
@end
