/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Geode/Geode-Structs.h>
#import <Geode/DGOperation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface DGSpotPatchOperation : DGOperation <NSCopying> {

	unsigned long long _inputActiveSpotIndex;
	NSArray* _inputSpots;

}
+(id)attributes;
+(id)_stringsTableName;
+(id)inputKeys;
+(id)outputKeys;
-(id)init;
-(void)setNilValueForKey:(id)arg1 ;
-(id)initWithOperation:(id)arg1 ;
-(id)inputSpots;
-(void)setOperationDefaults;
-(char)needsInputImageWithoutGeometry;
-(void)masterRectChangedFromRect:(PFIntRect_st)arg1 toRect:(PFIntRect_st)arg2 ;
-(char)isVideoCompatible;
-(char)allowDough;
-(id)processImage:(id)arg1 options:(id)arg2 ;
-(id)spotWithCenter:(CGPoint)arg1 radius:(double)arg2 softness:(double)arg3 opacity:(double)arg4 detail:(double)arg5 angle:(double)arg6 ;
-(unsigned long long)inputActiveSpotIndex;
-(void)setInputActiveSpotIndex:(unsigned long long)arg1 ;
-(unsigned long long)spotCount;
-(id)spotAtIndex:(unsigned long long)arg1 ;
-(void)setSpot:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)deleteSpotAtIndex:(unsigned long long)arg1 ;
-(void)addSpot:(id)arg1 ;
-(void)setInputSpots:(id)arg1 ;
-(void)insertObject:(id)arg1 inInputSpotsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromInputSpotsAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInInputSpotsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
@end
