/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSWPTextualAttachment.h>

@class TSWPStorage, NSString;

@interface TSWPFootnoteReferenceAttachment : TSWPTextualAttachment {

	TSWPStorage* _containedStorage;
	NSString* _customMarkString;

}

@property (nonatomic,retain) TSWPStorage * containedStorage;              //@synthesize containedStorage=_containedStorage - In the implementation block
@property (nonatomic,copy) NSString * customMarkString;                   //@synthesize customMarkString=_customMarkString - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithContext:(id)arg1 ;
-(unsigned)elementKind;
-(char)isSearchable;
-(unsigned long long)findCharIndex;
-(id)copyWithContext:(id)arg1 ;
-(id)childEnumerator;
-(void)checkDebug;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(TSWPStorage *)containedStorage;
-(void)setParentStorage:(id)arg1 ;
-(id)stringEquivalent;
-(char)shouldArchiveStringEquivalent;
-(void)setContainedStorage:(TSWPStorage *)arg1 ;
-(id)initWithContext:(id)arg1 wpStorage:(id)arg2 ;
-(void)applyMark;
-(NSString *)customMarkString;
-(void)setCustomMarkString:(NSString *)arg1 ;
-(void)setContainedStorageParentInfoToStorage:(id)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(unsigned long long)findCharIndexWithHintIndex:(unsigned long long*)arg1 ;
-(id)objectsForStyleMigrating;
-(char)supportsUUID;
@end

