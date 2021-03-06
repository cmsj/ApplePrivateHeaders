/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDPDataHarvester.h>

@class NSMutableDictionary, _CDInteractionStore, NSPredicate, NSArray, NSString;

@interface _CDPInteractionStoreDataHarvester : NSObject <_CDPDataHarvester> {

	NSMutableDictionary* _identifierToContactMap;
	_CDInteractionStore* _store;
	NSPredicate* _predicate;
	NSArray* _interactions;

}

@property (nonatomic,retain) _CDInteractionStore * store;              //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                  //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) NSArray * interactions;                 //@synthesize interactions=_interactions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_CDInteractionStore *)store;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSArray *)interactions;
-(void)setStore:(_CDInteractionStore *)arg1 ;
-(void)loadWithLimit:(unsigned long long)arg1 dataPointReader:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)contactForIdentifier:(id)arg1 ;
@end

