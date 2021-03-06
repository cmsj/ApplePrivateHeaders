/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VFX.framework/Versions/A/VFX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface VFX.VFXScene : NSObject {

	 entityManager;

}

@property (assign,nonatomic) char isPlaying; 
@property (assign,nonatomic) char allowsCameraControl; 
@property (readonly,nonatomic) NSArray * bindings; 
+(id)builtinEffectIdentifiers;
+(void)setBuiltinEffectIdentifiers:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(char)isPlaying;
-(void)restart;
-(void)performTransaction:(/*^block*/id)arg1 ;
-(void)setAllowsCameraControl:(char)arg1 ;
-(char)allowsCameraControl;
-(void)setIsPlaying:(char)arg1 ;
-(NSArray *)bindings;
-(void)updateWithDeltaTime:(double)arg1 ;
-(id)initWithContentsOf:(id)arg1 error:(id*)arg2 ;
-(id)bindingOf:(id)arg1 named:(id)arg2 ;
-(id)firstBindingWithName:(id)arg1 ;
-(id)parameterOf:(id)arg1 named:(id)arg2 ;
-(void)setParameterOf:(id)arg1 named:(id)arg2 :(id)arg3 ;
-(void)withPointerToParameterOf:(id)arg1 named:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)setValue:(id)arg1 atPath:(id)arg2 ;
-(id)valueAtPath:(id)arg1 ;
-(void)withPointerToValueAtPath:(id)arg1 block:(/*^block*/id)arg2 ;
@end

