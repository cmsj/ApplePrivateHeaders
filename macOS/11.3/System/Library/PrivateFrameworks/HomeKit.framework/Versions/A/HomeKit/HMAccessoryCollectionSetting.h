/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMAccessorySetting.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSSet;

@interface HMAccessoryCollectionSetting : HMAccessorySetting <NSFastEnumeration>

@property (copy,readonly) NSSet * itemValueClasses; 
+(id)itemValueClassesForKeyPath:(id)arg1 ;
+(void)setItemValueClass:(Class)arg1 forKeyPath:(id)arg2 ;
+(void)setItemValueClasses:(id)arg1 forKeyPath:(id)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_HM7*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)value;
-(Class)valueClass;
-(id)initWithInternal:(id)arg1 ;
-(void)updateValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setItemValueClass:(Class)arg1 ;
-(void)setItemValueClasses:(NSSet *)arg1 ;
-(NSSet *)itemValueClasses;
-(void)_setting:(id)arg1 didAddConstraint:(id)arg2 ;
-(void)_setting:(id)arg1 didRemoveConstraint:(id)arg2 ;
-(id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 ;
-(void)addItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)replaceItems:(id)arg1 withItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)replaceItem:(id)arg1 withItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

