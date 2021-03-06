/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SMEngineProgressPhase : NSObject {

	NSString* _identifier;
	unsigned long long _totalItems;
	unsigned long long _totalSize;
	unsigned long long _completedItems;
	double _smoothedItemRate;
	unsigned long long _completedItemsSinceLastUpdate;
	unsigned long long _completedSize;
	double _smoothedSizeRate;
	unsigned long long _completedSizeSinceLastUpdate;

}

@property (retain) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (assign) unsigned long long completedItems;                             //@synthesize completedItems=_completedItems - In the implementation block
@property (assign) double smoothedItemRate;                                       //@synthesize smoothedItemRate=_smoothedItemRate - In the implementation block
@property (assign) unsigned long long completedItemsSinceLastUpdate;              //@synthesize completedItemsSinceLastUpdate=_completedItemsSinceLastUpdate - In the implementation block
@property (assign) unsigned long long completedSize;                              //@synthesize completedSize=_completedSize - In the implementation block
@property (assign) double smoothedSizeRate;                                       //@synthesize smoothedSizeRate=_smoothedSizeRate - In the implementation block
@property (assign) unsigned long long completedSizeSinceLastUpdate;               //@synthesize completedSizeSinceLastUpdate=_completedSizeSinceLastUpdate - In the implementation block
@property (assign) unsigned long long totalItems;                                 //@synthesize totalItems=_totalItems - In the implementation block
@property (assign) unsigned long long totalSize;                                  //@synthesize totalSize=_totalSize - In the implementation block
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)totalSize;
-(void)setTotalSize:(unsigned long long)arg1 ;
-(unsigned long long)totalItems;
-(unsigned long long)completedItems;
-(void)setCompletedItems:(unsigned long long)arg1 ;
-(void)setCompletedSize:(unsigned long long)arg1 ;
-(unsigned long long)completedSize;
-(void)setTotalItems:(unsigned long long)arg1 ;
-(double)smoothedItemRate;
-(void)setSmoothedItemRate:(double)arg1 ;
-(unsigned long long)completedItemsSinceLastUpdate;
-(void)setCompletedItemsSinceLastUpdate:(unsigned long long)arg1 ;
-(double)smoothedSizeRate;
-(void)setSmoothedSizeRate:(double)arg1 ;
-(unsigned long long)completedSizeSinceLastUpdate;
-(void)setCompletedSizeSinceLastUpdate:(unsigned long long)arg1 ;
@end

