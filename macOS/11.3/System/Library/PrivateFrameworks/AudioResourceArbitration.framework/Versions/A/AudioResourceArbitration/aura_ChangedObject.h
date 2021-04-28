/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioResourceArbitration.framework/Versions/A/AudioResourceArbitration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioResourceArbitration/AudioResourceArbitration-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface aura_ChangedObject : NSObject <NSCopying> {

	vector<applesauce::CF::StringRef, std::__1::allocator<applesauce::CF::StringRef>>* _changedNamedProperties;
	vector<AMCP::Address, std::__1::allocator<AMCP::Address>>* _changedCustomProperties;
	vector<aura::ObjectReference, std::__1::allocator<aura::ObjectReference>>* _createdChildren;
	vector<aura::ObjectReference, std::__1::allocator<aura::ObjectReference>>* _destroyedChildren;
	vector<aura_ChangedObject *, std::__1::allocator<aura_ChangedObject *>>* _changedChildren;
	ObjectReference* _object;

}

@property (assign,nonatomic) ObjectReference* object;                                              //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) vector<applesauce::CF::StringRef changedNamedProperties;              //@synthesize changedNamedProperties=_changedNamedProperties - In the implementation block
@property (assign,nonatomic) vector<AMCP::Address changedCustomProperties;                         //@synthesize changedCustomProperties=_changedCustomProperties - In the implementation block
@property (assign,nonatomic) vector<aura::ObjectReference createdChildren;                         //@synthesize createdChildren=_createdChildren - In the implementation block
@property (assign,nonatomic) vector<aura::ObjectReference destroyedChildren;                       //@synthesize destroyedChildren=_destroyedChildren - In the implementation block
@property (assign,nonatomic) vector<aura_ChangedObject * changedChildren;                          //@synthesize changedChildren=_changedChildren - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)setObject:(ObjectReference*)arg1 ;
-(ObjectReference*)object;
-(vector<applesauce::CF::StringRef)changedNamedProperties;
-(vector<AMCP::Address)changedCustomProperties;
-(vector<aura::ObjectReference)createdChildren;
-(vector<aura::ObjectReference)destroyedChildren;
-(vector<aura_ChangedObject *)changedChildren;
-(void)setChangedNamedProperties:(vector<applesauce::CF::StringRef)arg1 ;
-(void)setChangedCustomProperties:(vector<AMCP::Address)arg1 ;
-(void)setCreatedChildren:(vector<aura::ObjectReference)arg1 ;
-(void)setDestroyedChildren:(vector<aura::ObjectReference)arg1 ;
-(void)setChangedChildren:(vector<aura_ChangedObject *)arg1 ;
@end
