/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/DiscRecording.framework/Versions/A/DiscRecording
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DiscRecording/DiscRecording-Structs.h>
@interface DRSession : NSObject {

	void* _ref;

}
+(void)initialize;
+(void)setupBindings;
+(char)isPropertyKey:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(DRSessionObject*)_obj;
-(unsigned long long)_cfTypeID;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)properties;
-(void)setProperties:(id)arg1 ;
-(id)initWithProperties:(id)arg1 callback:(/*function pointer*/void*)arg2 ;
-(void)setTracks:(id)arg1 ;
-(id)tracks;
-(id)initWithCDText:(id)arg1 ;
-(void)_DiscRecording_KVCSetterPlaceholder:(id)arg1 ;
-(id)_DiscRecording_KVCGetterPlaceholder;
-(int)_preBurnCallback:(id)arg1 ;
-(int)_postBurnCallback;
-(id)initWithProperties:(id)arg1 producer:(id)arg2 ;
-(int)_produceLeadInCallback:(DRSessionProductionInfo*)arg1 ;
@end

