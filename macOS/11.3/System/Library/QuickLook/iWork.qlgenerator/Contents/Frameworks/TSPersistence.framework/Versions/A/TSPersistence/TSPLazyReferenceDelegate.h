/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPLazyReferenceDelegate <NSObject>
@property (nonatomic,readonly) char ignoreReferencesToUnknownObjects; 
@optional
-(void)lazyReference:(id)arg1 didCreateCopy:(id)arg2;

@required
-(id)objectForIdentifier:(long long)arg1;
-(void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(id)arg3;
-(char)readLazyReference:(id)arg1 object:(id*)arg2 error:(id*)arg3;
-(char)ignoreReferencesToUnknownObjects;

@end

