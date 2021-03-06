/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioResourceArbitration.framework/Versions/A/AudioResourceArbitration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioResourceArbitration/AudioResourceArbitration-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface aura_SimulatedConfigurationChangeDescription : NSObject <NSCopying> {

	vector<aura_SimulatedIOController *, std::__1::allocator<aura_SimulatedIOController *>>* _createdIOControllers;
	vector<std::__1::tuple<std::__1::weak_ptr<aura::IOController>, aura_SimulatedIOController *>, std::__1::allocator<std::__1::tuple<std::__1::weak_ptr<aura::IOController>, aura_SimulatedIOController *>>>* _modifiedIOControllers;
	vector<std::__1::weak_ptr<aura::IOController>, std::__1::allocator<std::__1::weak_ptr<aura::IOController>>>* _destroyedIOControllers;

}

@property (assign,nonatomic) vector<aura_SimulatedIOController * createdIOControllers;                                         //@synthesize createdIOControllers=_createdIOControllers - In the implementation block
@property (assign,nonatomic) vector<std::__1::tuple<std::__1::weak_ptr<aura::IOController> modifiedIOControllers;              //@synthesize modifiedIOControllers=_modifiedIOControllers - In the implementation block
@property (assign,nonatomic) vector<std::__1::weak_ptr<aura::IOController> destroyedIOControllers;                             //@synthesize destroyedIOControllers=_destroyedIOControllers - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(vector<aura_SimulatedIOController *)createdIOControllers;
-(void)setCreatedIOControllers:(vector<aura_SimulatedIOController *)arg1 ;
-(vector<std::__1::tuple<std::__1::weak_ptr<aura::IOController>)modifiedIOControllers;
-(void)setModifiedIOControllers:(vector<std::__1::tuple<std::__1::weak_ptr<aura::IOController>)arg1 ;
-(vector<std::__1::weak_ptr<aura::IOController>)destroyedIOControllers;
-(void)setDestroyedIOControllers:(vector<std::__1::weak_ptr<aura::IOController>)arg1 ;
@end

