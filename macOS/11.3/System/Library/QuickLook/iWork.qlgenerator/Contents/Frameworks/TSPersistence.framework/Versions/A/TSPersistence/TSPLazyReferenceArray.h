/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class NSMutableArray, NSArray;

@interface TSPLazyReferenceArray : NSMutableArray {

	NSMutableArray* _references;
	unsigned long long _mutations;

}

@property (nonatomic,readonly) NSArray * references;              //@synthesize references=_references - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS15*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeLastObject;
-(id)initWithArray:(id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromArray:(id)arg2 range:(NSRange)arg3 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromArray:(id)arg2 ;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(NSArray *)references;
-(void)addReference:(id)arg1 ;
-(id)referenceAtIndex:(unsigned long long)arg1 ;
@end
