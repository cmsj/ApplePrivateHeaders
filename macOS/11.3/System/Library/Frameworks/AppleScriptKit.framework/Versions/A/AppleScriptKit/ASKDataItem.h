/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppleScriptKit.framework/Versions/A/AppleScriptKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleScriptKit/AppleScriptKit-Structs.h>
#import <AppleScriptKit/ASKDataRow.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ASKDataItem : ASKDataRow <NSCopying> {

	ASKDataItem* _parentItem;
	NSMutableArray* _items;

}
+(id)itemForDataSource:(id)arg1 parentItem:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(id)contents;
-(id)objectSpecifier;
-(void)removeItem:(id)arg1 ;
-(void)removeAllItems;
-(void)setContent:(id)arg1 ;
-(id)content;
-(void)setContents:(id)arg1 ;
-(id)items;
-(id)parentItem;
-(void)setParentItem:(id)arg1 ;
-(char)hasItems;
-(unsigned long long)objectIndex_ask;
-(void)addInItems:(id)arg1 ;
-(void)removeFromItemsAtIndex:(unsigned long long)arg1 ;
-(void)insertInItems:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceInItems:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initForDataSource:(id)arg1 parentItem:(id)arg2 ;
-(char)hasParentItem;
@end
