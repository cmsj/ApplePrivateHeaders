/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDHint.h>

@class NSString;

@interface TSDDefaultHint : NSObject <TSDHint> {

	CGRect mBounds;
	unsigned long long mEdges;

}

@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) unsigned long long edges; 
@property (nonatomic,readonly) id<TSDHint> firstChildHint; 
@property (nonatomic,readonly) id<TSDHint> lastChildHint; 
@property (nonatomic,readonly) char isFirstHint; 
@property (nonatomic,readonly) CGSize maximumSize; 
@property (nonatomic,readonly) CGSize effectiveSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)archivedHintClass;
-(CGRect)bounds;
-(unsigned long long)edges;
-(id)initWithBounds:(CGRect)arg1 edges:(unsigned long long)arg2 ;
-(char)isLastPartitionHorizontally:(char)arg1 ;
-(id<TSDHint>)firstChildHint;
-(id<TSDHint>)lastChildHint;
-(id)copyForArchiving;
-(char)overlapsWithSelectionPath:(id)arg1 ;
@end

