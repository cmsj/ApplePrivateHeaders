/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSText/TSText-Structs.h>
@class TSWPStorage;

@interface TSWPStorageStyler : NSObject {

	TSWPStorage* _storage;
	unsigned long long _attributeArrayKind;

}

@property (nonatomic,retain) TSWPStorage * storage;                              //@synthesize storage=_storage - In the implementation block
@property (assign,nonatomic) unsigned long long attributeArrayKind;              //@synthesize attributeArrayKind=_attributeArrayKind - In the implementation block
-(TSWPStorage *)storage;
-(void)setStorage:(TSWPStorage *)arg1 ;
-(unsigned long long)attributeArrayKind;
-(id)replacementStyleForStyle:(id)arg1 range:(NSRange)arg2 ;
-(void)applyStyle:(id)arg1 range:(NSRange)arg2 undoTransaction:(TSWPStorageTransactionRef)arg3 ;
-(id)initWithStorage:(id)arg1 attributeArrayKind:(unsigned long long)arg2 ;
-(void)performStylingInRange:(NSRange)arg1 undoTransaction:(TSWPStorageTransactionRef)arg2 ;
-(void)setAttributeArrayKind:(unsigned long long)arg1 ;
@end

