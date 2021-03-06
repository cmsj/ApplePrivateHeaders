/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSKit.framework/Versions/A/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSKit/TSKit-Structs.h>
@class NSArray, NSString;

@interface TSKSelectionPath : NSObject {

	NSArray* _currentSelection;

}

@property (nonatomic,readonly) NSArray * orderedSelections; 
@property (nonatomic,readonly) NSString * UUIDDescription; 
+(id)selectionPathWithSelectionArray:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithArchive:(const SelectionPathArchive*)arg1 unarchiver:(id)arg2 ;
-(id)mostSpecificSelectionOfClass:(Class)arg1 ;
-(NSString *)UUIDDescription;
-(void)saveToArchive:(SelectionPathArchive*)arg1 archiver:(id)arg2 context:(id)arg3 ;
-(id)selectionPathReplacingMostSpecificLocationOfSelection:(id)arg1 withSelection:(id)arg2 ;
-(id)selectionPathPoppingOffSelection:(id)arg1 ;
-(NSArray *)orderedSelections;
-(id)selectionAtIndex:(unsigned long long)arg1 ;
-(id)initWithSelectionArray:(id)arg1 ;
-(id)selectionPathWithAppendedSelections:(id)arg1 ;
-(unsigned long long)indexForSelection:(id)arg1 ;
-(id)selectionPathWithAppendedSelection:(id)arg1 ;
-(id)selectionPathPoppingToSelection:(id)arg1 ;
-(id)selectionPathByAppendingOrReplacingMostSpecificSelectionWithSelection:(id)arg1 ;
-(id)mostSpecificSelectionConformingToProtocol:(id)arg1 ;
-(id)leastSpecificSelectionOfClass:(Class)arg1 ;
-(void)enumerateSelectionsMostToLeastSpecificInPathUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSelectionsLeastToMostSpecificInPathUsingBlock:(/*^block*/id)arg1 ;
@end

