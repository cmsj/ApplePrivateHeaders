/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSHashTable, NSArray;

@interface CRKPointerSet : NSObject <NSFastEnumeration> {

	NSHashTable* mBackingStore;

}

@property (nonatomic,readonly) long long count; 
@property (nonatomic,copy,readonly) NSArray * allObjects; 
+(id)setWithSet:(id)arg1 ;
+(id)setWithArray:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CR9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(NSArray *)allObjects;
-(void)removeObject:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(char)containsObject:(id)arg1 ;
-(char)isSubsetOfSet:(id)arg1 ;
-(id)setByIntersectingSet:(id)arg1 ;
-(id)setBySubtractingSet:(id)arg1 ;
@end
