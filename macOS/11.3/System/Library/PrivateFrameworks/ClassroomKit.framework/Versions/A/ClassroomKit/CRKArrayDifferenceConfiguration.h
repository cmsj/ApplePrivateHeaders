/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKArrayDifferenceConfiguration <NSObject>
@property (nonatomic,copy) id publishedItemsComparator; 
@property (nonatomic,copy,readonly) id incomingItemsIdentifierFunction; 
@property (nonatomic,copy,readonly) id publishedItemsIdentifierFunction; 
@property (nonatomic,copy) id liftingFunction; 
@property (nonatomic,copy) id updateBlock; 
@required
-(id)updateBlock;
-(void)setUpdateBlock:(/*^block*/id)arg1;
-(void)setLiftingFunction:(/*^block*/id)arg1;
-(id)incomingItemsIdentifierFunction;
-(id)publishedItemsIdentifierFunction;
-(id)publishedItemsComparator;
-(id)liftingFunction;
-(void)setPublishedItemsComparator:(/*^block*/id)arg1;

@end
